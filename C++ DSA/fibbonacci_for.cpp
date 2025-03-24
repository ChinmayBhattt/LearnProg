#include <iostream>
using namespace std;

int main()
{
  int n =  10;

  int a = 0;
  int b = 1;
  cout << a << " " << b <<" ";

    for (int i = 0; i <= n; i++)
    {
        int nextNum = a+b;
        cout <<nextNum<<" ";

        a = b;
        b = nextNum;
    }
    


  return 0;

}
  // for (int a = 0, b = 1, c = 2; a >= 0 && b>=1 && c>=2; a--,b--,c--)
  // {
  //   cout << a << " " << b << " " << c << endl;
  
  

  // int i = 0;

  // for (;;)
  // {
  //   if (i <= n)
  //   {

  //     cout << i << endl;
  //   }
  //   else
  //   {
  //     break;
  //   }
  //   i++;
  // }
