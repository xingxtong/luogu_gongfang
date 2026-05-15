//#define _CRT_SECURE_NO_WARNINGS
//
//#include<fstream>
//
//#include<iostream>
//using namespace std;
//
//int k, n;		// 接收k值
//long long dp[110];
//int kd, id;
//
////普通的循环队列(成功)(很慢)
//void Iteration()
//{
//	dp[0] = 1; dp[1] = 1;
//
//	//初始化dp(普通队列)
//	for (int i = 2; i <= k; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			dp[i] += dp[j];
//		}
//		dp[i] %= 100003;
//	}
//	int nextid = 1;		//表示id的下一个
//	kd = k + 1;			//表示使用dp数组多少的空间
//	//表示进行了几次了(里面用id更新状态表示)
//	for (int i = k + 1; i <= n; i++)
//	{
//		nextid = (id + 2) % kd;
//
//		dp[id] = dp[(id + 1) % kd];
//		//把除了id位置的数全加起来
//		while (nextid != id)
//		{
//
//			dp[id] += dp[nextid];
//			++nextid;
//			if (nextid == kd)
//			{
//				nextid = 0;
//			}
//		}
//		dp[id] %= 100003;
//		//更新id(避免使用%)
//		++id;
//		if (id == kd)
//		{
//			id = 0;
//		}
//	}
//}
//
////前缀和循环队列优化(成功)
//void Iteration1()
//{
//	dp[0] = 1;
//	for (int i = 1; i <= k; i++)
//	{
//		dp[i] = (dp[i - 1] * 2) % 100003;
//	}
//	kd = k + 1;
//	int teid = 0;
//	//表示还要进行多少次
//	for (int i = k + 1; i <= n; i++)
//	{
//		teid = (id + k) % kd;
//		dp[id] = (dp[teid] - dp[id] + dp[teid] + 100003) % 100003;
//		++id;
//		if (id == kd)
//		{
//			id = 0;
//		}
//	}
//
//}
//int main()
//{
//	ifstream ifile("data.txt");
//	cin.rdbuf(ifile.rdbuf());
//	cin >> n >> k;
//	if (k == 1)
//	{
//		cout << 1;
//		return 0;
//	}
//
//	//使用id作为指针来写一个循环前缀和队列(先用一个循环队列来整，后面再优化)
//
//	Iteration1();
//	if (k >= n)
//	{
//		cout << dp[n - 1];
//		return 0;
//	}
//	int id11 = id - 1;
//	//防止id是-1
//	if (id11 == -1)
//	{
//		id11 = k;
//	}
//	int id22 = id11 - 1;
//	if (id22 == -1)
//	{
//		id22 = k;
//	}
//	//
//	cout << (dp[id11] - dp[id22] + 100003) % 100003;
//	return 0;
//}