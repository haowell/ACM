#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
	//数组下标代表数字，对应的值为出现的次数
	int num[10];
	string a;
	while(cin>>a)
	{
		//初始化数组，所有数字出现次数为0
		memset(num,0,sizeof(num));
		for(int i=0;i<a.length();i++)
		{
			num[a[i]-'0']++;		
		}
		for(int i=0;i<10;i++)
		{
			//输出出现次数不为0的数字及其出现次数
			if(num[i]!=0)
			{
				cout<<i<<":"<<num[i]<<"\n";
			}
		}
	}
}
