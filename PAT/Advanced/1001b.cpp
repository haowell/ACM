#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  int sum,temp;
  while(cin>>a>>b)
    {
		sum=a+b;
		if(sum<0)
		{
			cout<<"-";
		}
		sum=abs(sum);
		string temp=to_string(sum);
		
    }
  return 0;
}
