#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> a(N);
    bool flag= true;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=N;i++){
        if(a[i-1]!=i){
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}