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
	string a;
	int b,r,sum;
	while(cin>>a>>b)
	{
		r=0;
		sum=(a[0]-'0');

		//特殊情况，B大于A
		if(sum/b==0&&a.length()==1)
		{
			cout<<0;
		}

		//A大于等于B且A的首位数字大于等于B，输出首位
		else if(sum/b)
		{
			cout<<sum/b;
		}
		r=sum-sum/b*b;
		for(int i=1;i<a.length();i++)
		{
			sum=r*10+(a[i]-'0');
			cout<<sum/b;
			r=sum-sum/b*b;
		}
		cout<<" "<<r<<"\n";
	}
}
