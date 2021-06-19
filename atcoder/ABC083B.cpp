#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int N,a,b,c,d,ans=0;
    cin>>N>>a>>b;
    for (int i=1;i <= N;i++){
        d =0;
        c = i;
        while(c != 0){
            d += c%10;
            c -= c%10;
            c /= 10;
        }
        if(a <= d && d <=b){
            ans +=i;
        }
    }
    cout<<ans<<endl;
}
