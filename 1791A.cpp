#include <iostream>
using namespace std;

int main() {
    string codeforces = "codeforces";
    int t;
    cin>>t;

    while(t--){
        char c;
        cin >> c;  
        if(codeforces.find(c) != string::npos) {
            cout<<"YES"<<endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
