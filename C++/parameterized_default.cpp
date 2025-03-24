#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:

    Complex(int, int);
    void printNumber(void){
        cout<<"Your Complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y){ // parameterized constructor
    a=x;
    b=y;
}
int main(){
    // Implicit Call
    Complex a(4,6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5,7);
    b.printNumber();
    

    


    return 0;
}