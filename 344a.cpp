#include<iostream>


using namespace std;
int main(){
    int n;cin>>n;
    string m;
    int g=1;
    string c;
    cin>>c;
    for(int i=1;i<n;i++){
        cin>>m;
        if(c!=m){
            g++;
        }
        c = m;
    }
    cout<<g<<endl;
}