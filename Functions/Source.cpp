#include<iostream>
using namespace std;

int Add(int a, int b); // �������� (����������) ������� - Function declaration
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� 2 �����: "; cin >> a >> b;
	int c = Add(a, b); //����� ������� (Function call) - ������������� ����� ���������� �������
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}
int Add(int a, int b) //���������� (�����������) ������� - Fuction definition
{
	//Addtion
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication
	return a * b;
}
double Div(int a, int b)
{
	//Division
	return (double) a / b;
}