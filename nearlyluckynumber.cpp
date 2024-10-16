#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=0;
    string s;
    cin>>s;
    for(char c : s){
        if(c=='4' || c=='7'){
            n++;
        }
    }
    if(n==4 || n==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}