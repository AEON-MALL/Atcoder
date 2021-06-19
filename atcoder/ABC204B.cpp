#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,ans=0;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for (int i=0;i<N;i++){
        int c = a[i];
        if(c>10){
            ans += c-10;
        }
    }
    cout<<ans<<endl;
}