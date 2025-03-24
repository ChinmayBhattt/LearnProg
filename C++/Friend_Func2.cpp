#include <iostream>
using namespace std;

class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
friend class calculator;
    // friend int calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int calculator ::sumCompComplex(Complex o1, Complex o2);

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum(void)
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;

    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    calculator c;
    int result = c.sumRealComplex(o1, o2);
    int result1 = c.sumCompComplex(o1, o2);

    cout<<"Your Complex Number is "<<result<<" + "<<result1<<"i"<<endl;


    return 0;
}