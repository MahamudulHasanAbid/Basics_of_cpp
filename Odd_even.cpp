#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number for selection: ";
    cin>>n;
     if(n<=0)
    {
        cout<<"Your selected number is Zero or in negative indexed."<<endl;

    }

    else if(n%2 == 0)
    {
        cout<<endl<<"Your number is an even number."<<endl;
    }
    else
    {
        cout<<endl<<"Your number is an odd number."<<endl;
    }

    return 0;
}
