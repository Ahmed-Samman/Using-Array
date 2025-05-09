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


void SumArray1AndArray2(int SumArray[100], int Array1[100], int Array2[100], int ArrLength)
{

	for (int j = 0; j < ArrLength; j++)
	{
		SumArray[j] = Array1[j] + Array2[j];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int  ArrLength = Check_Positive_Num("How many do you want to fill it?");

	int Array1[100];
	ReadFillArrayWithRandomNumbers(Array1, ArrLength);

	int Array2[100];
	ReadFillArrayWithRandomNumbers(Array2, ArrLength);

	cout << "Array 1 elements: ";
	PrintArrayElements(Array1, ArrLength);

	cout << endl << "Array 2 elements: ";
	PrintArrayElements(Array2, ArrLength);
	cout << endl;

	int SumArray[100];
	SumArray1AndArray2(SumArray, Array1, Array2, ArrLength);

	cout << endl << "Sum of array1 and array2 elements: ";
	PrintArrayElements(SumArray, ArrLength);
	cout << endl;

	return 0;
}