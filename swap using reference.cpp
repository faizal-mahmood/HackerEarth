#include<iostream>
using namespace std;
int swap(int *,int *);
int main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	return 0;
}
int swap(int *p,int *q)
{
	int *temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"First"<<*p;
	cout<<"Second"<<*q;
}
