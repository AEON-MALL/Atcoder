#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int N,ans;
    cin>>N;
    vector<int> sum(N);
    for(int i=0;i<N;i++){
        cin>>sum[i];
    }
    sort(sum.begin(),sum.end());
 
    int a= 0,b=0;
    for(int i=N-1;i>=0;i-=2){
        a += sum[i];
    if(i==0){
        break ;
    }else{
        b += sum[i-1];
    }
    }
    ans = a-b;
    cout<<ans<<endl;
}