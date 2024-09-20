#include<iostream>
using namespace std;
int main()
{
    int c=1,n,i;
    while(c>0)
    {
        cout<<"Enter a positive integer"<<endl;
        cin>>n;
        if(n>=0)
        {
            i=n;
            for(i=n;i>=0;i--)
            {
                if(n%i==0)
                {
                    cout<<i<<endl;
                }
            }
        }
        else
        {
            cout<<"Your input is wrong"<<endl;
        }
        cout<<"\nDo You Want To Continue 1/0?"<<endl;
        cout<<"\nEnter 0 for exit"<<endl;
        cin>>c;
    }
};