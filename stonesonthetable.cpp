#include<iostream>
using namespace std;
int main(){
    int n,k=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1])
        k++;
    }
    cout<<k<<endl;
}