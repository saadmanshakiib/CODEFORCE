#include<iostream>
using namespace std;
int main(){
    int t,vn=0,vv=0,n;
    cin>>t;
    if(1<=t<=100){
    while(t--){
        cin>>n;
        if(n%3==0){
            vn++;
            cout<<"Second"<<endl;
        }
        /*else if((n+1)%3!=0){
            vn++;
                        cout<<"First"<<endl;
        }
        else if((n-1)%3==0){
            vn++;
                        cout<<"First"<<endl;
        }*/
        else if(n%3!=0){
            vv++;
                        cout<<"First"<<endl;
        }
        
    }
    }
}