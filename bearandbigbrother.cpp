#include<iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    if(l<=b && l>=1&&l<=10 && b>=1&&b<=10){
        for(int i=1;;i++){
            l = l*3;
            b = b*2;
            if(l>b){
                cout<<" "<<i<<endl;
                break;
            }
        }
    }
}