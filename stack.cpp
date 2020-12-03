#include<iostream>
#include<iomanip>
#define MAXSTK 5;

using namespace std;

void push(int);
void pop();
void display();
int stack[10],top = 0;

int main(){

    int item,choice=0;

    while( choice <= 3 ){

        cout<<"\n 1) Push \n 2) Pop \n 3) Display \n 4) Exit \n " ; 
        cout<<" Enter your choice : ";
        cin>>choice;

        switch( choice ) {

            case 1 : cout<<" Enter item to be inserted : ";
                     cin>>item;
                     push(item);
                     break;

            case 2 : pop();
                     break;
            case 3 : display();
                     break;

        }
    }


}

void push(int x){

    if( top == MAXSTK ) {

        cout<<"Stack overflow\n";
    }

    else{
        top++ ;
        stack[top] = x;
    }
}

void pop(){

    int x;
    if(top == 0){
        cout<<"Stack underflow\n";

    }
    else{

        x=stack[top];
        top--;
        cout<<x<<" is popped \n" ; 
    }
}

void display(){

    for(int i = top ; i>0 ; i--){

        cout<<stack[i]<<"  ";

    }
}