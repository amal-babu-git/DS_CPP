#include<iostream>
#include<iomanip>
using namespace std ; 

int main()
{

    int i,n,a[10],beg,end,mid,item;

    cout<<"Name : Amal Babu \nRoll_No: 19801 \n";

    cout<<"Enter number of elements : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements in sorted order..."<<endl;
   
    for( i = 0 ; i < n ; i++ ) 
    {
        cin>>a[i];
    
    }

    cout<<"Enter item to search:";
    cin>>item;

    beg = 0 ;
    end = n-1 ;
    mid = ( beg + end ) / 2 ;


    while(beg <= end  && item != a[mid]){

        if(item < a[mid]){
            end = mid-1;
        }
        else{

            beg = mid + 1;

        }

        mid = ( beg + end ) / 2;

    }

    if(item == a[mid]){

        cout<<" Location of item : "<<mid;

    }
    else{

        cout<<"Item not found ...";
    }


 }