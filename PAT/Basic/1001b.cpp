#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //sum记录数num砍到1的步数
    int num,sum;
    while(cin>>num)
    {
	    //num为1时退出循环
        sum=0;
        while(num!=1)
        {
            //num是不为1的奇数
	    if(num%2)
	    {
		num=(3*num+1)/2;
	    }

	    //num是偶数
	    else
	    {
		num/=2;
	    }
	    sum++;
	}  
	cout<<sum<<"\n";
    }
    return 0;
}
