#include<iostream>
using namespace std;
int main(){
int n,a=0,d=0;
cin>>n;
if(1<=n<=100000){
    string s;
    cin>>s;
    if(s.length()==n){
        for(int i=0;i<n;i++){
        if(s[i]=='A')
        a++;
        else if(s[i]=='D')
        d++;
    }
}
    if(a>d)
    cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;
    }
    

}