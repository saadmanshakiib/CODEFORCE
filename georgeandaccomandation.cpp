#include<iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    if(t>=1&&t<=100){
        while(t--){
            int a,b;
            cin>>a>>b;
            if(a>b){
                abort();
            }
            if(a+1<b){
                c++;
            }
        }
        cout<<c<<endl;
        c=0;
    }
}