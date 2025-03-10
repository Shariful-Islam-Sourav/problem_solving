#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void solve() {
    int n;
    float k, p, moves;
    cin >> n >> k >> p;
    moves = ceil(abs(k / p));
    if(moves <= n) cout << moves;
    else cout << -1;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << "\n";  
    }
    
}