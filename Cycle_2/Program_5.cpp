/*
Name: Govind M J
Register No: 20220041
*/
#include <iostream>
using namespace std;
class Number
{
private:
    static int a[20],n;
public:
    void input()
    {
        cout<<"\nEnter Number of Elements: ";
        cin>>n;
        cout<<"\nEnter the Elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void static average()
    {
        float sum=0,avg=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<"\nAverage of the Elements = "<<(sum/n);
    }
    void multiply(int m)
    {
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]*m;
        }
    }
    void display()
    {
        cout<<"\nArray elements are ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"  ";
        }
    }
    void sort()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                   
                }
            }
        }
        display();
    }
};
int Number::a[];
int Number::n;
int main()
{
    int m;
    Number ob1,ob2,ob3;
    ob1.input();
    ob1.average();
    cout<<"\nEnter the Multiplier: ";
    cin>>m;
    ob2.multiply(m);
    ob1.average();
    ob3.sort();
    return 0;
}
