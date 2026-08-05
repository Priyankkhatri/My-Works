/*
---------FIRST PROGRAM IN C++ ----------
#include <iostream>
using namespace std;

int main(){
    cout << "Hello World" << endl;
    return 0;
}
*/

/*
--------------Dataypes----------------
#include <iostream>
using namespace std;

int main(){
    int a  = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.23;
    cout << f << endl;

    double d = 1.23456789;
    cout << d << endl;

    int size = sizeof(a);
    cout << "Size of a is: " << size << endl;

    int size1 = sizeof(d);
    cout << "Size of d is: " << size1 << endl;
    return 0;
}
*/

// // -----------Typecasting----------
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 'a';
//     cout << a << endl;

//     char ch = 98;
//     cout << ch << endl;

//     char ch1 = 123456;
//     cout << ch1 << endl;
//     return 0;
// }

// -----------------------Operators-----------------------

#include <iostream>
using namespace std;

int main()
{
    int a = 2 / 5;
    cout << a << endl;

    float b = 2.0 / 5;
    cout << b << endl;

    int c = 2;
    int d = 3;
    bool first = (a == b);
    cout << first << endl;

    bool second = (a > b);
    cout << second << endl;

    bool third = (a >= b);
    cout << third << endl;

    bool fourth = (a <= b);
    cout << fourth << endl;

    bool fifth = (a != b);
    cout << fifth << endl;
    return 0;
}