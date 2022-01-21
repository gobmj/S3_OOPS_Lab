/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    public:
    float s1,s2,s3,s,ar;
    void validity()
    {
        if ((s1+s2<=s3)||(s1+s3<=s2)||(s2+s3<=s1))
        {
            cout<<"\nTriangle is Invalid...";
        }
        else
        {
            cout<<"\nTriangle is Valid...";
            display();
        }
    }
    void display()
    {
        cout<<"\n\nSides of the Triangle are: "<<s1<<", "<<s2<<" and "<<s3;
        area();
    }
    void area()
    {
        s=(s1+s2+s3)/2;
        ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
        cout<<"\n\nArea of Triangle of Sides "<<s1<<", "<<s2<<" and "<<s3<<" is "<<ar;
    }
}t;
int main()
{
    cout<<"\nEnter Side 1: ";
    cin>>t.s1;
    cout<<"\nEnter Side 2: ";
    cin>>t.s2;
    cout<<"\nEnter Side 3: ";
    cin>>t.s3;
    t.validity();
    return 0;
}
