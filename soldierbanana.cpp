#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n,w,p=0;
cin>>k>>n>>w;
if(1<=k,w<=1000,0<=n<=10^9){
    for(int i=1;i<=w;i++){
        p += k*i;
    }
    if(p>n){
        cout<<(p-n)<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
}