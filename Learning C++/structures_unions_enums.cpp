#include <stdio.h>
#include <iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eID;
//     char favChar;
//     float salary;
// };

// int main(){
//     struct employee priyank;
//     priyank.eID = 01;
//     priyank.favChar = 'p';
//     priyank.salary = 120000;

//     cout<<"The Id is " << priyank.eID << endl;
//     cout<<"The fav character is " << priyank.favChar << endl;
//     cout<<"The Salary is " << priyank.salary << endl;
//     return 0;
// }

//By Using Typedef
typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} emp;

int main(){
    emp priyank;
    priyank.eID = 01;
    priyank.favChar = 'p';
    priyank.salary = 120000;

    cout<<"The Id is " << priyank.eID << endl;
    cout<<"The fav character is " << priyank.favChar << endl;
    cout<<"The Salary is " << priyank.salary << endl;
    return 0;
}