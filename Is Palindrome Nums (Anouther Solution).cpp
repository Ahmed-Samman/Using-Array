#include<iostream>
using namespace std;

void FillArray(int Array[100], int &ArrLength)
{
	ArrLength = 6;

	Array[0] = 10;
	Array[1] = 20;
	Array[2] = 30;
	Array[3] = 30;
	Array[4] = 20;
	Array[5] = 10;
}


bool IsPalindromeNumber(int Array[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{

		if (Array[i] != Array[ArrLength - 1 - i])
		{
			return false;
		}
	}
	return true;
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
	int Array[100], ArrLength = 0;
	FillArray(Array, ArrLength);


	cout << "Array Elements:\n";
	PrintArrayElements(Array, ArrLength);
	cout << endl;


	if (!IsPalindromeNumber(Array, ArrLength))
	{
		cout << "No, Array isn't Palinderome.\n";
	}
	else
	{
		cout << "Yes, Array is Palinderome.\n";
	}


	return 0;
}