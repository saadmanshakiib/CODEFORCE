#include <iostream>
using namespace std;

int main() {
    long long int n,m,a;
    cin>>n>>m>>a;
    long long l = (n+a-1)/a;
    long long w = (m+a-1)/a;
    cout<< l * w <<endl;
    
}
