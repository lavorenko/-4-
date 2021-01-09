
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

void init(int* arr, int n)
{
	printf("Вводите элементы массива\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

int sum(int* arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	printf("Введите размер массива\n");
	scanf_s("%d", &n);
	int* arr = new int[n];
	init(arr, n);
	int summ = sum(arr, n);
	printf("Сумма равна %d", summ);

	delete[] arr;



}