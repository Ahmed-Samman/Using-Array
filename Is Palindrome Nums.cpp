#include<Iostream>
#include<string>
using namespace std;

void FillArray(int Array[100], int &Length)
{

	Length = 6;

	Array[0] = 10;
	Array[1] = 20;
	Array[2] = 30;
	Array[3] = 30;
	Array[4] = 20;
	Array[5] = 10;
}


string PutElementsArrayInVarible(int Array[100], int Length)
{
	string Numbers = "";
	int Tran = 0;

	for (int i = 0; i < Length; i++)
	{

		Tran = Array[i] / 10;
		Numbers += to_string(Tran);
	}
	return Numbers;
}


int Reverse_Numbers(int Num)
{
	int Reminder = 0, Number2 = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}


void Print_Palindrome_Or_Not(int Array[100], int Length)
{

	int Number = stoi(PutElementsArrayInVarible(Array, Length));
	int Revers_Num = Reverse_Numbers(Number);

	if (Number == Revers_Num)
		cout << "\nYes, it's a Polindrome numbre.\n";
	else
		cout << "\nNo, it's Not a Polindrome numbre.\n";
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
	int Array[100], Length;
	FillArray(Array, Length);

	cout << "Array Elements: \n";
	PrintArrayElements(Array, Length);
	cout << endl;


	Print_Palindrome_Or_Not(Array, Length);


	return 0;
}