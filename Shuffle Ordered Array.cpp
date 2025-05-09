#include<iostream>
#include<cstdlib>
using namespace std;

void Swap(int &A, int &B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
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


void FillArray(int Array[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{
		Array[i] = i + 1;
	}
}


void PrintArrayElements(int Array[100], int ArrLength)
{
	for (int j = 0; j < ArrLength; j++)
	{
		cout << Array[j] << " ";
	}
}


void ShuffleArray(int Array[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{

		Swap(Array[RandomNumber(1, ArrLength) - 1], Array[RandomNumber(1, ArrLength) - 1]);
		
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int  ArrLength = Check_Positive_Num("How many do you want to fill it?");

	int Array[100];
	FillArray(Array, ArrLength);

	cout << "Array elements before shuffle: ";
	PrintArrayElements(Array, ArrLength);
	cout << endl;
	
	ShuffleArray(Array, ArrLength);

	cout << endl << "Array elements after shuffle: ";
	PrintArrayElements(Array, ArrLength);
	cout << endl;

	
	return 0;
}