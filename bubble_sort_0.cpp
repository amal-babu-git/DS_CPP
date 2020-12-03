#include<iostream>
#include<iomanip>

using namespace std;

int main(){

int a[15],n,temp,i,j;

cout<<"Enter size of array:";
cin>>n;

cout<<"Enter "<<n<<" integers..."<<endl;

for ( i = 0; i < n; i++)
{
   cin>>a[i];
}

cout<<"Before sorting..."<<endl;
for(i = 0;i<n;i++){
    cout<<setw(5)<<a[i];
}


for(i = 0 ;i< n-1 ;i++)
{
    

for( j = 0 ; j<n-1-i ; j++)
{

    if(a[j] > a[j+1])
    {

        temp = a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

    }
}

}

cout<<""<<endl;

cout<<"After sorting ..."<<endl;
for( i = 0 ; i< n ;i++){
    cout<<setw(5)<<a[i];
}



}