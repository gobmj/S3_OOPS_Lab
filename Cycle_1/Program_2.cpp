/*
Name: Govind M J
Register No: 20220041
*/
#include <iostream>
using namespace std;
class date
{
    private:
    int Year,Month,Day,max;
    public:
    void input()
    {
        cout<<"\nEnter the Date in dd/mm/yyyy Format: ";
        cin>>Day>>Month>>Year;
    }
    void month()
    {
        if((Month>0)&&(Month<=12))
        {
            if((Month==1)||(Month==3)||(Month==5)||(Month==7)||(Month==8)||(Month==10)||(Month==12))
            {
                max=31;
                day();
            }
            else if((Month==4)||(Month==6)||(Month==9)||(Month==11))
            {
                max=30;
                day();
            }
            else if(Month==2)
            {
                if((Year%4==0)&&(Year%100!=0)||(Year%400==0))
                {
                    max=29;
                    day();
                }
                else
                {
                    max=28;
                    day();
                }
            }
        }
        else
        {
            cout <<"\nNot Valid";
        }
    }
    void day()
    {
        if((Day>0)&&(Day<=max))
        {
            validity();
        }
        else
        {
            cout<<"\nNot Valid";
        }
    }
    void validity()
    {
        cout<<"\nValid, ";
        output();
    }
    void output()
    {
        if(Day==max)
        {
            if(Month==12)
            {
                Day=1;
                Month=1;
                Year++;
            }
            else
            {
                Day=1;
                Month++;
            }
        }
        else if(Day!=max)
        {
            Day++;
        }
        if((Day<10)&&(Month<10))
        {
            cout<<"Next date: 0"<<Day<<"/0"<<Month<<"/"<<Year;
        }
        else if(Day<10)
        {
            cout<<"Next date: 0"<<Day<<"/"<<Month<<"/"<<Year;
        }
        else if(Month<10)
        {
            cout<<"Next date: "<<Day<<"/0"<<Month<<"/"<<Year;
        }
        else
        {
            cout<<"Next date: "<<Day<<"/"<<Month<<"/"<<Year;
        }
    }
}d;
int main()
{
    d.input();
    d.month();
    return 0;
}
