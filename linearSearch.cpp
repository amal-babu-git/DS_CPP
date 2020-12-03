#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i,n=6,a[6],item;
    bool flag=false;
    cout<<"Enter 6 elements in sorted order :";
    
    for(i=0;i<n;i++){

        cin>>a[i];
    }

    cout<<"\nEnter the item to be search: ";
    cin>>item;

    for(i=0;i<n;i++){

        if(a[i] == item){
            cout<<"\nItem "<<item<<" found at location : "<<i<<endl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout<<"\n Item not found...\n";
    }

}