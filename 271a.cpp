#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    int y;
    cin>>y;
    while(true){
        y++;
        string ys = to_string(y);
    set<char> d;
        bool isDistinct = true;
        for(char ch : ys) {
            if (d.count(ch)) {
                isDistinct = false;
                break;
            }
            d.insert(ch);
        }
        if(isDistinct){
            cout<<y<<endl;
            break;
        }
    }
}
