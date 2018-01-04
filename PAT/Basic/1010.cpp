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
	
	//开始考虑特殊情况，输入仅为指数为0的数，输出为零多项式
	//其他情况按正常求导思想实现
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
