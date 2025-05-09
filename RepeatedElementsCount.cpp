#include<iostream>
#include<string>
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


int ReadArrayElements(int ArrLength, int Element[100])
{
	
	cout << "Enter array elements:\n";
	
	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> Element[i];
	}
	return  Element[100];
}


void CheckArrayNumber(int CheckNum, int CheckArray[100], int ArrLength)
{
	string OriginalArray = "";
	int Times = 0;

	for (int i = 0; i < ArrLength; i++)
	{
		OriginalArray += to_string(CheckArray[i]) + " ";

		if (CheckNum == CheckArray[i])
		{
			Times += 1;
		}
	}
	cout << "Original array: " << OriginalArray << endl;
	cout << CheckNum << " is repeated " << Times << " time(s).\n\n";
}


int main()
{
	int Element[100];
	int ArrLength = Check_Positive_Num("Please enter elements of number: ");

	ReadArrayElements(ArrLength, Element);
	CheckArrayNumber(Check_Positive_Num("\nEnter the number you want to check: "), Element, ArrLength);




	return 0;
}

