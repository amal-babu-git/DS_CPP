#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    
    int n,a[10] ,choice = 0 ;

    while(choice <=2){
        cout<<"\nEnter 1 to continue\nEnter any number > 2 for exit: ";
        cin>>choice;


        if(choice >2 ){
            break;
        }
    cout<<"Enter the size of array: ";
    cin>>n;
        cout<<"\n Enter "<<n<<" number of elements...\n";

    for(int i=0; i<n; i++){

        cin>>a[i];
    }


    cout<<"\n Array before sorting...\n";

    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    //sorting algorithm.
    for(int gap =  n /2 ; gap > 0 ; gap/2){

        for(int j = gap ; j < n ; j++){
            
            for(int i = j-gap ; i >= 0 ; i-gap ){
                if(a[i+gap] > a[i]){
                    break;
                }
                else{
                   int temp = a[i+gap];
                   a[i+gap] = a[i];
                   a[i]= temp;
                }
            }
        }
    }


    cout<<"Array after sorting...\n";

    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }


    }

    

    return 0;
}