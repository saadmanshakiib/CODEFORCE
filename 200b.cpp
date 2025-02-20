#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    double sum = 0.0, percent;
    
    for (int i = 0; i < n; i++) {
        cin >> percent;
        sum += percent;
    }
    
    cout << fixed << setprecision(6) << (sum / n) << endl;
    
    return 0;
}
