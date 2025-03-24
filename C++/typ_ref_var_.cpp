#include <iostream>
using namespace std;

// The Global Value
int p = 50;

int main()
{

     int k, h, x;
     cout << "Enter The Value of a: ";
     cin >> k;
     cout << "Enter The Value of a: ";
     cin >> h;
     x = k + h;

     // Local Value
     cout << "Total value is " << p << endl;
     // Global Value
     cout << "Global value is " << ::p << endl;
     cout << "Global value is " << ::p + p << endl;

     cout << endl;

     // Variables

     float d = 34.4F;
     long double ld = 34.4L;

     cout << "The Value of d is " << d << "\nThe Value of ld is " << ld << endl;

     cout << "\n";

     cout << "The size of 34.4F is " << sizeof(34.4) << endl;
     cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
     cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
     cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
     cout << "The size of 34.4l is " << sizeof(34.4l) << endl;

     cout << endl;

     // ********** Reference Variables ***********

     int v = 500;
     int &g = v;

     cout << v << endl;
     cout << g << endl;

     cout << endl;

     // ********** Typecasting Variables ***********

     int a = 45;
     float b = 45.6;
     char c = 'a';

     cout << float(a) << endl;
     cout << (float)a << endl;
     cout << int(b) << endl;
     cout << (int)b << endl;
     cout << int(c) << endl;

     int e = int(c);
     cout << e << endl;

     cout << endl;

     cout << a + int(b) << endl;
     cout << a + int(c) << endl;
     cout << a + float(b) << endl;
     cout << a + char(b) << endl;
     cout << a + bool(b) << endl;
}