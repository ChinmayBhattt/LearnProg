#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
        void setID(void){
            salary = 122;
            cout << "Enter the id of Employee: ";
            cin>>id;
        }

        void getID(void){
            cout<<"The ID of the Employee is "<<id<<endl;
        }
};

int main(){
    // employee nehal,nehu;
    // nehal.setID();
    // nehal.getID();
    //  cout<<endl;
    // nehu.setID();
    // nehu.getID();

    employee fb[4];

    for (int i = 0; i <  4; i++)
    {
        cout<<endl;
        fb[i].setID();
        fb[i].getID();
        cout<<endl;
    }
    

//     fb[0].setID();
//     fb[0].getID();
// cout<<endl;    
//     fb[1].setID();
//     fb[1].getID();
// cout<<endl;
//     fb[2].setID();
//     fb[2].getID();
// cout<<endl;
//     fb[3].setID();
//     fb[3].getID();
// cout<<endl;    


    return 0;
}