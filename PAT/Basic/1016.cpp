#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	string a,b;
	char da,db;
	
	//asum记录数PA,bsum记录数PB
	int asum,bsum;
	while(cin>>a>>da>>b>>db)
	{
		asum=bsum=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]==da)
			{
				asum=asum*10+(da-'0');
			}		
		}
		for(int i=0;i<b.length();i++)
		{
			if(b[i]==db)
			{
				bsum=bsum*10+(db-'0');
			}		
		}
		cout<<asum+bsum<<"\n";
	}
}
