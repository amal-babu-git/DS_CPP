#include<iostream>
#include<iomanip>
using namespace std;
#define maxstk 5

int stack_array[6],size = 0 ; 

void push(int);
void pop();
void disp(){
    if(size == 0){
        cout<<"Stack is empty \n";
    
    }else{
        for(int i=size ; i>0 ; i--){
            cout<<stack_array[i]<<"  ";
        }
    }
}

int main(){

    int choice = 0,element ;
    while(choice != 4){
        cout<<"\n 1)Push \n 2)Pop \n 3)display \n 4)Exit \n Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1 :cout<<"\n Enter the element to push:";
                    cin>>element;
                    push(element);
                    break;
            case 2 :pop();
                    break;
            case 3 :disp();
                    break;
            case 4 :continue;
            default : cout<<"\n Invalid entry..."<<endl;

        }

    }

    
}

void push(int element){
    if(size == maxstk ){
        cout<<"\n Stack overflow \n";
    }else{
        size++;
        stack_array[size] = element;
    }
}

void pop(){
    if( size == 0){
        cout<<"stack underflow \n";

    }
    else{
        int element = stack_array[size];
        size--;
        cout<<element<<" is popped \n";
    }
}

