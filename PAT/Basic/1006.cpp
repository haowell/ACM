#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int num,len;
	while(cin>>num)
	{
		len=num/100;
		for(int i=1;i<=len;i++)
		{
			cout<<"B";
		}
		len=num%100/10;
		for(int i=1;i<=len;i++)
		{
			cout<<"S";
		}
		len=num%100%10;
		for(int i=1;i<=len;i++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
