#include<iostream>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    if(t>=1&&t<=270){
    while(t--){
        cin>>a>>b>>c;
        if(a==b){
            cout<<c<<endl;
        }
        else if(a==c){
            cout<<b<<endl;
        }
        else if(b==c){
            cout<<a<<endl;
        }
        else{
            abort();
        }
    }
    }
}