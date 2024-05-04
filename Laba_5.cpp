#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	const int m = 3, n = 3;
	int a2[m][n];
	int a3[m][n] = {
		{4,3,2},
		{9,1,36},
		{5,8,18}
	};

	int a[m * n * 2] = { 5,8,18, 4,3,2, 9,1,36, 3,1,8, 4,9,5, 2,36,18 };

	for (int i = 0; i < m * n; i += n)
		for (int j = m * n; j < m * n * 2; ++j)
		{
			if (a[i] == a[j])
			{
				int s = (j - m * n) % m; 
				for (int k = 0; k < n; ++k)
					a2[s][k] = a[k + i]; 
			}
		}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cout << a2[i][j] << "\t";
		cout << endl;
	}
}