#include<iostream>
#include<cstdlib>
using namespace std;


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


short CountEvenNumbersInArray(int Array[100], int ArrLength)
{
	short Count = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (Array[i] % 2 == 0)
		{
			Count++;
		}
	}
	return Count++;
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

	int Array[100], ArrLength = Check_Positive_Num("Please, how many elements do you want to fill it? ");
	ReadFillArrayWithRandomNumbers(Array, ArrLength);

	cout << "Array elements:";
	PrintArrayElements(Array, ArrLength);
	cout << "\n\n";

	cout << "Even Numbers Count Is: "
		<< CountEvenNumbersInArray(Array, ArrLength)
		<< endl;

	return 0;
}