#include <iostream>
using namespace std;
int main(){
int a;
int b;
cout<<"enter number"<<endl;
cin>>a>>b;
int num,i;
for ( num = a; num < b; num++)
{
   for ( i = 2; i < num; i++)
   {
    if (num%i==0)
    {
        break;
    }
   }
   if(i==num){
        cout<<i<<endl;
    } 
}
}

