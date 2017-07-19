#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int a[105];
	int len,num;
	cin>>len>>num;
	num=num%len;
	for(int i=num;i<len;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	cout<<a[0];
	for(int i=1;i<len;i++)
	{
		cout<<" "<<a[i];
	}
}
