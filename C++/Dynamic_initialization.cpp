#include<iostream>
using namespace std;

class BankDeposit{

    int principle;
    int years;
    float intereestRate;
    float returnValue;
    public:

        BankDeposit(){}
        BankDeposit(int p, int y, float r); //value is 1.04
        BankDeposit(int p, int y, int r);   //value is 14 
        void show();   
};
BankDeposit :: BankDeposit(int p, int y, float r){
    principle = p;
    years = y;
    intereestRate = r;

    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+intereestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principle = p;
    years = y;
    intereestRate = float(r)/100;

    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+intereestRate);
    }
    
}

void BankDeposit :: show() {
    cout<<endl<<"Principle Amount was "<<principle<<endl
    <<" Return value after "<<years
    <<" is "<<returnValue<<endl;
}
int main(){


    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
 

    return 0;
}