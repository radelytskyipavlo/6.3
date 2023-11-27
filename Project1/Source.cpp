#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void Create(int arr[],  int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i <<"] = ";
		cin >> arr[i];
	}
}

void Print(int arr[], const int size)
{
	cout << "a[ ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "] = " << endl;
}

int Defolt(int arr[], const int size)                
{
	if (size < 2);
	int i;
	for (i = 1; i < size && !(arr[i - 1] < arr[i]); i++)
		return i >= size;
}

template <typename T>
T Schablon(T arr[], const T size)                      // шаблонна 
{
	if (size < 2)
		;
	int i;
	for (i = 1; i < size && !(arr[i - 1] < arr[i]); i++)
		return i >= size;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 5;
	int a[k];

	Create(a, k);
	Print(a, k);

	if (Schablon(a, k) == 1)        
		cout << "False" << endl;
	else
		cout << "True" << endl;

	if (Defolt(a, k) == 1)        
		cout << "False" << endl;
	else
		cout << "True" << endl;

	return 0;
}