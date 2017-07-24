#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	//p记录字符‘P’位置，t记录字符‘T’位置
	int n,p,t;
	string a;
	cin>>n;
	while(n--)
	{
		cin>>a;

		//找到第一个非‘A’字符，找不到或不为‘P’则答案错误
		p=a.find_first_not_of('A');
		if(p==string::npos||a[p]!='P')
		{
			cout<<"NO\n";
		}
		else
		{
			/*找到‘P’字符后第一个非‘A’字符，答案错误情况
            		1.找不到。
            		2.不为‘T’。
            		3.‘P’和‘T’间无字符‘A’。
            		4.三段‘A’字符串个数不符合条件*/
			t=a.find_first_not_of('A',p+1);
			if(t==string::npos||a[t]!='T'||t-p<2||p*(t-p-1)!=a.length()-t-1)
			{
				cout<<"NO\n";
			}
			else
			{
				cout<<"YES\n";
			}
		}
	}
}
