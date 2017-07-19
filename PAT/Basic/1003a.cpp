#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
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
				if(p==-1)
				{
					p=i;
				}
				else
				{
					flag=0;
					break;
				}
			}
			else if(a[i]=='T')
			{
				if(t==-1)
				{
					t=i;
				}
				else
				{
					flag=0;
					break;
				}
			}
			else if(a[i]!='A')
			{
				flag=0;
				break;
			}
		}
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
