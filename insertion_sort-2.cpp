#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int i,j,n,a[11];
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"\nEnter "<<n<<" elememnts...\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"\nArray before sorting...\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }

    for(i=1;i<n;i++){
        int item=a[i];
         j=i-1;

         while(j >= 0 && a[j] > item){

            a[j+1] = a[j];
            j--;
         }

         a[j+1] = item;

    }

    cout<<"\nArray after sorting...\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }

}