//Multiplication Table.
#include<iostream>
using namespace std;
int main()
{
    int low_bound, up_bound,i,j;
    cout<<"Start the counter for showing multiplication table: ";
    cin>>low_bound;
    cout<<"Stop the count for showing multiplication table: ";
    cin>>up_bound;

    for(i = low_bound; i<=up_bound;i++)
    {
         cout<<"Multiplication table of "<<i<<" is: "<<"\t";
         for(j = 1; j<13; j++)
         {
             int result =i *j;
             cout<<endl<<i <<" X "<<j<<" \t= "<<result<<endl;
         }
    }
    return 0;
}
