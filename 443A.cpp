#include<iostream>
#include<set>
using namespace std;
int main(){
    string str;
set<char>s;
getline(cin,str);
for(char i: str){
    if(i>='a' && i<='z')
    s.insert(i);
}
cout<<s.size()<<endl;
}