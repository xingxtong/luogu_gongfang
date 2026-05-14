//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int n;
//long long dp[100];
////从第0阶开始，到第n阶结束
////递推解法
//void digui(int a)
//{
//    //递推的方法
//    for(int i=3;i<=n;++i)
//    {
//        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//    }
//}
//
////递归的倒序动态规划
//long long digui2(int a)
//{
//    //小于等于2就直接返回
//    if(a<=2)
//    { 
//        return dp[a];
//    }
//    //存过就直接返回
//    if (dp[a])
//    {
//        return dp[a];
//    }
//    //没有存过就相加
//    dp[a] = digui2(a - 1) + digui2(a - 2) + digui2(a - 3);
//    return dp[a];
//}
//
//int main()
//{
//    ifstream ifile("data.txt");
//	ofstream ofile("result.txt");
//    cin.rdbuf(ifile.rdbuf());
//    cin >> n;
//    dp[0] = 1;
//    dp[1] = 1;
//	dp[2] = 2;
//    digui2(n);
//    cout << dp[n];
//    return 0;
//}