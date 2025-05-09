#include<iostream>
using namespace std;

int Check_Positive_Num(string Message)
{
	int Num = 0;
	do
	{
		cout << Message;
		cin >> Num;

		if (Num <= 0)
			cout << "Number must be > 0:\n";

	} while (Num <= 0);

	return Num;
}


void ReadArrayElements(int Element[100], int & ArrLength)
{

	cout << "Please enter how many elements: \n";
	cin >> ArrLength;

	cout << "Enter array elements: \n";

	for (int i = 0; i < ArrLength; i++)
	{

		cout << "Element [" << i + 1 << "]: ";
		cin >> Element[i];
	}
}


void PrintOriginalArray(int Element[100], int ArrLength, int NumberToCheck)
{

	for (int i = 0; i < ArrLength; i++)
	{

		cout << Element[i] << " ";

	}
}


int NumberRepeated(int Element[100], int ArrLength, int NumberToCheck)
{
	int repeat = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		if (NumberToCheck == Element[i])
		{
			repeat++;
		}
	}
	return repeat;
}


int main()
{
	int Element[100], ArrLength, NumberToCheck;

	ReadArrayElements(Element, ArrLength);

	NumberToCheck = Check_Positive_Num("Enter the number you want to check: ");

	cout << "Original array: ";
	PrintOriginalArray(Element, ArrLength, NumberToCheck);

	cout << endl << NumberToCheck << " is repeated " << NumberRepeated(Element, ArrLength, NumberToCheck) << " time(S).\n";


	return 0;
}