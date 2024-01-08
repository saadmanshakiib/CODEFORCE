#include<iostream>
using namespace std;
int main(){
    int n;
    int p,v,t;
    int s=0,c=0;
    cin>>n;
    if(1<=n<=1000){
        for(int i=1;i<=n;i++){
            cin>>p>>v>>t;
            s = p+v+t;
            if(s>=2){
                c++;
            }
        }
        cout<<c<<endl;
    }
}