/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
using namespace std;
struct phone
{
    int arcode,ex,num;
};
int main()
{
    phone p1,p2;
    p1.arcode=212;
    p1.ex=767;
    p1.num=8900;
    cout<<"\nEnter Area Code, Exchange and Number: ";
    cin>>p2.arcode>>p2.ex>>p2.num;
    cout<<"\nMy Number is ("<<p1.arcode<<")"<<p1.ex<<"-"<<p1.num;
    cout<<"\nYour number is ("<<p2.arcode<<")"<<p2.ex<<"-"<<p2.num;
    return 0;
}
