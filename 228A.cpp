#include<iostream>
#include<set>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    set<int>S;
    for(int v=0;v<4;v++){
        S.insert(a[v]);
    }
    int r = 4-(S.size());
    cout<<r<<endl;
}