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
	double clk=100.0;
	unsigned long long int a,b,time,hour,minute,second;
	while(cin>>a>>b){
		
		//四舍五入获得总运行秒数
		time=round((b-a)/clk);
		
		//根据单位换算获得结果
		hour=time/3600;
		minute=time%3600/60;
		second=time%3600%60;
		cout<<(hour<10?"0":"")<<hour<<":"<<(minute<10?"0":"")<<minute<<":"<<(second<10?"0":"")<<second<<"\n";
	}
}
