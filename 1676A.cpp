#include<iostream>
using namespace std;
int main(){
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int sum = (s[0]-'0' + s[1]-'0'+s[2]-'0');
        int sum2 = (s[3]-'0' + s[4]-'0'+s[5]-'0');
        if(sum==sum2)
        cout<<"yes"<<endl;
        else
        cout<<"NO"<<endl;
        sum=0,sum2=0;
    }
}