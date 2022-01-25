/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
using namespace std;
class date
{
	int day,month,year;
	public:
	date()
	{
	    cout<<"\nEnter Date in dd/mm/yyyy Format: ";
	    cin>>day>>month>>year;
	}
	void operator +(int n)
	{		
		if(((day>0)&&(day<32))&&((month>0)&&(month<13))&&(year>0))
		{
			day+=n;
			do
			{
        	    if((day>31)&&((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)))
				{
					day-=31;
					if(month==12)
					{
                        month=1;
						year+=1;			
					}
					else
					{
						month+=1;
					}
				}
				else if((day>30)&&((month==4)||(month==6)||(month==9)||(month==11)))
				{
					day-=30;
					if(month==12)
					{
                        month=1;
						year+=1;				
					}
					else
					{
						month+=1;
					}
				}
				else if((month==2)&&(day>28))
				{
            	    if((year%4==0)&&(year%100!=0)||(year%400==0))
				    {
						if(day==29)
						{
                        	month=2;
					    	day=29;
						}         
						else
						{
							day-=29;
							month=3;
						}   
            	    }
            	   else
				    {
                        month=3;
					    day-=28;            	
            	    }
            	}
			}while(day>31);
            cout<<"\nDate after Increment: ";
            if((day<10)&&(month<10))
            {
                cout<<day<<"/0"<<month<<"/"<<year;
            }
            else if(day<10)
            {
                cout<<day<<"/"<<month<<"/"<<year;
            }
            else if(month<10)
            {
                cout<<day<<"/0"<<month<<"/"<<year;
            }
            else
            {
                cout<<day<<"/"<<month<<"/"<<year;
            }
		}
		else
		{
			cout<<"\nInvalid Date...";
		}	
	}
};
int main()
{
    int n;
	date d;
	cout<<"\nEnter Number of Days to be Incremented: ";
	cin>>n;
	d+n;
	return 0;
}