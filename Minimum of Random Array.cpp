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


void PrintArrayElements(int Array[100], int ArrLength)
{
	for (int j = 0; j < ArrLength; j++)
	{
		cout << Array[j] << " ";
	}
}


int  MinRandomNumber(int Array[100], int ArrLength)
{
	int MinNumber = Array[0];
	
	for (int i = 0; i < ArrLength; i++)
	{
		if (Array[i] < MinNumber)
		{
			MinNumber = Array[i];
		}
	}
	return MinNumber;
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100];
	int	ArrLength = Check_Positive_Num("How many do you want to fill it?");

	ReadFillArrayWithRandomNumbers(Array, ArrLength);

	cout << "Array Elements: ";
	PrintArrayElements(Array, ArrLength);

	cout << endl << "Min Number in array is: " << MinRandomNumber(Array, ArrLength) << endl;

	return 0;
}