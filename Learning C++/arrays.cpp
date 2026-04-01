#include <iostream>
using namespace std;

int main(){
    int marks[4] = {23,34,53,21};
    // int mathmarks[4];
    // mathmarks[0] = 234;
    // mathmarks[1] = 433;
    // mathmarks[2] = 342;
    // mathmarks[3] = 474;
// cout<<"These are math marks"<<endl;
//     cout << mathmarks[0] << endl; 
//     cout << mathmarks[1] << endl; 
//     cout << mathmarks[2] << endl; 
//     cout << mathmarks[3] << endl;

    //changing the value of an array
    // marks[0]= 50;

    // cout<<"these are marks"<<endl;
    // cout << marks[0] << endl; 
    // cout << marks[1] << endl; 
    // cout << marks[2] << endl; 
    // cout << marks[3] << endl; 

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks is "<<marks[i]<<endl;
    // }
    




    //Pointers and Arrays
    int* p = marks;  //pointer variable named p, equaled to 'marks'
    cout<< *(p++)<<endl;
    cout<< *(++p);
    
    // cout<<"The value of *(p) is "<< *(p) << endl;
    // cout<<"The value of *(p+1) is "<< *(p+1) << endl;
    // cout<<"The value of *(p+2) is "<< *(p+2) << endl;
    // cout<<"The value of *(p+3) is "<< *(p+3) << endl;
     
    




    return 0;
}