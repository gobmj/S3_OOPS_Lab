/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
#include<cmath>
using namespace std;
class polar
{
    float rad,angle;
    public:
        polar(float r,float a)
        {
            rad=r;
            angle=a;
        }
        float ang()
        {
            return angle;
        }
        float radius()
        {
            return rad;
        }
        void display()
        {
            cout<<"\nThe Polar Coordinate is"<<"("<<rad<<","<<angle<<")";
        } 
};
class rectangle
{
    float x,y;
    public:
        rectangle()
        {
            x=0;
            y=0;
        }
        rectangle(float a,float b)
        {
            x=a;
            y=b;
        }
        void operator=(polar p)
        {
            x=(p.radius()*cos((p.ang()*3.14)/180));
            y=(p.radius()*sin((p.ang()*3.14)/180));
        }
         void display()
        {
            cout<<"\nThe Rectangular Coordinate is"<<"("<<x<<","<<y<<")";
        }
};
int main()
{
    float rad,angle;
    cout<<"\nEnter the Radius of Polar Coordinate: ";
    cin>>rad;
    cout<<"\nEnter the Angle of Polar Coordinate in Degrees: ";
    cin>>angle;
    polar p(rad,angle);
    rectangle r;
    p.display();
    r=p;
    r.display();
    return 0;
}