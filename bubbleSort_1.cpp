#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int n,i,j;

    cout<<"Enter size of array:";
    cin>>n;
    int a[n];

    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0 ;i <n ;i++){

        cin>>a[i];

    }



    cout<<"\nArray before sorting.."<<endl;
    for(i=0;i<n;i++){
        cout<<setw(5)<<a[i];
    
    }


    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){

            if(a[j]>a[j+1]){

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<"\nArray after sorting.."<<endl;
    for(i=0;i<n;i++){
        cout<<setw(5)<<a[i];
    
    }

}