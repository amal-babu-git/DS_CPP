#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i,j,n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" numbers:";
    for(i = 0 ;i < n ; i++){
        
        cin>>a[i];
    }
    cout<<" The array befor sorting:";
    for(i =0 ; i < n ; i++){
        cout<<setw(5)<<a[i];
    }

    for(i = 1 ; i < n ; i++){
        
        int temp = a[i];

        j = i-1;

        while(j >=0 && a[j] > temp){

            a[j+1] = a[j];

            j--;
        }

        a[j+1] = temp ;
    }


    cout<<"\n The array after sorting:";
    for(i =0 ; i < n ; i++){
        cout<<setw(5)<<a[i];
    }
    
}