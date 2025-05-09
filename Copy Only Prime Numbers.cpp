#include<iostream>
#include<cstdlib>
using namespace std;

enum enPrime_NotPrime { Prime = 1, NotPrime = 2 };


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
	if (ArrLength == 0)
	{
		cout << "Not found Prime Numbers.\n";
	}
}


enPrime_NotPrime Check_Prime_Number(int i)
{
	int M = round(i / 2);

	for (int Count = 2; Count <= M; Count++)
	{
		if (i % Count == 0)
		{
			return enPrime_NotPrime::NotPrime;
		}
	}
	return enPrime_NotPrime::Prime;
}


void CopyOnlyPrimeNumber(int Array[100], int CopyArray[100], int ArrLength, int &CopyArrayLength)
{
	
	for (int i = 0; i < ArrLength; i++)
	{
		if (Check_Prime_Number(Array[i]) == enPrime_NotPrime::Prime)
		{
			CopyArray[CopyArrayLength] = Array[i];
			CopyArrayLength += 1;
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));


	int Array[100], ArrLength = Check_Positive_Num("How many do you want to fill it?");
	ReadFillArrayWithRandomNumbers(Array, ArrLength);


	int CopyArray[100], CopyArrayLength = 0;
	CopyOnlyPrimeNumber(Array, CopyArray, ArrLength, CopyArrayLength);


	cout << "Array 1 elements: ";
	PrintArrayElements(Array, ArrLength);


	cout << endl << "Prime Numbers in Array2: ";
	PrintArrayElements(CopyArray, CopyArrayLength);
	cout << endl;

	
	return 0;
}