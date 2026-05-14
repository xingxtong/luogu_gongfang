//#define _CRT_SECURE_NO_WARNINGS
//
////数字三角形
//
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int const max1 = 505520;	//最多要存多少个数
//int n;						//有多少层
//int arr[max1];				//用来存三角形
//
////递推解法
//void Iteration(int a)
//{
//	int max3 = 0;
//	//遍历到倒数第一层
//	for (int i = 1; i < n; i++)
//	{
//		max3 = i * (i + 1) / 2;
//		for (int j = i * (i - 1) / 2 + 1; j <= max; ++j)
//		{
//			
//			arr[j+]=
//		}
//	}
//	return;
//}
//
////递归解法
//void Recursion()
//{
//
//	return;
//}
//
//int main()
//{
//	//从文件进入程序
//	ifstream ifile("data.txt");
//	cin.rdbuf(ifile.rdbuf());
//
//	//直接算可以存多少个
//	int max2 = n * (n + 1) / 2;
//	for(int i=1;i<=max2;i++)
//	{
//		cin >> arr[i];
//	}
//
//	//可以直接使用一维数组来存,如果想知道是哪一层就算一算数学关系就行
//	Iteration(max2);
//	return 0;
//}