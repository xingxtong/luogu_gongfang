#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<algorithm>

using namespace std;

int const max1 = 40;
int n, m;				//n个人，走m步
int arr[max1][max1];	//表示某一个人，还要走几步，能有几种方案


void Iteration()
{
	for (int i = 2; i <= m; i++)
	{
		int i1 = i - 1;
		//第1个人的第i步
		arr[1][i] = arr[2][i1] + arr[n][i1];
	
		for (int j = 2; j < n; j++)
		{
			arr[j][i] = arr[j + 1][i1] + arr[j - 1][i1];
		}
		arr[n][i] = arr[n - 1][i1] + arr[1][i1];
	}
}

int main()
{
	ifstream ifile("data.txt");
	cin.rdbuf(ifile.rdbuf());
	cin >> n >> m;
	if (m == 1)
	{
		cout << 0;
		return 0;
	}
	else if (n % 2 == 0 && m % 2 == 1)
	{
		cout << 0;
		return 0;
	}
	else if (n % 2 == 1 && n > m)
	{
		cout << 0;
		return 0;
	}

	arr[2][1] = 1;
	arr[n][1] = 1;

	Iteration();
	cout << arr[1][m];

	return 0;
}