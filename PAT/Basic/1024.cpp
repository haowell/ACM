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
		//�ж�������������������Ų����	
		if(a[0]=='-'){
			cout<<"-";
		}
		
		//�ҵ��ַ���E����λ�ò����ָ���ľ���ֵ��С 
		int pos=a.find('E');
		int e=0;
		for(int i=pos+2;i<a.length();i++){
			e=e*10+(a[i]-'0');
		}
		
		//ָ������Ϊ���Ҳ�Ϊ������ 
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
			
			//С�������ƺ���ʾ����� 
			if(len<=e){
				for(int i=3;i<pos;i++){
					cout<<a[i];
				}
				for(int i=0;i<e-len;i++){
					cout<<"0";
				}
			}
			
			//С�������ƺ�����ʾ����� 
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
