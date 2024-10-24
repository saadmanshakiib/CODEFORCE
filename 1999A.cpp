#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    int r = a%10;
    int r1 = a/10;
    cout<<r+r1<<endl;
}
}