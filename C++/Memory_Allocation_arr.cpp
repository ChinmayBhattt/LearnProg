#include<iostream>
using namespace std;

class Shop{
   int itemID[100];
   int itemPrice[100];
   int counter;

   public:
     void initCounter(void) {counter = 0;}
     void setPrice(void);
     void displayPrice(void); 
};

void Shop :: setPrice(void){
    cout<<"Enter The Id of the Item no: "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter Price of the Item: ";
    cin>>itemPrice[counter];
    counter++;

}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of the Item With ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    


    return 0;
}