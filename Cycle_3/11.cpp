/*
Name: Govind M J
Register No: 20220041
*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    int r,i;
    public:
    Complex(int a=0,int b=0)
    { 
        r=a;
        i=b;
    }
    friend ostream &operator <<(ostream &out,const Complex &c);
    friend istream &operator >>(istream &in,Complex &c);
};
ostream &operator <<(ostream &out,const Complex &c)
{
    out<<c.r;
    out<<"+"<<c.i<<"i";
    return out;
}
istream &operator >>(istream &in,Complex &c)
{
    cout<<"\nEnter the Real Part of the Complex Number:  ";
    in>>c.r;
    cout<<"\nEnter the Imaginary Part of the Complex Number:  ";
    in>>c.i;
    return in;
} 
int main()
{
   Complex num;
   cin>>num;
   cout<<"\nThe Complex Number is: ";
   cout<<num;
   return 0;
}