#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int  n,a[10],i,j,temp,flag;

    cout<<"Enter size of array:";
    cin>>n;
    cout<<"\n Enter "<<n<<" elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n Array befor sorting...\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }

    for(int i=0;i<n-1;i++){

        flag=0;

        for(j=0;j<n-1-i;j++){

            if(a[j] > a[j+1]){

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                flag=1;
            }

        }
        if(flag == 0){
            break;
        }
    }

    cout<<"\n Array after sorting...\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }


}