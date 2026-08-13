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
// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << n-j+1;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
//     return 0;
// }

// 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int count = 1;

//     while (i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// star pattern question
// *
// **
// ***
// ****
// *****
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     int count = 1;

//     while(row<=n){
//         int col = 1;
//         while(col <= row){
//             cout << "*";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col <= row){
//             cout << row ;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }




// *   *
//  * * 
//   *  
//  * * 
// *   *
// #include <iostream>
// using namespace std;

// int main()
// {

//     int row;
//     int col;

//     cin >> row;
//     cin >> col;

//     for (int i = 0; i <= row; i++)
//     {
//         for (int j = 0; j <= col; j++)
//         {
//             if (i == j || i + j == 4){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1
// 2 3 
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     int count = 1;
//     while(row<=n){
//     int col = 1;
//         while(col <= row){
//             cout << count << " ";
//             count++;
//             col++;
//         }        
//         cout << endl;
//         row++;
//     }
//     return 0;
// }


// 1
// 2 3
// 3 4 5
// 4 5 6 7

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         int value = row;
//         while(col <= row){
//             cout << value;
//             col++;
//             value++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cin >> n;

//     int value=1;
//     for(int row=1; row<=n; row++){
//         for(int col=1; col<=row;){
//             cout << value << " ";
//             value++
//             col++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// -----Alternative way of doing this question
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int row =1;
//     while(row <= n){
//         int col = 1;
//         while(col <=row){
//             cout << row + col -1 << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }


// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout << row - col + 1 << " ";
//             col ++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }

// Same question in for loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int row = 1; row<=n; row++){
//         for(int col = 1; col <= row; col++){
//             cout << row - col + 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }