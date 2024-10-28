#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t,a=0,b=0;cin>>t;while(t--){
        string s;cin>>s;
        for(int i=0;i<5;i++){
            if(s[i] == 'A'){
                a++;
            }
            else if(s[i] == 'B'){
                b++;
            }
        }
        if(a>b) cout<<'A'<<endl;
        else cout<<'B'<<endl;
        a=0;b=0;
    }
}