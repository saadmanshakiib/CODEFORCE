#include<iostream>
using namespace std;
int main(){
    int n,h,s=0;cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] <= h){
            a[i] = 1;
        }
        else{
            a[i] = 2;
        }
    }
    for(int i=0;i<n;i++){
        s += a[i];
    }
    cout<<s<<endl;
}