#include <iostream>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int a[n];
int c=0;
for(int i=0;i<n;i++){
	cin>>a[i];
}
int t=a[k-1];
for(int i=0;i<n;i++){
	if(a[i]>=t&&a[i])
	++c;
}
cout<<c;
	return 0;
}