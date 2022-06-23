#include<iostream>
using namespace std;

#define tab "\t" 
#define delimiter "\n----------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;


void FillRand(int arr[], const int n);
template<typename T>
void Print(T arr[], const int n);
template<typename T>
T Sum(T arr[], const int n);
template<typename T>
double Avg(T arr[], const int n);
template<typename T>
T minVlaueIn (T arr[], const int n);
template<typename T>
T maxVlaueIn (T arr[], const int n);
template<typename T>
void shiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T>
void shiftRight(T arr[], const int n, const int number_of_shifts2);
template<typename T>
void Sort(T arr[], const int n);

void FillRand(double arr[], const int n);
//void Print(double arr[], const int n);
//double Sum(double arr[], const int n);
//double Avg(double arr[], const int n);
//int minVlaueIn(double arr[], const int n);
//int maxVlaueIn(double arr[], const int n);
//void shiftLeft(double arr[], const int n, const int number_of_shifts);
//void shiftRight(double arr[], const int n, const int number_of_shifts2);

void FillRand(char arr[], const int n);
//void Print(char c_arr[], const int n);


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n)<< endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "Минимальное значение в массиве: " << minVlaueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxVlaueIn(arr, n) << endl;

	int number_of_shift;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shift;
	shiftLeft(arr, n, number_of_shift);
	Print(arr, n);
	int number_of_shift2;
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shift2;
	shiftRight(arr, n, number_of_shift2);
	Print(arr, n);
	

	cout << delimiter << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minVlaueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxVlaueIn(brr, SIZE) << endl;

	cout << "Введите количество сдвигов влево: "; cin >> number_of_shift;
	shiftLeft(brr, SIZE, number_of_shift);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shift2;
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
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T minVlaueIn(T arr[], const int n)
{
	T min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T>
T maxVlaueIn(T arr[], const int n)
{
	T max;
	max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max) max = arr[i];
		}
		return max;
}
template<typename T>
void shiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>
void shiftRight(T arr[], const int n, const int number_of_shifts2)
{
	for (int i = 0; i < number_of_shifts2; i++)
	{
		T buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
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


void FillRand(char c_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		c_arr[i] = rand();
	}
	
}
/*void Print(double brr[], const int n)
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


void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	
}*/



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
template<typename T>
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
