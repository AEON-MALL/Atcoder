#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int ans=1;
    vector<int> mochi(N);

    for(int i=0;i<N;i++){
        cin>>mochi[i];
    } 
    sort(mochi.begin(),mochi.end());
    reverse(mochi.begin(),mochi.end());

    for(int i=1;i<N;i++){
        if(mochi[i] != mochi[i-1])
        ans++;
    }
    cout << ans << endl;
}