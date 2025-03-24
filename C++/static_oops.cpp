#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter THe id: ";
        cin >> id;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id<<" and this is employee number is "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The Value of count is "<<count; 
    }

};

int employee :: count=1000;

int main()
{
    employee rohan,raj,lovish;
    rohan.setdata();
    rohan.getdata();

    raj.setdata();
    raj.getdata();

    lovish.setdata(); 
    lovish.getdata();

    
 

    return 0;
}

#include <iostream>
// using namespace std;

// class print
// {

//     static int a;

// public:
//     static void get(void)
//     {
//         cout << "Hello" << a;
//     }
// };

// int print ::a = 5;

// int main()
// {

//     print ::get();

//     return 0;
// }