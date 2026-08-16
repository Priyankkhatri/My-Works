// -------------Bitwise Operators----------------
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 4;
//     int b = 6;
//     cout << " a & b = " << (a&b) << endl;
//     cout << " a | b = " << (a|b) << endl;
//     cout << " ~ a = " << ~a << endl;
//     cout << " a & b = " << (a^b) << endl;



//     int i = 7;
//     cout << (++i) << endl;
//     //8
//     cout << (i++) << endl;
//     //8 , i =9;
//     cout << (i--) << endl;
//     //9, i = 8
//     cout << (--i) << endl;
//     // 7, i=7
//     return 0;
// }



// ---------------------------For Loop--------------------------
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin >> n;
//     cout << "Printing count from 1 to n" << endl;

//     for(int i = 1; i <=n; i++){
//         cout << i << endl;
//     }
//     return 0;
// }

//sum of numbers from 1 to n;
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Total sum: " << sum << endl;

    return 0;
}