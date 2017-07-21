#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int a[105];
	int len,num;
	cin>>len>>num;

	//等价的右移位数
	num=num%len;

	//输入的同时实现移位操作
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
