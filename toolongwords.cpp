#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    char w[101];
    cin>>t;
    if(1<=t<=100){
for(int i=1;i<=t;i++){
cin>>w;
int l = strlen(w);
if(l>10 && l<101){
cout<<w[0]<<l-2<<w[l-1];
}
else{
    for(int i=0;i<l;i++){
        cout<<w[i];
    }
}
cout<<endl;
    }
    }
}