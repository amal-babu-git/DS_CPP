#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i,j,n;

    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];

    cout<<"Enter "<<n<<" numbers:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n Befor sorting.."<<endl;
    for(i=0;i<n;i++){
        cout<<setw(5)<<a[i];

    }


//e.g : [ 5 3 4 0 9 ]    we are starting from the second element
          
    for(i=1;i<n;i++){

       int temp=a[i];
        
       for ( j=i-1 ; j>=0 && a[j]> temp ; j--)//for cheking each element reverse order for replacement
        {
            a[j+1] = a[j];
            
        }

        a[j+1] =temp;
        

    }


    cout<<"\n After sorting.."<<endl;
    for(i=0;i<n;i++){
        cout<<setw(5)<<a[i];

    }
    
}