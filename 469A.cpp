#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;

    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int p1;cin>>p1;
    s.insert(p1);
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
    int q1;
    cin>>q1;
    s.insert(q1);
    }

    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}