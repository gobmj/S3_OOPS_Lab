/*
Name: Govind M J
Register No: 20220041
*/
#include<iostream>
using namespace std;
class Bank
{
    char name[20],type[20];
    double accno,bal;
    public:
    void initialize()
    {
        cout<<"\n______Initializing______";
        cout<<"\nEnter Holder's Name: ";
        cin>>name;
        cout<<"\nEnter Account Type: ";
        cin>>type;
        cout<<"\nEnter Account Number: ";
        cin>>accno;
        cout<<"\nEnter Balance: ";
        cin>>bal;
    }
    void deposit()
    {
        cout<<"\n______Deposit______";
        int amnt;
        cout<<"\nEnter Deposit Amount: ";
        cin>>amnt;
        bal+=amnt;
        cout<<"Amount Deposited...New Balance is "<<bal;
    }
    void withdraw()
    {
        cout<<"\n______Withdrawal______";
        int amnt;
        cout<<"\nBalance is: "<<bal;
        cout<<"\nEnter Withdrawal Amount: ";
        cin>>amnt;
        if((amnt<bal)&&(bal>500))
        {
            bal-=amnt;
            cout<<"\nNew Balance is: "<<bal;
        }
        else
        {
            cout<<"\nWithdrawal Not Possible...";
        }
    }
    void display()
    {
        cout<<"\n______Display______";
        cout<<"\nName of Holder: ";
        cout<<name;;
        cout<<"\nAccount Type: ";
        cout<<type;;
        cout<<"\nAccount Number: "<<accno;
        cout<<"\nAccount Balance: "<<bal;
    }
}b;
int main()
{
	int choice;
    b.initialize();
	b.display();
	do
	{
		cout<<"\n______BANK MENU______";
		cout<<"\n1. Deposit";
		cout<<"\n2. Withdraw";
		cout<<"\n0. Termination";
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: b.deposit();
					break;
			case 2: b.withdraw();
					break;
			case 0: break;
			default: cout<<"\nInvalid Choice...";
		}
	}while(choice!=0);
    return 0;
}
