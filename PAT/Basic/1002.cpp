#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
void tran(int unit)
{
    switch(unit)
    {
        case 0:
	    cout<<"ling";
	    break;
        case 1:
	    cout<<"yi";
	    break;
        case 2:
	    cout<<"er";
	    break;
        case 3:
	    cout<<"san";
	    break;
        case 4:
	    cout<<"si";
	    break;
        case 5:
	    cout<<"wu";
	    break;
        case 6:
	    cout<<"liu";
	    break;
        case 7:
	    cout<<"qi";
	    break;
        case 8:
	    cout<<"ba";
	    break;
        case 9:
	    cout<<"jiu";
	    break;
    }
}
void conv(int num)
{
    int hundreds,decade,unit;
    hundreds=num/100;
    decade=num%100/10;
    unit=num%100%10;
    if(hundreds)
    {
	tran(hundreds);
	cout<<" ";
	tran(decade);
	cout<<" ";
	tran(unit);
	cout<<"\n";
    }
    else if(decade)
    {
    	tran(decade);
	cout<<" ";
	tran(unit);
	cout<<"\n";
    }
    else
    {
	tran(unit);
	cout<<"\n";
    }    
}
int main()
{
    string a;
    int sum;
    while(cin>>a)
    {
	sum=0;
    	for(int i=0;i < a.length();i++)
	{
	    sum+=(a[i]-'0');
	}
	conv(sum);
    }
}
