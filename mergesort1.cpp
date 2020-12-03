#include<iostream>
#include<iomanip>

using namespace std;

void merge(int a[], int lb ,int mid,int ub){

    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[10];

    while (i <=mid && j<=ub)
    {
        if (a[i] <= a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        
        k++;
    }

    if( i > mid){

        while( j <= ub){
            b[k]= a[j];
            j++;
            k++;
        }
    }
    else{

        while( i <= mid){

            b[k] = a[i];
            i++;
            k++;
        }
    }

    for(i=lb;i<=ub;i++){

        a[i] = b[i];
    }

}

void mergesort(int a[], int lb ,int ub){

    if(lb < ub){

        int mid = (lb+ub)/2;

        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);

    }
}

int main(){
    int n,i,a[10];
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"\nEnter "<<n<<" elements...\n";

    for(i=0 ; i<n ; i++){
        
        cin>>a[i];
    }

    cout<<"\nArray before sorting...\n";

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    mergesort(a,0,n-1);

    cout<<"\nArray after sorting...\n";

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}