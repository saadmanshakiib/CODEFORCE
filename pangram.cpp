#include<iostream>
#include<set>
#include<cctype> 
using namespace std;

int main() {
    string s;
    int n;
    set<char>c;
    cin>>n;  
    cin>>s;  
    if(n<26) {
        cout<<"NO"<<endl;
        return 0;  
    }
    for(char ch : s){
        c.insert(tolower(ch));
    }
    if (c.size() == 26) {
        cout<<"YES"<< endl;
    } 
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}
