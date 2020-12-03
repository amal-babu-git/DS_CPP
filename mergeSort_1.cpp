  #include<iostream>
  #include<iomanip>
  using namespace std;

  void merge(int a[],int lb,int mid,int ub){

      int i,j,k,c[25];
      i=lb;
      j=mid+1;
      k=lb;

      while(i<=mid && j<=ub){

          if(a[i] < a[j]){
              
              c[k] = a[i];
              i++;
          }
          else{

              c[k] = a[j];
              j++;
          }
          k++;
      }

      if(i > mid ){
          while(j<=ub){
              c[k] = a[j];
              j++;
              k++;
          }
      }
      else{
          while(i<= mid){
              c[k] = a[i];
              i++;
              k++;
          }
      }

      for(k=lb;k<=ub;k++){
          a[k] = c[k];
      }

  }

  void merge_sort(int a[],int lb,int ub){

      if(lb < ub){
          
          int mid = (lb+ub)/2;
          merge_sort(a,lb,mid);
          merge_sort(a,mid+1,ub);
          merge(a,lb,mid,ub);
      }
  }

  int main(){
      int n,i;
      cout<<"Enter the size of array:";
      cin>>n;
      int a[n];

      cout<<"\n Enter "<<n<<" elements...\n";
      for(i=0;i<n;i++){
          cin>>a[i];
      }
      
      cout<<"\n Array before sorting...\n";
      for(i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
      merge_sort(a,0,n-1);

      cout<<"\n Array after sorting...\n";
      for(i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
  }