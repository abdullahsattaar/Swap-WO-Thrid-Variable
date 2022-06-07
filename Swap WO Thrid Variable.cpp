#include<iostream>
using namespace std;
void initialize(int *&a, int *&b, int *&c)
{	
	int x=2,y=4,z=6;
	*a=x;
	*b=y;
	*c=z;	
}
void median(int *&a, int *&b, int *&c)
{
	int median;
	if(*a>*b&&*a<*c||*a>*b&&*a<*c)
		median=*a;
	if(*b>*a&&*b<*c||*b<*a&&*b>*c)
		median=*b;
	if(*c>*a&&*c<*b||*c<*a&&*c>*b)
		median=*c;
	cout<<"Median is :"<<median<<endl;
}

void swap(int *&p1, int *&q1)
{
	*p1=4; *q1=5;
	*p1=*p1+*q1;
	*q1=*p1-*q1;
	*p1=*p1-*q1;
	cout<<"swap value are: "<<*p<<"and"<<*q<<endl;
}
int main()
{
	
	int *p,*q,*r,*p1,*q1;
	initialize(p,q,r);
	median(p,q,r);

	swap(p1,q1);
	system("pause");
	return 0;
}