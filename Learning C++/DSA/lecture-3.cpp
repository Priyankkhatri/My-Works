// ----------Conditional Operators-----------
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cin >> a;
//     //if a is positve
//     if(a>0){
//         cout << "A is Positive" << endl;
//     }
//     else{
//         cout << "A is Negative" << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout << "Enter the value of a: "<<endl;
//     cin >> a;

//     if(a>0){
//         cout << a << " is Positive";
//     }
//     else if(a<0){
//         cout << a << " is Negative";
//     }
//     else{
//         cout << a << " is zero";
//     }
//     return 0;
// }



// ----------------Question---------------
// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if(ch >= 'a' && ch <= 'z'){
//         cout << "This is Lowercase";
//     }
//     else if(ch >= 'A' && ch <= 'Z'){
//         cout << "This is Uppercase";
//     }
//     else if(ch >= '0' && ch <= '9'){
//         cout << "This is Number";
//     }
//     else{
//         cout << "This is a Special Character";
//     }

//     return 0;
// }

// ------------- Loops----------------

// while loop
//question = Print numbers 1 to N;

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }

// Sum 1 to n 
// #include <iostream>
// using namespace std;
// int main(){
    
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;
//     while(i<=n){
//         sum += i;
//         i++;
//     }
//     cout << "Value of sum is: "<< sum<< endl;
//     return 0;
// }


// Find sum of all even numbers

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "enter a number: ";
//     cin >> n;

//     int i = 2;
//     int sum = 0;
//     while(i<=n){
//         sum += i;
//         i += 2;
//     }
//     cout << "The value is: " << sum << endl;
// }

// fahrenheit to celcius table 
// #include <iostream>
// using namespace std;

// int main() {
//     int f = 0;
//     int c;

//     while (f <= 100) {
//         c = (5 * (f - 32)) / 9;
//         cout << f << "\t" << c << endl;
//         f += 10;
//     }

//     return 0;
// }


// Check whether the number is Prime or not
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int i = 2;
//     while(i<n){
//         if(n % i == 0){
//             cout << "Not Prime for: "<< i << endl;
//         }
//         else{
//             cout << "Prime for: "<< i << endl;
//         }
//         i++;
//     }
//     return 0;
// }

// -----------------------------------------PATTERNS--------------------------------------
/*
BAsic pattern question 
*****
*****
*****
*****
*****
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
*/

// 111
// 222
// 333

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }





// 1234
// 1234
// 1234
// 1234

#include <iostream>
using namespace std;

int main(){

    int n ;
    cin >> n;


    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}