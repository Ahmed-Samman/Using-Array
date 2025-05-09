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


void FillArray(int Array[100], int ArrLength)
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


void FillArrayCopyReversed(int ArrayCopy[100], int Array[100], int ArrLength)
{
	//int Length = ArrLength;

	for (int i = 0; i < ArrLength; i++)
	{

		ArrayCopy[i] = Array[ArrLength - 1 - i];
		//ArrLength--;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Array[100], Length = Check_Positive_Num("Please how many do you fill an array?");
	
	FillArray(Array, Length);
	cout << "Array 1 elements: ";
	PrintArrayElements(Array, Length);
	cout << endl;


	int ArrayCopy[100];
	FillArrayCopyReversed(ArrayCopy, Array, Length);
	cout << "Array 2 elements after copying array 1 in reversed order: ";
	PrintArrayElements(ArrayCopy, Length);
	cout << endl;


	return 0;
}