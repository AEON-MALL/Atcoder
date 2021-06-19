#include<bits/stdc++.h>
using namespace std;

int main(){
    int X,Y,ans;
    cin>>X>>Y;
    if(X==0&&Y==1 || X==1&&Y==0){
        ans=2;
    }else if(X==0&&Y==2 || X==2&&Y==0){
        ans=1;
    }else if(X==1&&Y==2 || X==2&&Y==1){
        ans=0;
    }else{
        ans=X;
    }
    cout<<ans<<endl;
}