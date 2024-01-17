#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int t,s;
    cin>>t;
    if(t>=1&&t<=pow(10,15)){
        if(t%2==0){
        s = t/2;
        cout<<s<<endl;
        }
        else {
            s = ((t+1)/2)*(-1);
                    cout<<s<<endl;
        } 


    }
}