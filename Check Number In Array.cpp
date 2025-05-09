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


short SearchNumberInArray(int Array[100], int SearchNumber, int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
	{
		if (Array[i] == SearchNumber)
			return i;
	}
	return -1;
}


bool IsNumberInArray(int Array[100], int SearchNumber, int ArrLength)
{

	return SearchNumberInArray(Array, SearchNumber, ArrLength) != -1; // true

}


int main()
{
	srand((unsigned)time(NULL));


	int Array[100], ArrLength = Check_Positive_Num("How many do you want to fill it?");
	ReadFillArrayWithRandomNumbers(Array, ArrLength);

	cout << "Array 1 elements: ";
	PrintArrayElements(Array, ArrLength);
	cout << endl;

	short SearchNumber = Check_Positive_Num("\nPlease enter a number to search for?");

	cout << "Number you are looking for is: " << SearchNumber << endl;

	if (!IsNumberInArray(Array, SearchNumber, ArrLength)) // Not true = false
		cout << "No, The number is not found:-(\n";

	else
		cout << "Yes, The number is found:-)\n";
	


	return 0;
}