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

// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter the Value of a: " << endl;
//     cin >> a;
//     cout << "Enter the Value of b: " << endl;
//     cin >> b;
//     char op;
//     cout << "Enter the operation you wanna perform (+, -, *, /, %): " << endl;
//     cin >> op;

//     if(op == '+'){
//         cout << a + b;
//     }
//     else if(op == '-'){
//         cout << a - b;
//     }
//     else if(op == '*'){
//         cout << a * b;
//     }
//     else if(op == '/'){
//         cout << a / b;
//     }
//     else if(op == '%'){
//         cout << a % b;
//     }
//     else{
//         cout << "Invalid operation";
//     }
//     return 0;
// }





// ----------------------------------
// -----------------------------HomeWork
// Count how many 100rs, 50rs, 20rs, 10rs, 1rs notes will we need to fulfill the needs of the user's  targeted value

#include <iostream>
using namespace std;
int main(){
    int amount;
    cout << "Enter the amount: " << endl;
    cin >> amount;

    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n1 = 0;
    if(amount >= 100){
        n100 = amount / 100;
        amount = amount % 100;
    }
    if(amount >= 50){
        n50 = amount / 50;
        amount = amount % 50;
    }
    if(amount >= 20){
        n20 = amount / 20;
        amount = amount % 20;
    }
    if(amount >= 10){
        n10 = amount / 10;
        amount = amount % 10;
    }
    if(amount >= 1){
        n1 = amount / 1;
        amount = amount % 1;
    }

    cout << "100rs Notes = " << n100 << endl;
    cout << "50rs Notes = " << n50 << endl;
    cout << "20rs Notes = " << n20 << endl;
    cout << "10rs Notes = " << n10 << endl;
    cout << "1rs Notes = " << n1 << endl;

    return 0;
}