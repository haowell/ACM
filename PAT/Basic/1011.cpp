#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int n;

	//使用long long int输入
	long long int a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		cout<<"Case #"<<i<<": ";
		if(a+b>c)
		{
			cout<<"true\n";
		}
		else
		{
			cout<<"false\n";
		}
	}
}
