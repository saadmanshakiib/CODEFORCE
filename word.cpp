#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int u=0,l=0;
    string s;
    cin>>s;
    for(char c : s){
        if(islower(c))
        l++;
        else if(isupper(c))
        u++;
    }
    if(u > l){
        for(char &c : s){
            c = toupper(c);
        }
    }
    else{
        for(char &c : s){
            c = tolower(c);
        }
    } 
    cout<<s;
}