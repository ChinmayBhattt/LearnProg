#include <iostream>
using namespace std;

class point
{
    int x, y;

        public:
            point(int a, int b){
                x = a;
                y = b;
            }
        void displayPoint(void){

            cout<<"The Point is ("<<x<<", "<<y<<")"<<endl;
        }
};

int main(){
    point p(1,2);
    p.displayPoint();
    point q(4,6);
    q.displayPoint();



   return 0;
}