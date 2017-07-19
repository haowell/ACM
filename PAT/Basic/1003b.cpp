#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
	int n,p,t;
	string a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		p=a.find_first_not_of('A');
		if(p==string::npos||a[p]!='P')
		{
			cout<<"NO\n";
		}
		else
		{
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
