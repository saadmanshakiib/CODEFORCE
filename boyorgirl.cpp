#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>S;
    for(char c : s){
        S.insert(c);
    }
    if(S.size()%2==0){
    cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}