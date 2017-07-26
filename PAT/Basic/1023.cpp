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
	//数组下标代表数字，值表示个数，flag指示第一个不是0且个数不为0的数字
	int num[10],flag=1;
	for(int i=0;i<10;i++)
	{
		cin>>num[i];
		
		//找到首个不为0的最小数字并输出
		if(flag==1&&i!=0&&num[i]!=0)
		{
			cout<<i;
			num[i]--;
			flag=0;		
		}
	}

	//把小的数先输出
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<num[i];j++)
		{
			cout<<i;
		}	
	}
	cout<<"\n";
}
