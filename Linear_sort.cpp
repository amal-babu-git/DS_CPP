#include<iostream>
#include<iomanip>

using namespace std;

void linear_search(int a[],int n,int data){
    int i;

    for(i=0;i<n;i++){
        if(a[i] == data){
            cout<<"Element is found\nLOC = "<<i<<endl;
            break;
        }
        
    }
    if(i == n){
            cout<<"\n---no_data----\n";

        }

    int avgTimeC = (n+1)/2;
    cout<<"Avg time coplexity is : "<<avgTimeC<<endl;
    


}

int main(){
    int i,n,a[20],data;

    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" elemnts\n";

    for(i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"\nArray....\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    char exit='s';
    while(exit != 'E' ){
        cout<<"\nEnter 'E' for exit...";
        cout<<"\nEnter 'L' for linear search :";
        cin>>exit;
        if(exit == 'L')
        {
            cout<<"\n Enter data to search:";
            cin>>data;
            linear_search(a,n,data);
        
        }
        else if (exit == 'E')
        {
            cout<<"\nExit\n";
        }
        else
        {
           cout<<"\n Invalid option \n";
        }
        
        
    
    }
    
}