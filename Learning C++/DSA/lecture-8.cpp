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

// #include <iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout << "Enter the amount: " << endl;
//     cin >> amount;

//     int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n1 = 0;
//     if(amount >= 100){
//         n100 = amount / 100;
//         amount = amount % 100;
//     }
//     if(amount >= 50){
//         n50 = amount / 50;
//         amount = amount % 50;
//     }
//     if(amount >= 20){
//         n20 = amount / 20;
//         amount = amount % 20;
//     }
//     if(amount >= 10){
//         n10 = amount / 10;
//         amount = amount % 10;
//     }
//     if(amount >= 1){
//         n1 = amount / 1;
//         amount = amount % 1;
//     }

//     cout << "100rs Notes = " << n100 << endl;
//     cout << "50rs Notes = " << n50 << endl;
//     cout << "20rs Notes = " << n20 << endl;
//     cout << "10rs Notes = " << n10 << endl;
//     cout << "1rs Notes = " << n1 << endl;

//     return 0;
// }


// // ---------------------__Functions------------

// // power of (a,b)
// #include <iostream>
// using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans *= a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cout << "Enter the number: ";
//     cin >> a;
//     cout << "Enter the power: ";
//     cin >> b;
//     cout << "ans is : "<< power(a, b) << endl;

//     return 0;
// }



// odd even program using function
// #include <iostream>
// using namespace std;

// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter the number you want to check: ";
//     cin>>num;
//     if(isEven(num)){
//         cout << num << " is Even"<<endl;
//     } 
//     else{
//         cout << num << " is Odd"<<endl;;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact *= i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);
//     return num / denom;
// }
// int main(){
//     int n, r;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Enter the value of r: ";
//     cin >> r;
//     cout << "Answer is: " << nCr(n, r) << endl;
//     return 0;
// }


//--------------Counting Program
//Function Signature
// #include <iostream>
// using namespace std;
// //Function Body
// void printCounting(int n){
//     for(int i=1; i<=n; i++){
//         cout << i << endl;
//     }
// }

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin>>n;
// //function call
//     printCounting(n);
//     return 0;
// }

#include <iostream>
using namespace std;

//1-> Prime number
//0-> Not Prime number

bool isPrime(int n){
    for(int i = 2;i<=n;i++){
        //divide ho jata hai toh not a prime number
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    if(isPrime(n)){
        cout << n << " is a Prime number";
    }
    else{
        cout << n << " is not a Prime number";
    }
    return 0;
}