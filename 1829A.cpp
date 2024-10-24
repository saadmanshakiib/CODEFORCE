#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        char a[10] = {'c','o','d','e','f','o','r','c','e','s'};
        string a1;int c=0;
        cin>>a1;
        for(int i=0;i<10;i++){
            if(a[i] != a1[i]){
                c++;
            }
        }
            cout<<c<<endl;
        c=0;

    }
}