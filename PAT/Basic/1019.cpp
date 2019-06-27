#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
char a[4];
char b[4];

//升序排序
bool ascend(char a,char b)
{
	return a<b;
}

//降序排序
bool decend(char a,char b)
{
	return a>b;
}

//打印第一个数字
void printa()
{
	for(int i=0;i<4;i++)
	{
		cout<<a[i];
	}
}

//打印第二个数字
void printb()
{
	for(int i=0;i<4;i++)
	{
		cout<<b[i];
	}
}

//执行减法运算
void sub()
{
	//改变数字位置
	sort(a,a+4,decend);
	sort(b,b+4,ascend);
	
	printa();
	cout<<" - ";
	printb();
	cout<<" = ";
	for(int i=3;i>=0;i--)
	{
		if(a[i]<b[i]&&i!=0)
		{
			a[i]=a[i]-b[i]+10+'0';
			a[i-1]-=1;
		}
		else
		{
			a[i]=a[i]-b[i]+'0';
		}
	}
	printa();
	cout<<"\n";
	
	//输出为0时停止
	if(a[0]=='0'&&a[1]=='0'&&a[2]=='0'&&a[3]=='0')
	{
		return;
	}
	
	//输出为6174时停止
	else if(a[0]=='6'&&a[1]=='1'&&a[2]=='7'&&a[3]=='4')
	{
		return;
	}
	for(int i=0;i<4;i++)
	{
		b[i]=a[i];
	}
	
	sub();
}
int main()
{
	int n;
	while(cin>>n)
	{
		a[0]=b[0]=(n/1000+'0');
		a[1]=b[1]=(n%1000/100+'0');
		a[2]=b[2]=(n%1000%100/10+'0');
		a[3]=b[3]=(n%1000%100%10+'0');
		sub();				
	}	
}
