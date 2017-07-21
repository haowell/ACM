#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;

//判断是否是素数
bool isPrime(int num)
{
	if(num==2)
	{
		return true;
	}
	else if(num==1||num%2==0) 
	{
		return false;
	}	
	else 
	{
		//遍历小于等于a的奇数，是否能被整除，其中a=sqrt(num)
		for(int i=3;i<=sqrt(num);i+=2)
		{
			if(num%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int main()
{
	int x=3,m,n;

	//计算存储第1个素数到第10000个素数
	int a[10005];
	a[0]=2;
	for(int i=1;i<10000;x+=2)
	{
		if(isPrime(x))
		{
			a[i]=x;
			i++;
		}
	}
	while(cin>>m>>n)
	{
		for(int i=m;i<=n;i++)
		{
			if((i-m)%10==0)
			{
				cout<<a[i-1];
			}
			else if((i-m)%10==9)
			{
				cout<<" "<<a[i-1]<<"\n";
			}
			else
			{
				cout<<" "<<a[i-1];
			}
		}
	}
}
