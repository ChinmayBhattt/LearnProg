#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    friend void add(X ,Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
     friend void add(X ,Y);

};

void add(X o1, Y o2) {
    cout <<endl<<"Summing the data of X and Y objects me " <<(o1.data + o2.num)<<endl;
}

int main()
{
    X a;
    a.setValue(3);

    Y b;
    b.setValue(5);

   add(a, b);


    return 0;
}