#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char n[3];
    int t;
    cin>>t;
    if(1<t<=100){
        while(t!=0){
    cin>>n;
int r=((n[0]+n[2])-96);
cout<<r<<endl;
t--;
        }
    }
}