#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int N,K;
    int sum=0;
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            sum +=i*100+j;
        }
    }
    cout<<sum<<endl;
}