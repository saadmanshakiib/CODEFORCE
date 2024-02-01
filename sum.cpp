#include<iostream>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    if(1<=t<=9261){
        while(t--){
            cin>>a>>b>>c;
        if(0<=a,b,c<=20){
            if((a+b)==c || (b+c)==a || (a+c)==b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        }
    }
}