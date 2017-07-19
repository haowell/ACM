#include<iostream>
#include<math.h>
using namespace std;
//数num砍到1的步数
int step(int num)
{
	//num为1
	if(num==1)
    	{
		return 0;
	}

	//num是不为1的奇数
    	else if(num%2)
    	{
        	int temp=3*num+1;
        	return step(temp/2)+1;
    	}

	//num是偶数
    	else 
    	{
        	return step(num/2)+1;
    	}
}
int main()
{
    	int num;
    	while(cin>>num)
    	{
		cout<<step(num)<<"\n";
    	}
    	return 0;
}
