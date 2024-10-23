#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
        int ar[3];ar[0]=a;ar[1]=b;ar[2]=c;
        sort(ar,ar+3);
        cout<<((ar[2] - ar[1]) + (ar[1] - ar[0]))<<endl;
    }
