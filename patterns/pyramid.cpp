#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter number: "<<endl;
    cin>>n;
//* pyramid
  for ( i = 1; i < n; i++)
  {
    for ( j = 1; j <=i; j++)
    {
        cout<<" * ";
    }
   cout<<endl; 
  }



  //right side pyramid
  for ( i = 1; i <=n; i++)
  {
   for (j = 1; j<=n; j++)
   {
   if (j<=n-i)
   {
    cout<<" ";

   }
   else
   cout<<"*";
   
   }
   cout<<endl;
  }
  
}