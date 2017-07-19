#include<iostream>
#include<algorithm>
#include<string.h>
#include<cmath>
using namespace std;
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
		sum=0;
		if(n%2==0)
		{
			n=n-1;
		}
		for(int i=n;i>2;i-=2)
		{
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
