#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string a;cin>>a;
        int l = a.length();
        if(a.length()==1){
            cout<<"NO"<<endl;
        }
        else{
            if(l%2 == 0 && a.substr(0,l/2) == a.substr(l/2,l)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}