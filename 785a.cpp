#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int c=0;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=="Tetrahedron") c+=4;
            if(s[i]=="Cube") c+=6;
            if(s[i]=="Octahedron") c+=8;
            if(s[i]=="Dodecahedron") c+=12;
            if(s[i]=="Icosahedron") c+=20;
        }
        cout<<c<<endl;
    }
