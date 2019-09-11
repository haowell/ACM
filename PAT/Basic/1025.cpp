#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
#include<string.h>
using namespace std;

//结点，order记录位置，形成原先链表使用
struct Node{
	string address;
	int data;
	string next;
	int order=999999;
};
bool cmp(Node a,Node b){
	return a.order<b.order;
}
int main()
{
	string first;
	int num,item;
	int order=0;	

	cin>>first>>num>>item;
	Node *a = new Node[num];
	for(int i=0;i<num;i++){
		cin>>a[i].address>>a[i].data>>a[i].next;
		
		//确定第一个结点
		if(a[i].address==first){
			a[i].order=order;
			order++;
			first=a[i].next;
		}
	}
	
	//根据第一个结点的资料形成原先的链表
	int iter=0;
	while(first!="-1"){
		if(a[iter%num].address==first){
			a[iter%num].order=order;
			order++;
			first=a[iter%num].next;
		}
		iter++;
	}
	sort(a,a+num,cmp);
	
	//反转链表
	//K个元素的反转
	for(int i=0;i<order/item;i++){
		for(int j=item-1;j>=0;j--){
			
			//第一组满足K个结点元素的特殊输出
			if(i==0&&j==item-1){
				cout<<a[i*item+j].address<<" "<<a[i*item+j].data<<" ";
			}
			else{
				cout<<a[i*item+j].address<<"\n"<<a[i*item+j].address<<" "<<a[i*item+j].data<<" ";
			}
		}
	}
	
	//不足K个元素的反转
	for(int i=order%item;i>0;i--){
		
		//没有一组满足K个结点元素的特殊输出
		if((order/item)==0&&i==(order%item)){
			cout<<a[order-i].address<<" "<<a[order-i].data<<" ";
		}
		else{
			cout<<a[order-i].address<<"\n"<<a[order-i].address<<" "<<a[order-i].data<<" ";
		}
	} 
	
	//最后一个结点的下一节点地址为NULL，输出-1
	cout<<"-1\n";
}
