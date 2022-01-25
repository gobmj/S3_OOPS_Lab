/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
using namespace std;
class Distance
{
    int ft;
    float inch;
    public:
        Distance(int f,float i)
        {
            ft=f;
            inch=i;
        }
        Distance()
        {
            ft=0;
            inch=0.0;
        }
        void getdata()
        {
            cout<<"\nEnter The Distance in Feet: ";
            cin>>ft;
            cout<<"\nEnter The Distance in Inches: ";
            cin>>inch;
        }
        Distance(float m)
        {
            float l;
            l=(100*m/2.54);
            ft=(int)l/12;
            inch=(l-12*ft);
        }
        void show()
        {
            cout<<"\nThe Distance is "<<ft<<" Feet + "<<inch<<" Inch...";
        }
        operator float()
        {
            return((ft*0.30408)+(inch*0.0254));
        } 
};
int main()
{
    Distance d;
    int ch;
    float metre;
    do
    {
        cout<<"\n______________________MENU______________________";
        cout<<"\nEnter 1 to Convert from Meter to Feet and Inches";
        cout<<"\nEnter 2 to Convert from Feet and Inches to Meter";
        cout<<"\nEnter 0 to Exit Menu";
        cout<<"\n________________________________________________";
        cout<<"\n\nEnter Your Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter distance in metres: ";
                    cin>>metre;
                    d=metre;
                    d.show();
                    break;
            case 2: d.getdata();
                    metre=d;
                    cout<<"\nThe Distance is "<<metre<<" Metres...";
                    break;
            case 0: cout<<"\nExited From Menu...";
                    break;
            default:cout<<"\nInvalid Choice...";
        }
    }while(ch!=0);
    return 0;
}