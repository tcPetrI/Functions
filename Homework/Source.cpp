#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minVlaueIn (int arr[], const int n);
int maxVlaueIn (int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);
void shiftRight(int arr[], const int n, const int number_of_shifts2);
//void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n)<< endl;
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
	/*cout << "Значения массива в порядке возрастания: " << Sort(arr, n) << endl;
	Print(arr, n);*/

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

