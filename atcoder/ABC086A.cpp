#include <iostream>
using namespace std;
int main (){
  int a,b,c;
  c=0;
  cin>>a>>b;
  c=a*b;
  if (c%2 == 0){
    cout<<"Even"<<endl;
  }
  else{
    cout<<"Odd"<<endl;
  }
  return 0;
}