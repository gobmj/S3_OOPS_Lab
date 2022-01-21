/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
#include <math.h>
using namespace std;
inline float distance(float d1,float d2,float d3)
{
    if((d1<=d2)&&(d1<=d3))
    {
        return d1;
    }
    else if((d2<=d1)&&(d2<=d3))
    {
        return d2;
    }
    else
    {
        return d3;
    }
}
int main()
{
    int ax,bx,cx,ay,by,cy;
    float d1,d2,d3;
    cout<<"\nEnter the First Coordinate: ";
    cin>>ax>>ay;
    cout<<"Enter the Second Coordinate: ";
    cin>>bx>>by;
    cout<<"Enter the Third Coordinate: ";
    cin>>cx>>cy;
    d1=sqrt((pow(bx-ax,2) + pow(by-ay,2)));
    d2=sqrt((pow(cx-bx,2) + pow(cy-by,2)));
    d3=sqrt((pow(cx-ax,2) + pow(cy-ay,2)));
    if((d1+d2<=d3)||(d2+d3<=d1)||(d1+d3<=d2))
    {
        cout<<"\nTriangle is InValid...";
    }
    else
    {
        cout<<"\nTriangle is Valid...";
        cout<<"\nThe Shortest Distance is "<<distance(d1,d2,d3);
    }
    return 0;
}
