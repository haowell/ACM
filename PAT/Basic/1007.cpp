#include<iostream>
#include<algorithm>
#include<string.h>
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
	int n,sum;
	while(cin>>n)
	{
		//sum记录素数对的个数
		sum=0;

		//得到小于n的最大奇数
		if(n%2==0)
		{
			n=n-1;
		}
		for(int i=n;i>2;i-=2)
		{
			//判断是否是素数对
			if(isPrime(i))
			{
				if(isPrime(i-2))
				{
					sum++;
				}
			}
		}
		cout<<sum<<"\n";		
	}
}
