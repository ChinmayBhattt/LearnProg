#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favChar;
    float salary;
} e;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){

// **************************** Enum ****************************

enum SweetHeart{age,skin,beutifull};
SweetHeart Nehal = age;

cout << (Nehal==0)<< endl;
     enum meal{breakfast, lunch, dinner};
     meal m1 = breakfast;
     meal m2 = lunch;
     meal m3 = dinner;

     cout<<m1<<endl;
     cout<<m2<<endl;
     cout<<m3<<endl;

    //  cout<<breakfast<<endl;
    //  cout<<lunch<<endl;
    //  cout<<dinner<<endl;


// **************************** Union ****************************

    // union money m1;
    // m1.rice = 21;
    // m1.car = 'C';
    
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;

// **************************** Structure ****************************

//     e harry;
//     harry.id = 12;
//     harry.favChar = 'C';
//     harry.salary = 60000000;

// cout<<endl;

//     cout<<"The ID is "<<harry.id<<endl;
//     cout<<"The Favarate Character is "<<harry.favChar<<endl;
//     cout<<"The Salary is "<<harry.salary<<endl;

// cout<<endl;

    


    return 0;
}