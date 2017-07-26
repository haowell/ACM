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
	int a,b,d,count;
	int num[35];
	while(cin>>a>>b>>d)
	{
		count=0;
		a=a+b;

		//进制转换，结果倒序存放在num数组中，count记录末尾
		while(a!=0)
		{
			num[count]=a%d;
			count++;
			a=a/d;
		}

		//特殊情况，两者和为0
		if(count==0)
		{
			cout<<0;
		}
		else
		{
			for(int i=count-1;i>=0;i--)
			{
				cout<<num[i];
			}
		}
		cout<<"\n";
	}
}
