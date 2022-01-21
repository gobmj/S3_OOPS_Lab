/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
#include<cmath>
using namespace std;
class overload
{
	public:
	double power(double n,int p)
	{
		return pow(n,p);
	}
	double power(int n,int p)
	{
		return pow(n,p);
	}
	double power(char n,int p)
	{
		return pow(n,p);
	}
	double power(long n,int p)
	{
		return pow(n,p);
	}
}p;
int main()
{
	cout<<"\nValue is: "<<p.power(3746783.25,2);
	cout<<"\nValue is: "<<p.power(5,2);
	cout<<"\nValue is: "<<p.power('b',2);
	cout<<"\nValue is: "<<p.power(6245245354576745768,2);
	return 0;
}
