#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p[n], gift_from[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        gift_from[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << gift_from[i] << " ";
    }
    
    return 0;
}
