#include<iostream>
#include<iomanip>

using namespace std;
int binarySearch(int a[], int l , int r ,int item);

int main(){
    int n , i , j , a[10] ,  item ,l , r ;

    cout<<"\nEnter size of array : ";
    cin>>n;

    cout<<"\nEnter "<<n<<" elements in sorted order : ";

    for( i=0 ; i < n ; i++ ){
        cin>>a[i];
    }

    cout<<"Enter item to be search : ";
    cin>>item;
    

    int result = binarySearch(a,0,n-1,item);

    if( result != -1 ){

        cout<<"\nItem found at index : "<<result<<endl;

    }
    else{
        
        cout<<"\n Item not found... \n";

    }
    

}

int binarySearch(int a[], int l , int r ,int item){
    int mid=0;

    while( l <= r){

        mid = (l+r)/2;

        if(a[mid] == item){

            return mid;

        }
        else if(item < a[mid]){

            r = mid - 1;
        }
        else {

            l = mid + 1 ; 
        }
 
        
    }
    
    return -1;

}