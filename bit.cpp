#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    string y;
    if(1<=t<=150){
        while(t!=0){
            cin>>y;
            if(y=="x++" || y=="++x" || y=="++X" || y=="X++"){
                x = x+1;
            }
            if(y=="--x" || y=="x--" || y=="--X" || y=="X--"){
                x = x-1;
            }
            t--;
        }
                    cout<<x<<endl;
    }
}