#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int num,len;
	while(cin>>num)
	{
		//得到百位数字，按格式输出
		len=num/100;
		for(int i=1;i<=len;i++)
		{
			cout<<"B";
		}

		//得到十位数字，按格式输出
		len=num%100/10;
		for(int i=1;i<=len;i++)
		{
			cout<<"S";
		}

		//得到个位数字，按格式输出
		len=num%100%10;
		for(int i=1;i<=len;i++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
