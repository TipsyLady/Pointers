#include <iostream>
using namespace std;
//#define POINTERS_BASICS
//#define POINTERS_AND_ARRAYS
#define tab "\t"
using std::cout;
using std::cin;
using std::endl;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;//получаем адрес переменной 'а' прямо при выводе
	cout << pa << endl;//выводим адрес переменной 'а', хранящейся в указателе 'ра'
	cout << *pa << endl;//разыменовывает указатель 'ра' и выводит значение по адресу

	int* pb;//просто объявляем указатель, без инициализации
	int b = 3;
	pb = &b;
	cout << pb << endl;
	cout << &b << endl;
	cout << b << endl;
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;
	}

#endif // POINTERS_AND_ARRAYS

	int n; //размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);
	delete[] arr;

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}