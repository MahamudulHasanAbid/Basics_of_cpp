// Write a cpp code for Electricity bill generating. as per condition
// #For first 50 unit 4.60 taka. #Next 100 unit 5.70 taka. #Next 100 unit 6.90 taka. #Next rest units 9.44 taka
#include<iostream>
using namespace std;

int main()
{
    float elec_bill, elec_unit;
    cout<<"What is the total unit of this month: ";
    cin>>elec_unit;

    if (elec_unit<=50)
    {
        elec_bill = elec_unit* 4.60;
        cout<<endl<<elec_unit<<" Unit costs "<<(elec_bill+(elec_bill*20)/100)<<" BDT"<<" with 20% vat."<<endl;
    }

    else if (elec_unit>50 && elec_unit<=150)
    {
        elec_bill = 50*4.60 + (elec_unit-50) * 5.70;
        cout<<endl<<elec_unit<<" Unit costs "<<(elec_bill+(elec_bill*20)/100)<<" BDT"<<" with 20% vat."<<endl;
    }
    else if (elec_unit>151 && elec_unit<=250)
    {
        elec_bill = 50*4.60 + 100*5.70 + (elec_unit-150) * 6.90;
        cout<<endl<<elec_unit<<" Unit costs "<<(elec_bill+(elec_bill*20)/100)<<" BDT"<<" with 20% vat."<<endl;
    }
    else if (elec_unit>250)
    {
        elec_bill = 50*4.60 + 100*5.70 + 100 * 6.90 + (elec_unit-250)* 9.44;
        cout<<endl<<elec_unit<<" Unit costs "<<(elec_bill+(elec_bill*20)/100)<<" BDT"<<" with 20% vat."<<endl;
    }
    return 0;
}
