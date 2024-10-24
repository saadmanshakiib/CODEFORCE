#include<iostream>
using namespace std;
int main(){ 
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string a1,b1;
        a1 = a;
        b1 = b;
        a1[0] = b[0];
        b1[0] = a[0];
        cout<<a1<<" "<<b1<<endl;
    }
}