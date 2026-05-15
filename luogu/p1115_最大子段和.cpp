#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int n;
int const max1 = 2e5 + 10;
int num, ret;

//dp
//某一个位置的最大子段和与这个位置和这个位置之前的最大子段和相关
void chenggong(int shu)
{
	ret = -0x3f3f3f3f;
	int linshi;
	for (int i = 2; i <= shu; i++)
	{
		cin >> linshi;
		num = max(linshi, num + linshi);
		ret = max(num, ret);
	}
}

void qianzhui()
{

}

int main()
{
	//这道题还得练
	//目前又两个想法：用前缀和(未验证)
	//用线性dp的方法(已验证)
	//除非很快，否则尽量不要特殊处理，尽量写一个通式，然后可以直接访问指定的数组：

	ifstream ifile("data.txt");
	cin.rdbuf(ifile.rdbuf());
	cin >> n >> num;
	chenggong(n);
	cout << ret;
	return 0;
}
