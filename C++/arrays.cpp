#include<iostream>
using namespace std;

int main(){
/*
    int marks[ ] = {11,22,37,46};
// *********** OR ***********
    // int marks[4] = {11,22,37,46};

    cout<<"These are Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathMarks[4];

    mathMarks[0] = 455;
    mathMarks[1] = 453;
    mathMarks[2] = 6546;
    mathMarks[3] = 565;
    
    cout<<"These are Math Marks"<<endl;
mathMarks[2] = 3535;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
*/

        int marks[4] = {21,32,54,74};

        int* p = marks;
        cout<<"The value of *p is "<<*p<<endl;
        cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
        cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
        cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
        cout<<endl;
        cout<<"The value of *(p++) is "<<*(p++)<<endl;
        cout<<"The value of *(p) is "<<*(p)<<endl;
        cout<<"The value of *(++p) is "<<*(++p)<<endl;
        // cout<<"The value of*(p++) is "<<*(p++)<<endl;
  


        
      
        // for (int i = 0; i < 4; i++)
        // {
        //     cout<<marks[i]<<endl;
        // }
        // int i = 0;
        // while (i<4)
        // {
        //     cout<<marks[i]<<endl;
        //     i++;
        // }
        // do
        // {   
        //     cout<<marks[i]<<endl;
        // i++;
        // } while (i<4);
        
        



    return 0;
}