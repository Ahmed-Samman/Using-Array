#include<iostream>
using namespace std;


void FillArray(int Array[100], int& Length)
{
	Length = 10;

	Array[0] = 10;    // Hard code
	Array[1] = 10;
	Array[2] = 10;
	Array[3] = 50;
	Array[4] = 50;
	Array[5] = 70;
	Array[6] = 70;
	Array[7] = 70;
	Array[8] = 70;
	Array[9] = 90;
}


void AddNumWithLength(int Num, int Array[100], int& Length)
{

	Array[Length] = Num;
	Length++;

}


void NumberRepeated(int Array[100], int Length, int CopyArray[100], int &CopyLength)
{
	int Repeated = 0;

	for (int i = 0; i < Length; i++)
	{
		if (Repeated != Array[i])
		{
			Repeated = Array[i];
			AddNumWithLength(Repeated, CopyArray, CopyLength);
		}
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
	int Length = 0;
	int Array[100];  
	FillArray(Array, Length);

	cout << "Array 1 elements: \n";
	PrintArrayElements(Array, Length);
	cout << endl;


	int CopyArray[100], CopyLength = 0;
	NumberRepeated(Array, Length, CopyArray, CopyLength);


	cout << "\nArray 2 distinct elements: \n";
	PrintArrayElements(CopyArray, CopyLength);
	cout << endl;

	return 0;
}