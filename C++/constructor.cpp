#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:

    Complex(void);
    void printNumber(void){
        cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void){ // default constructor
    a=0;
    b=0;
}
int main(){
    Complex c;
    c.printNumber();
    

    


    return 0;
}