#include<iostream>
using namespace std;
int main(){
    int bills[] = {100,20,10,5,1};
    int n,c=0;
    cin>>n;
    for(int bill : bills){
        c += n/bill;
        n = n%bill;
    }
    cout<<c<<endl;
}