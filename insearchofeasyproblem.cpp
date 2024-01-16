#include<iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    if(t>=1&&t<=100){
        int a[t];
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t;i++){
            if(a[i]==1){
                c++;
            }
        }
        if(c==0){
            cout<<"EASY"<<endl;
        }
        else{
            cout<<"HARD"<<endl;
        }
    }
}