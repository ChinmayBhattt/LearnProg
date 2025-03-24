#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using 3  arguments"<<endl;
    return a+b+c;
}

int volume(int r, int h){
    return(3.14 * r * r *h);
}

int volume(int a){
    return (a * a * a);
}

int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,5)<<endl;

    cout<<endl;

    cout<<"The Volume of cylinder is "<<volume(3,6)<<endl; 
    cout<<"The Volume of Cuboid is "<<volume(3,7,6)<<endl;
    cout<<"The Volume of Cube of side 3 is "<<volume(3)<<endl;

    


    return 0;
}