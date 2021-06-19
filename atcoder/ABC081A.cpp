#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int count=0;
    string a;
    cin>>a;
    for(int i=0;i<3;i++){
        if(a[i]=='1'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}