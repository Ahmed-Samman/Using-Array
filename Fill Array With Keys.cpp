#include<iostream>
#include<cstdlib>
using namespace std;

enum enCharTypes { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


int Check_Positive_Num(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;

		if (Num <= 0)
			cout << "Number must be > 0:\n";

	} while (Num <= 0);

	return Num;
}


int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}


char RandomCharTypes(enCharTypes CharType)
{
	switch (CharType)
	{
	case enCharTypes::SmallLetter:
		return RandomNumber(97, 122);

	case enCharTypes::CapitalLetter:
		return RandomNumber(65, 90);

	case enCharTypes::SpecialCharacter:
		return RandomNumber(33, 47);

	case enCharTypes::Digit:
		return RandomNumber(48, 57);
	}
}


string GenerateWord(enCharTypes CharType, short Length)
{
	string Word = "";

	for (int i = 1; i <= Length; i++)
	{

		Word = Word + RandomCharTypes(CharType);

	}
	return Word;
}


string GeneratKey()
{
	string Key = "";

	Key = Key + GenerateWord(enCharTypes::CapitalLetter, 4) + '-'
		+ GenerateWord(enCharTypes::CapitalLetter, 4) + '-'
		+ GenerateWord(enCharTypes::CapitalLetter, 4) + '-'
		+ GenerateWord(enCharTypes::CapitalLetter, 4);

	return Key;
}


void FillArray(string Array[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
		Array[i] = GeneratKey();
	
}


void PrintArrayElements(string Array[100], int ArrLength)
{
	for (int j = 0; j < ArrLength; j++)
	{
		cout << "Array [" << j + 1 << "]: " << Array[j] << endl;;
	}
}


int main()
{

	srand((unsigned)time(NULL));

	string Array[100];
	int Length = Check_Positive_Num("Please how many keys to generate? ");

	FillArray(Array, Length);

	PrintArrayElements(Array, Length);
	cout << endl;
	return 0;
}



