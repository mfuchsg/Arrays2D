#include<iostream>
using namespace std;

#define sr_arif
#define max
#define min
#define sort
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];
	float sum = 0;
	int buffer = 0;
	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
#ifdef sr_arif
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "������� �������������� �������: " << sum / (ROWS * COLS);
#endif // sr_arif
#ifdef max
	int max = arr[ROWS][COLS];
	for (int i = ROWS - 1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	cout << "������������ �������� � �������: " << max;
#endif // max
#ifdef min
	int min = arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	cout << "���������� �������� � �������: " << min;
#endif // min

	cout << "��������������� ������: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						
					}
				}
			}
		}
	}


	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	
}