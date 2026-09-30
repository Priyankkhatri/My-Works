// #include <iostream>
// using namespace std;
// int main(){
//     int num = 2;
//     switch( num ){
//         case 1: cout << "First" << endl;
//         break;
//         case 2: cout << "Character one" << endl;
//         break;
//         default: cout << "It is default case" << endl;
//     } 
//     return 0;
// }


// Mini Calculator Program

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the Value of a: " << endl;
    cin >> a;
    cout << "Enter the Value of b: " << endl;
    cin >> b;
    char op;
    cout << "Enter the operation you wanna perform (+, -, *, /, %): " << endl;
    cin >> op;

    if(op == '+'){
        cout << a + b;
    }
    else if(op == '-'){
        cout << a - b;
    }
    else if(op == '*'){
        cout << a * b;
    }
    else if(op == '/'){
        cout << a / b;
    }
    else if(op == '%'){
        cout << a % b;
    }
    else{
        cout << "Invalid operation";
    }
    return 0;
}