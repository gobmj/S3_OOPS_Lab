/*
Name: Govind M J
Register No: 20220041
*/
#include <iostream>
using namespace std;
class measure{
    private:
    float f,i;
    public:
    void initial()
    {
        cout<<"\n____Enter Values of Distance____";
        cout<<"\nEnter Length in Feet: ";
        cin>>f;
        cout<<"Enter Length in Inches: ";
        cin>>i;
    }
    void display()
    {
        cout<<"\n"<<f<<" Feet and "<<i<<" Inches"<<endl;
    }
    void operator<(measure m)  
    {
        float i1 = (f*12)+i;
        float i2 = (m.f*12)+i;
        if(i1<i2)
        {
            cout<<f<<" Feet and "<<i<<" Inch is less than "<<m.f<<" Feet and "<<m.i<<" Inch"<<endl;
        }
        else if(i1==i2)
        {
            cout<<f<<" Feet and "<<i<<" Inch are equal"<<endl;
        }
        else
        {
            cout<<m.f<<" Feet and "<<m.i<<" Inch is greater than "<<f<<" Feet and "<<i<<" Inch"<<endl;
        }
    }   
    friend measure operator +(measure m1,measure m2)
    {
        int rem;
        measure result;
        result.f=m1.f+m2.f;
        result.i=m1.i+m2.i;
        if(result.i>=12)
        {
            result.f=(int)(result.f+((result.i)/12));
            result.i=result.i-12;
        }
        return result;
    }
};
int main()
{
    measure ob1,ob2,ob3;
    ob1.initial();
    ob2.initial();
    ob3=ob1+ob2;
    cout<<"\n____Distances After Addition____";
    ob3.display();
    cout<<"\n____Distances After Comparison____\n";
    ob1<ob2;
    return 0;
}