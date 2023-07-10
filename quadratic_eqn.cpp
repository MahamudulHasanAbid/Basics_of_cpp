#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int b,a,c,r;
    float x1, x2;

    cout<<"Enter the values for a, b, c: ";
    cin>>a>>b>>c;
    r=b*b - 4*a*c;

    if(r>0)
    {
        x1 = (-b + sqrt(r)) /2*a;
        x2 = (-b - sqrt(r)) /2*a;
        cout<<endl<<"The roots are :"<<endl;
        cout<<"x1 is: "<<x1<<endl;
        cout<<"x2 is: "<<x2<<endl;
    }
    else if(r== 0)
    {
        x1 = (-b)/2*a;
        x2 = (-b)/2*a;
        cout<<endl<<"The roots are :"<<endl;
        cout<<"x1 is: "<<x1<<endl;
        cout<<"x2 is: "<<x2<<endl;

    }
    else
    {
        cout<<"The input is not fit for the quadratic equation.";
    }
    return 0;
}
