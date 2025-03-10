#include <iostream>
using namespace std;

int main() {
    int a, b, c, res;
    cin >> a >> b >> c;
    if((a == 1 && b == 1 && c == 1) ||(a == 1 && c ==1)) {
        cout << a + b + c;
    }
    else if(a == 1 || b == 1 || c == 1) {
        if(a <= b && a <= c) {
            cout << (a + b) * c;
        }
        else if(b <= c && b <= a) {
            if(a < c) {
                int d = b + a;
                cout << d * c;
            }
            else {
                int d = b + c;
                cout << d * a;
            }
        }
        else {
            cout << a * (b + c);
        }
    }
    else{
    res = a * b * c;
    cout << res;
    }
    return 0;
}