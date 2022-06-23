#include<iostream>
using namespace std;

#define tab "\t" 
#define delimiter "\n----------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minVlaueIn (int arr[], const int n);
int maxVlaueIn (int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);
void shiftRight(int arr[], const int n, const int number_of_shifts2);
void Sort(int arr[], const int n);

void FillRand(double arr[], const int n);
void Print(double arr[], const int n);
double Sum(double arr[], const int n);
double Avg(double arr[], const int n);
int minVlaueIn(double arr[], const int n);
int maxVlaueIn(double arr[], const int n);
void shiftLeft(double arr[], const int n, const int number_of_shifts);
void shiftRight(double arr[], const int n, const int number_of_shifts2);

void FillRand(char arr[], const int n);
void Print(char c_arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n)<< endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "����������� �������� � �������: " << minVlaueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxVlaueIn(arr, n) << endl;

	int number_of_shift;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shift;
	shiftLeft(arr, n, number_of_shift);
	Print(arr, n);
	int number_of_shift2;
	cout << "������� ���������� ������� ������: "; cin >> number_of_shift2;
	shiftRight(arr, n, number_of_shift2);
	Print(arr, n);
	

	cout << delimiter << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << minVlaueIn(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << maxVlaueIn(brr, SIZE) << endl;

	cout << "������� ���������� ������� �����: "; cin >> number_of_shift;
	shiftLeft(brr, SIZE, number_of_shift);
	Print(brr, SIZE);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shift2;
	shiftRight(brr, SIZE, number_of_shift2);
	Print(brr, SIZE);
	

	cout << delimiter << endl;

	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS,COLS);
	Print(arr2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minVlaueIn(int arr[], const int n)
{
	int min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxVlaueIn(int arr[], const int n)
{
	int max;
	max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max) max = arr[i];
		}
		return max;
}
void shiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, const int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}


void FillRand(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		brr[i] = (double) (rand() % 10000) /100 ;
	}
	cout << endl;
}
void Print(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
double Sum(double brr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += brr[i];
	}
	return sum;
}
double Avg(double brr[], const int n)
{
	return (double)Sum(brr, n) / n;
}
int minVlaueIn(double brr[], const int n)
{
	int min;
	min = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (brr[i] < min) min = brr[i];
	}
	return min;
}
int maxVlaueIn(double brr[], const int n)
{
	int max;
	max = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (brr[i] > max) max = brr[i];
	}
	return max;
}
void shiftLeft(double brr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = brr[0];
		for (int i = 0; i < n; i++)
		{
			brr[i] = brr[i + 1];
		}
		brr[n - 1] = buffer;
	}
}
void shiftRight(double brr[], const int n, const int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{
		int buffer = brr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			brr[i] = brr[i - 1];
		}
		brr[0] = buffer;
	}
}


void FillRand(char c_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		c_arr[i] = rand();
	}
	
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
