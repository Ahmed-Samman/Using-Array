#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };


enPrimeNotPrime Check_Prime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;
}


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


void ReadFillArrayWithRandomNumbers(int Array[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}


void AddNumWithLength(int Num, int Array[100], int& Length)
{

	Array[Length] = Num;
	Length++;

}


void CopyPrimeNumbers(int Array[100], int CopyArray[100], int Length, int &CopyLength)
{

	for (int i = 0; i < Length; i++)
	{
	
		if (Check_Prime(Array[i]) == enPrimeNotPrime::Prime)
			AddNumWithLength(Array[i], CopyArray, CopyLength);
	}
}


void PrintArrayElements(int Array[100], int ArrLength)
{
	for (int j = 0; j < ArrLength; j++)
	{
		cout << Array[j] << " ";
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100], ArrLength = Check_Positive_Num("How many do you want to fill it?");

	ReadFillArrayWithRandomNumbers(Array, ArrLength);


	int CopyArray[100], CopyLength = 0;
	CopyPrimeNumbers(Array, CopyArray, ArrLength, CopyLength);


	cout << "Array 1 elements: ";
	PrintArrayElements(Array, ArrLength);


	cout << endl << "Array 2 prime numbers: ";
	PrintArrayElements(CopyArray, CopyLength);
	cout << endl;

	return 0;
}