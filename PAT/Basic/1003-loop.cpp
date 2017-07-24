#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	//p记录字符‘P’位置，t记录字符‘T’位置，flag记录答案正确与否
	int n,p,t,flag;
	string a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		flag=1;
		p=-1;
		t=-1;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='P')
			{
				//第一次找到字符‘P’
				if(p==-1)
				{
					p=i;
				}

				//多次找到字符‘P’，答案错误
				else
				{
					flag=0;
					break;
				}
			}
			else if(a[i]=='T')
			{
				//第一次找到字符‘T’
				if(t==-1)
				{
					t=i;
				}

				//多次找到字符‘T’，答案错误
				else
				{
					flag=0;
					break;
				}
			}

			//字符不是‘P’，‘A’，‘T’中任何一个，答案错误
			else if(a[i]!='A')
			{
				flag=0;
				break;
			}
		}

		/*答案错误情况
	        1.字符‘P’，‘T’间无字符‘A’或字符‘T’在字符‘P’前面
	        2.三段‘A’字符串个数不符合条件
	        */
		if((t-p)<2||p*(t-p-1)!=a.length()-t-1)
		{
			flag=0;
		}
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
