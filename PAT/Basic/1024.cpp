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
	string a;
	while(cin>>a){	
		//判断正负，负号输出，正号不输出	
		if(a[0]=='-'){
			cout<<"-";
		}
		
		//找到字符‘E’的位置并获得指数的绝对值大小 
		int pos=a.find('E');
		int e=0;
		for(int i=pos+2;i<a.length();i++){
			e=e*10+(a[i]-'0');
		}
		
		//指数符号为负且不为零的情况 
		if(a[pos+1]=='-'&&e>0){
			cout<<"0.";
			for(int i=1;i<e;i++){
				cout<<"0";
			}
			cout<<a[1];
			for(int i=3;i<pos;i++){
				cout<<a[i];
			}
		}
		
		else{
			cout<<a[1];
			int len=pos-3;
			
			//小数点右移后不显示的情况 
			if(len<=e){
				for(int i=3;i<pos;i++){
					cout<<a[i];
				}
				for(int i=0;i<e-len;i++){
					cout<<"0";
				}
			}
			
			//小数点右移后仍显示的情况 
			else{
				for(int i=3;i<e+3;i++){
					cout<<a[i];
				}
				cout<<".";
				for(int i=e+3;i<pos;i++){
					cout<<a[i];
				}
			}
		}
		
		cout<<"\n";
		
	}
}
