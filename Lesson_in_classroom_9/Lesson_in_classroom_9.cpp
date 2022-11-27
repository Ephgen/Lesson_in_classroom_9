// Lesson_in_classroom_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

//int massort(int arr[], int vibor, int size1)
//{
//	int poz1 = size1, poz2 = size1;
//	for (int i = 0; i < size1; i++) {
//		if (arr[i] < 0)
//		{
//			poz1 = i;
//			break;
//		}
//	}
//	for (int i = size1 - 1; i >= 0; i--) {
//		if (arr[i] < 0) {
//			poz2 = i;
//			break;
//		}
//	}
//	if (vibor == 1)
//	{
//		for (int j = poz1 + 1; j < poz2 - 1; j++) {
//			for (int i = poz1 + 1; i < poz2 - 1; i++) {
//				if (arr[i] > arr[i + 1])
//					swap(arr[i], arr[i + 1]);
//			}
//		}
//	}
//	else
//	{
//		for (int j = poz1 + 1; j < poz2 - 1; j++) {
//			for (int i = poz1 + 1; i < poz2 - 1; i++) {
//				if (arr[i] < arr[i + 1])
//					swap(arr[i], arr[i + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < size1; i++) {
//		cout << arr[i] << " ";
//	}
//	return arr[size1];
//}.
//const int size1 = 10;
//
//const int g = 5;
//const int k = 2;

//template <typename T>
//T maxim(T arr[], int size)
//{
//	T maxim = arr[0];
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > maxim)
//			maxim = arr[i];
//	}
//	cout << maxim;
//	return maxim;
//}
//
// template <typename T>
//T maxim(T arr1[][size1], int k)
//{
//	T maxim = arr1[0][0];
//	for (int j = 0; j < k; j++) {
//		for (int i = 0; i < size1; i++) {
//			if (maxim < arr1[j][i])
//				maxim = arr1[j][i];
//		}
//		
//	}
//	cout << maxim;
//	return maxim;
//}
//
//template <typename T>
//T maxim(T arr2[][k][g], int k)
//{
//	float maxim = arr2[0][0][0];
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < k; j++) {
//			for (int k = 0; k < g; k++) {
//				if (maxim < arr2[i][j][k])
//					maxim = arr2[i][j][k];
//			}
//		}
//	}
//	cout << maxim;
//	return maxim;
//}
void recurs(int a, int b)
{
	int c = 0;
	if (a > b)
		swap(a, b);		
	for(int i = b; i >= a; i--) {
		if (i == a)
			cout << i << " =";
		else
		cout << i <<" + ";
		c += i;
		
	}
	cout << " " << c;
}
//int summa(int a, int b)
//{
//	if (b == a - 1)
//	{
//		cout << b << " = ";
//		return 0;
//	}
//	cout << b << " + ";
//	return b + summa(a, b - 1);
//}

int summa(int a, int b)
{
	if (b + 1 == a)
	{
		cout << " = ";
		return 0;
	}
	if (b != a)
		cout << a << " + ";
	else
		cout << a;
		
		return a + summa(a + 1, b);	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	///*int const size1 = 10;
	//int vibor = 0;
	//int arr[size1];
	//for (int i = 0; i < size1; i++) {
	//	arr[i] = rand() % (20 - (-20)) + (-20);
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//while (true)
	//{
	//	cout << " Как хотите его отсортировать? \n 1 - по возрастанию.\n 2 - по убыванию." << endl;
	//	cin >> vibor;
	//	if (vibor == 1 || vibor == 2)
	//		break;
	//}
	//massort(arr, vibor, size1);*/ 

	//
	//float arr[size1];
	//const int size1 = 10;
	//for (int i = 0; i < size1; i++) {
	//	arr[i] = rand() % (20 - (-20)) + (-20);
	//	cout << arr[i] << " ";
	//}
	//cout << endl << endl;
	//

	//maxim(arr, size1);
	//cout << endl << endl;
	//
	//float arr1[k][size1];
	//for (int j = 0; j < k; j++) {
	//	for (int i = 0; i < size1; i++) {
	//		arr1[j][i] = rand() % (20 - (-20)) + (-20);
	//		cout << arr1[j][i] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//maxim(arr1,k);
	//cout << endl << endl;
	//

	//float arr2[k][k][g];
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		for (int k = 0; k < 5; k++) {
	//			arr2[i][j][k] = rand() % (20 - (-20)) + (-20);
	//			cout << arr2[i][j][k] << " ";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}
	//maxim(arr2,k);

	/*int a, b;
	cout << " От какого числа произвести сложение?\n";
	cin >> a;
	cout << " До какого числа произвести сложение\n";
	cin >> b;
	recurs(a, b);*/
	cout << summa(1, 10);
}

