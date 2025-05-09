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


void CopyArrayElements(int Array[100], int CopyArray[100], int ArrLength)
{
	
	for (int i = 0; i < ArrLength; i++)
	{
		CopyArray[i] = Array[i];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100], ArrLength = Check_Positive_Num("How many do you want to fill it?");

	ReadFillArrayWithRandomNumbers(Array, ArrLength);


	int CopyArray[100];
	CopyArrayElements(Array, CopyArray, ArrLength);


	cout << "Array 1 elements: ";
	PrintArrayElements(Array, ArrLength);


	cout << endl << "Array 2 elements after copy: ";  
	PrintArrayElements(CopyArray, ArrLength);
	cout << endl;

	return 0;
}