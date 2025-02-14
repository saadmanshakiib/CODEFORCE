#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int exit,enter,p=0,m=0;
for(int i=0;i<n;i++){
cin>>exit>>enter;
 p = p-exit+enter;
m = max(m,p);
}
cout<<m<<endl;
}