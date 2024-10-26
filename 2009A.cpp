#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b;
    if(a==b)cout<<0<<endl;
    else{
        int c = ((a+b)/2);
        int r = (c-a)+(b-c);
        cout<<r<<endl;
    }
   }
    
}