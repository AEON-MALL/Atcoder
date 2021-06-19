#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
   int N,count=0;
   cin>>N;
   int a[N];
   for(int i=0;i<N;i++){
       cin>>a[i];
   }
   for(int i=0;i<100;i++){
       for(int j=0;j<N;j++){
           if(a[j]%2!=0){
               cout<<count<<endl;
               return 0;
           }
            a[j]= a[j]/2;
           }
        count++;
       }
}