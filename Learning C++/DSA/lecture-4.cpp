// ----------------------------------------------------Patterns part 2---------------------------------------------
// 1234
// 1234
// 1234
// 1234

// #include <iostream>
// using namespace std;

// int main(){

//     int n ;
//     cin >> n;


//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

// -------------------Homework---------------
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << n-j+1;
            j++;
        }
        cout<< endl;
        i++;
    }
    return 0;
}