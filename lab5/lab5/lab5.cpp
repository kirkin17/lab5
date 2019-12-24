#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A[3][2], B[2][3], C[3][3];

	cout << "Введите первую матрицу: \n";
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "A[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> A[i][j];
		}
	}

	cout << "Введите вторую матрицу: \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "B[" << i + 1 << "][" << j + 1 << "]= ";
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			C[i][j] = 0;
			for (int t = 0; t < 2; t++) 
			{
				C[i][j] += A[i][t] * B[t][j];
			}
		}
	}

	cout << "Произведения: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << C[i][j] << " ";
	}
}
