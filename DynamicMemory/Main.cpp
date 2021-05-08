#include <iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int& n, const int value);
int* push_front(int arr[], int& n, const int value_fr);
int* insert(int arr[], int& n, const int value, int& index);
int* pop_front(int arr[], int& n);
int* pop_back(int arr[], int& n);
int* erase(int arr[], int& n, int& index);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n; //размер массива
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	int value_fr;
	int index;

	/*cout << "¬ведите добавл€емое значение в начало массива: "; cin >> value_fr;
	cout << "¬ведите добавл€емое значение в конец массива: "; cin >> value;
	arr = push_back(arr, n, value);
	arr = push_front(arr, n, value_fr);
	cout << endl;
	Print(arr, n);
	delete[] arr;*/

	/*cout << "¬ведите добавл€емое значение: "; cin >> value; cout << endl;
	cout << "¬ведите индекс массива, где будет хранитс€ указанное значение: "; cin >> index; cout << endl;
	arr = insert(arr, n,value, index);
	Print(arr, n);
    delete[] arr;*/

	/*cout << "¬ведите индекс массива, где будет удалено значение: "; cin >> index; cout << endl;
	arr = erase(arr, n, index);
	Print(arr, n);
	delete[] arr;*/

	//cout << "”далить первое значение: " << endl;
	//arr = pop_front(arr, n);
	//Print(arr, n);
	//delete[] arr;

	cout << "”далить последнее значение: " << endl;
	arr = pop_back (arr, n);
	Print(arr, n);

	//brr = nullptr;
	//cout << endl;
	//
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i]= rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int* push_back(int arr[], int& n, const int value)
{
	int* brr = new int[n + 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		brr[i] = arr[i];
	}
	delete[] arr;
	brr[n] = value;
	n++;
	arr = brr;
	return arr;
}
int* push_front(int arr[], int& n, const int value_fr)
{
	int* brr = new int[n + 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		brr[i+1] = arr[i];
	}
	delete[] arr;
	brr[0] = value_fr;
	n++;
	arr = brr;
	return arr;
}
int* pop_front(int arr[], int& n)

{
	int* brr = new int[n - 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		if (i == 0) continue;

		else brr[i - 1] = arr[i];
	}
	delete[] arr;
	n--;
	arr = brr;
	return arr;
}
int* pop_back(int arr[], int& n)

{
	int* brr = new int[n - 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		if (i == (n - 1)) break;

		else brr[i] = arr[i];
	}
	delete[] arr;
	n--;
	arr = brr;
	return arr;
}
int* insert(int arr[], int& n, const int value, int& index)
{
	int* brr = new int[n + 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		if (i >= index)
			brr[i + 1] = arr[i];
		else brr[i] = arr[i];
	}
	delete[] arr;
	brr[index] = value;
	n++;
	arr = brr;
	return arr;
}
int* erase(int arr[], int& n, int& index)
{
	int* brr = new int[n + 1]{};// {} занул€ют выдел€емую пам€ть
	for (int i = 0; i < n; i++)
	{
		if (i > index)
			brr[i - 1] = arr[i];
		else brr[i] = arr[i];
	}
	delete[] arr;
	n--;
	arr = brr;
	return arr;
}