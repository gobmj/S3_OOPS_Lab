/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
using namespace std;
class number
{
	public:
	int a,b;
	void swap1(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;	
	}
	void swap2(int *a,int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;	
	}
	void display()
	{
		cout<<"\nFirst Number: "<<a<<"\nSecond Number: "<<b;
  	}
};
int main()
{
	number n;
	cout<<"\nEnter First Number: ";
	cin>>n.a;
	cout<<"\nEnter Second Number: ";
	cin>>n.b;
	cout<<"\nNumbers Before Swapping: ";
	n.display();
	cout<<"\nNumbers After Swapping By Call By Value: ";
	n.swap1(n.a,n.b);	
	n.display();
	cout<<"\nNumbers After Swapping By Call By Reference: ";
	n.swap2(&n.a,&n.b);
	n.display();
	return 0;
}
