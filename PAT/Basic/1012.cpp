#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
using namespace std;
int main()
{
	//a2num记录A2类型数个数，判断进行加法还是减法操作，同时用来判断是否存在A2类型数
	//a4num记录A4类型数个数，用来求平均数
	int n,x,a1=0,a2=0,a3=0,a5=-1,a2num=0,a4num=0;
	double a4=0.0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		switch(x%5)
		{
			case 0:
				if(x%2==0)
				{
					a1+=x;
				}
				break;
			case 1:
				if(a2num%2)
				{
					a2-=x;
				}
				else
				{
					a2+=x;
				}
				a2num++;
				break;
			case 2:
				a3++;
				break;
			case 3:
				a4+=x;
				a4num++;
				break;
			case 4:
				if(x>a5)
				{
					a5=x;
				}
				break;
		}
	}
	if(a1==0)
	{
		cout<<"N";
	}
	else
	{
		cout<<a1;
	}

	//只有交错求和的结果可能与初始值相同，因此用是否存在这类数字来判断
	if(a2num==0)
	{
		cout<<" N";
	}
	else
	{
		cout<<" "<<a2;
	}
	if(a3==0)
	{
		cout<<" N";
	}
	else
	{
		cout<<" "<<a3;
	}
	if(a4==0.0)
	{
		cout<<" N";
	}
	else
	{
		//精确到小数点后1位
		cout<<" "<<fixed<<setprecision(1)<<a4/a4num;
	}
	if(a5==-1)
	{
		cout<<" N";
	}
	else
	{
		cout<<" "<<a5;
	}
}
