#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a)
            count++;
         if(c>a)
            count++;
         if(d>a)
            count++;
                cout<<count<<endl;
                count=0;
    }
    }