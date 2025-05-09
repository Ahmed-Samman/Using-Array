#include<iostream>
using namespace std;


void SaveNumbersInArray(int Array[100], int& Length)
{
	bool ChoiceUser = true;
	do
	{
		cout << "Please enter a number? ";
		cin >> Array[Length];
		Length++;

		cout << "Do you want to add more numbers? [0]:No, [1]:Yes? ";
		cin >>  ChoiceUser;

		cout << "\n\n";
	
	} while (ChoiceUser == true);

}


void PrintArrayAndLength(int Array[100], int& Length)
{

	for (int i = 0; i < Length; i++)
	{
		cout << Array[i] << " ";
	}
}


int main()
{
	int Array[100] = {}, Length = 0;


	SaveNumbersInArray(Array, Length);

	cout << "Array Length: " << Length << endl;
	cout << "Array elements: ";
	PrintArrayAndLength(Array, Length);
	cout << endl;


	return 0;
}
