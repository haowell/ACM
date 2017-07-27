#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

//用use数组记录是否被覆盖，下标表示该数，0表示未被覆盖，1表示被覆盖
int use[105];

//得到num覆盖的数，并将其改为被覆盖
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
    	}
  	else 
    	{
		temp=num/2;
    	}

	//防止得到数越界，输入的数小于等于100，只判断100以内的是否被覆盖，超过的数不考虑
	if(temp<101)
	{
	      	use[temp]=1;
	}
      	test(temp);
}

//排序规则，用来给sort进行降序排序
bool comp(int a,int b)
{
	return a>b;
}
int main()
{
	//len记录关键数的个数
	int n,len=0;

	//input数组记录输入的数，import数组记录关键数，输入的数不会多余100
	int input[105],import[105];

	//初始化是否被覆盖，开始时均未被覆盖
	memset(use,0,sizeof(use));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
		test(input[i]);	
	}
	for(int i=0;i<n;i++)
	{
		//判断输入的数是否被覆盖，即是否是关键数
		if(use[input[i]]!=1)
		{
			import[len]=input[i];
			len++;
		}
	}

	//降序排序
	sort(import,import+len,comp);
	cout<<import[0];
	for(int i=1;i<len;i++)
	{
		cout<<" "<<import[i];
	}	
}
