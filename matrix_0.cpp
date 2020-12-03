#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n,m,i,j;
    cout<<"Enter the size of matrix:";
    cin>>n;
    cin>>m;

    int a[n][m];

    cout<<"Enter "<<n<<" * "<<m<<"matrix"<<endl;
    for(i=0;i<n;i++){
        for(j=0; j <m ; j++ ){

            cin>>a[i][j];

        }
        
    }
    cout<<"\nFirst matrix.."<<endl;
    for(i=0;i<n;i++){
        for(j=0; j <m ; j++ ){

           cout<<a[i][j]<<"  ";

        }
        cout<<"\n";
        
    }

    int n2,m2;
    cout<<"Enter the size of second matrix:";
    cin>>n2;
    cin>>m2;

   

    while(n != m2){

        cout<<"\nInvalid matrix for multiplication ..."<<endl;
        cout<<"Enter the size of matrix:";
        cin>>n2;
        cin>>m2;


    }

     int a2[n2][m2];

     cout<<"Enter "<<n2<<" * "<<m2<<"matrix"<<endl;
    for(i=0;i<n2;i++){
        for(j=0; j <m2 ; j++ ){

            cin>>a2[i][j];

        }
        
    }
    cout<<"\nSecond matrix.."<<endl;
    for(i=0;i<n2;i++){
        for(j=0; j <m2 ; j++ ){

           cout<<a2[i][j]<<"  ";

        }
        cout<<"\n";
        
    }

    int a3[n][m2];

    for(i=0;i<n;i++){

        for(j=0;j<m2;j++){

            a3[i][j] = 0;
            
        }
    }


     for(i=0;i<n;i++){

        for(j=0;j<m2;j++){

            for(int k=0;k<m;k++){

                
            }
        }
    }
     cout<<"\nResult matrix.."<<endl;
    for(i=0;i<n;i++){
        for(j=0; j <m2 ; j++ ){

           cout<<a3[i][j]<<"  ";

        }
        cout<<"\n";
        
    }
}