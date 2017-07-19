#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int use[105];
void test(int num)
{
	int temp;
	if(num==1)
    	{
      		return;
    	}
  	else if(num%2)
    	{
		temp=(3*num+1)/2;
		if(temp<101)
		{
	      		use[temp]=1;
		}
      		test(temp);
    	}
  	else 
    	{
		temp=num/2;
		if(temp<101)
		{
			use[temp]=1;
		}
      		test(temp);
    	}
}
bool comp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,len=0;
	int input[105],import[105];
	memset(use,sizeof(use),0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		test(input[i]);	
	}
	for(int i=0;i<n;i++)
	{
		if(use[input[i]]!=1)
		{
			import[len]=input[i];
			len++;
		}
	}
	sort(import,import+len,comp);
	cout<<import[0];
	for(int i=1;i<len;i++)
	{
		cout<<" "<<import[i];
	}	
}
