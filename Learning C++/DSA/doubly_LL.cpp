// #include <iostream>
// using namespace std;


// struct Node
// {
//     int value;
//     Node* next;
//     Node* prev;
// };
// void Display(Node* head){
//     Node* temp=head;

//     while(temp!=nullptr){
//         cout<<temp->value<<" <-> ";
//         temp=temp->next;
//     }

//     cout<<"null"<<endl;

// }

// void insertAtFirst(Node*&head,int val){
//     Node* temp=new Node();
//     temp->value=val;
//     temp->prev=nullptr;
//     temp->next=head;
//     head->prev=temp;
//     head=temp;
// }

// void insertAtlast(Node*& head,int val){
//     Node* temp=head;
//     Node* temp1=new Node();
//     temp1->value=val;

//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=temp1;
//     temp1->next=nullptr;
//     temp1->prev=temp;
// }

// void insertAttarget(Node*& head,int val,int target){
//     Node* temp=new Node();
//     temp->value=val;
//     Node* temp1=head;

//     while(temp1->next->value!=target&& temp1->next!=nullptr){
//         temp1=temp1->next;
//     }
//     if(temp1==nullptr){
//         cout<<"target not found";
//         return;  
//     }
    
//     temp->prev=temp1;
//     temp->next=temp1->next;
//     temp1->next->prev=temp;
//     temp1->next=temp;
// }


// int main(){

//     Node* n0 = new Node();
//     Node* n1 = new Node();
//     Node* n2 = new Node();
//     Node* n3 = new Node();

//     n0->value=10;
//     n1->value=20;
//     n2->value=30;
//     n3->value=40;

//     n0->prev=nullptr;
//     n0->next=n1;

//     n1->next=n2;
//     n1->prev=n0;

//     n2->prev=n1;
//     n2->next=n3;

//     n3->prev=n2;
//     n3->next=nullptr;

//     cout<<"before adding element at first"<<endl;

    
// }



#include <iostream> 
using namespace std;

int arr[6]={};
int a=0;

void push(int val){
    if(a<5){
        arr[a]=val;
        a++;
    }
    else{
        cout<<"memory out of bond"<<endl;
    }
}

void display(){
    for(int i=a-1;i>=0;i--){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}

void pop(){
    if(a>0){
    a--;
    }
    else{
        a=0;
    }
}

void top(){
    if(a==0){
        cout<<"no element in stack";
    }
    else{
    cout<<"Top element is "<<arr[a-1]<<endl;
    }
}


int main(){
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);
        pop();
        pop();
        pop();
        pop();  
        pop();  
        top();
        
        display();

    return 0;
}