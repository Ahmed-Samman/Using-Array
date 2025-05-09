#include<iostream>
using namespace std;


int ReadNum()
{
	int Num = 0;
	
	cout << "Please enter a number: ";
	cin >> Num;

	return Num;
}


void AddNumWithLength(int Num, int Array[100], int& Length)
{

	Array[Length] = Num;
	Length++;

}


void FillArray(int Array[100], int& Length)
{
	bool ChoiceUser = true;
	do
	{
		AddNumWithLength(ReadNum(), Array, Length);

		cout << "Do you want to add more numbers? [0]:No, [1]:Yes? ";
		cin >> ChoiceUser;

	} while (ChoiceUser);
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

	cout << "Array Length: " << Length << endl;
	cout << "Array elements: ";
	PrintArrayElements(Array, Length);
	cout << endl;

	return 0;
}