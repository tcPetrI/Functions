#include<iostream>
using namespace std;

#define tab "\t" 
#define delimiter "\n----------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

template <typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{
	setlocale(LC_ALL, "");

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	double d_arr2[ROWS][COLS];
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);

	char c_arr2[ROWS][COLS];
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);

	float f_arr2[ROWS][COLS];
	FillRand(f_arr2, ROWS, COLS);
	Print(f_arr2, ROWS, COLS);
}



template <typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 10;
		}
	}
	cout << endl;
}
template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
