#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char item;
	while(cin>>n>>item){
		int a=0,last=0;
		for(int i=1;;i+=2){
			
			//等差数列计算公式变形获得沙漏中最长一串字符的个数，同时计算剩余字符数 
			if((i-1)*(i+3)>2*n-2){
				a=i-2;
				last=n-1-(a-1)*(a+3)/2;
				break;
			}
		}
		
		//输出沙漏 
		for(int i=0;i<a/2;i++){
			for(int j=0;j<i;j++){
					cout<<" ";
			}
			for(int j=0;j<a-2*i;j++){
					cout<<item;
			}
			cout<<"\n";
		}
		for(int i=a/2;i>=0;i--){
			for(int j=0;j<i;j++){
					cout<<" ";
			}
			for(int j=0;j<a-2*i;j++){
					cout<<item;
			}
			cout<<"\n";
		}
		
		//输出剩余字符数
		cout<<last<<"\n";
	}
}
