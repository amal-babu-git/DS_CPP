#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int n,i,j,temp;
    cout<<"Enter size of array:";
    cin>>n;

    int a[n];

    cout<<"Enter "<<n<<" elements..."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before sorting..."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(3)<<a[i];

    }
    cout<<""<<endl;
    for(i=0; i<n-1 ; i++){
        for(j=0; j<n-1;j++){

            if(a[j] > a[j+1]){

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    cout<<"-----------------------------------------------------------------------------------"<<endl;

    cout<<"The array after sorting..."<<endl;
    cout<<""<<endl;
    for(i=0;i<n;i++)
    {

        cout<<setw(5)<<a[i];
    }


}