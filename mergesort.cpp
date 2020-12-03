#include<iostream>
#include<iomanip>

using namespace std;

void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);

int main(){
    
    int i,j,mid,a[10],n=0;

    cout<<"Enter the size of array: ";

    cin>>n;

    cout<<"\n Enter "<<n<<" elements...\n";

    for(i=0;i<n;i++){

        cin>>a[i];
    }

    cout<<"\n Array before sorting...\n";

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    mergesort(a,0,n-1);

    cout<<"\n Array after sorting...\n";

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



}

void mergesort(int a[] , int lb,int ub){
    
    if(lb<ub){
        int mid=(lb+ub)/2;
        
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);

    }
}

void merge(int a[],int lb,int mid,int ub){

    int i=lb,j=mid+1,k=lb,b[10];

    while (i<=mid && j <=ub)
    {
        if(a[i] <= a[j]){

            b[k] = a[i];
            i++;

        }
        else{

            b[k] = a[j];
            j++;
    
        }
        k++;
    }
    
    if(i > mid){

        while (j <=ub )
        {
            b[k] = a[j];
            j++; k++;
        }

    }
    else{
        while( i <= mid){
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for(k=lb;k <= ub; k++){
        a[k]=b[k];
    }

}