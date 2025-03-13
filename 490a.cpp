#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> programming, math, pe;

    for (int i = 1; i <= n; ++i) {
        int skill;
        cin >> skill;
        if (skill == 1)
            programming.push_back(i);
        else if (skill == 2)
            math.push_back(i);
        else if (skill == 3)
            pe.push_back(i);
    }

    int numTeams = min({programming.size(), math.size(), pe.size()});
    cout << numTeams << endl;

    for (int i = 0; i < numTeams; ++i) {
        cout << programming[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}
