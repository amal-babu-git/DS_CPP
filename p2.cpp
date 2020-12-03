#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int a ;
    int arr[5] ={1,2,3,4,5};

    arr[1] = ++arr[1];
    a=arr[1]++;
    arr[1]=arr[a++];
    cout<<a<<" "<<arr[1]<<endl;

    return 0;
}