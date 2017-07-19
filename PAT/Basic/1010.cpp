#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int a;
	unsigned int b;
	cin>>a>>b;
	if(b==0)
	{
		cout<<"0 0";
	}
	else
	{
		cout<<int(a*b)<<" "<<b-1;
	}
	while(cin>>a>>b)
	{
		
		if(b!=0)
		{
			cout<<" "<<int(a*b)<<" "<<b-1;
		}
	}
}
