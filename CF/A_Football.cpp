//Problem: https://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }
    vector<bool> counted(n, false);
    int max{0};
    string winner;
    for(int i = 0; i < n; i++) {
        if(counted[i]) continue;
        int counter{1};
        for(int j = i + 1; j < n; j++) {
            if(names[i] == names[j]) {
                counter++;
                counted[j] = true;
            }
        }
        if (counter > max) {
            max = counter;
            winner = names[i];
        }
    }
    cout << winner << endl;
    return 0;
}
