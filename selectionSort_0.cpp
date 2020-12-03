#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(){
int i ,j , n, a[15] , min,loc ,temp;


cout<<"Name   : Amal Babu"<<endl;
cout<<"RollNo : 19801 "<<endl  ;

cout<<"Enter the number of total elements :";
cin>>n;
cout<<"Enter "<<n<<" elements"<<endl;
for(i=1;i<=n;i++)
	cin>>a[i];
cout<<"Array before sorting"<<endl;
for(i=1;i<=n;i++)
 cout<<setw(5)<<a[i];
for(i=1;i<=n-1;i++)
{
 min = a[i];
 loc=i;
 for(j=i+1;j<=n;j++)
 {

 if(min > a[j])
 {

  min = a[j];
  loc = j;

 }

}
	temp = a[i];
	a[i]= a[loc];
	a[loc]=temp;

}
	cout<<"\n   After sorting..."<<endl;
	for(i=1;i<=n;i++)
		cout<<setw(5)<<a[i];
	getch();

}