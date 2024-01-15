#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1&&t<=(pow(10,4))){
        while(t--){
            int n,m=1;
        cin>>n;
        int a[n];
        if(n>=1&&n<=9){
            for(int i=0;i<n;i++){
                cin>>a[i];
                //if(a[i]>=0&&a[i]<=9){
                //}
            }
                                sort(a,a+n);
        }
        a[0] = a[0]+1;
        for(int i=0;i<n;i++){
            m = m*a[i];
        }
        cout<<m<<endl;
        m=1;
    }

        }
}