#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int a,b,c;
    int X,ans=0;
    cin>>a>>b>>c>>X;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for (int k=0;k<=c;k++){
                if (500*i+100*j+50*k==X){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}