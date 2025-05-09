#include<iostream>
using namespace std;

void FillArray(int Array[100], int& Length)
{
	Length = 10;

	Array[0] = 10;
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


short SearchNumberInArray(int SearchNumber, int Array[100], int ArrLength) //10   //
{

	for (int i = 0; i < ArrLength; i++)
	{
		if (Array[i] == SearchNumber)
			return i;
	}
	return -1;
}


bool IsNumberInArray(int SearchNumber, int Array[100], int CopyLength)
{

	return SearchNumberInArray(SearchNumber, Array, CopyLength) != -1; // ( -1 != -1 ) == false.

}


void AddNumWithLength(int Num, int Array[100], int& Length)
{

	Array[Length] = Num;
	Length++;

}


void CopyDistinctNumbersToArray(int Array[100], int Length, int CopyArray[100], int& CopyLength)
{
	for (int i = 0; i < Length; i++)
	{
		if (!IsNumberInArray(Array[i], CopyArray, CopyLength))
		{
			AddNumWithLength(Array[i], CopyArray, CopyLength);
			
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
	int Array[100], Length = 0;

	FillArray(Array, Length);

	cout << "Array 1 elements:\n";
	PrintArrayElements(Array, Length);
	cout << endl;

	int CopyArray[100], CopyLength = 0;
	CopyDistinctNumbersToArray(Array, Length, CopyArray, CopyLength);


	cout << "Array 2 distinct elements:\n";
	PrintArrayElements(CopyArray, CopyLength);
	cout << endl;

	
	return 0;
}