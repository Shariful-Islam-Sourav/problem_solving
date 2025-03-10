#include <iostream>
using namespace std;

bool isLucky(int n) {
    while(n > 0) {
        int dig = n % 10;
        if(dig != 7 || dig != 4) return false;
        n /= 10;
    }
    return true;
}
int main(){
    int num{};
    cin >> num;
    if(isLucky(num)){
        cout << "Yes" << endl;
        return 0;
    } 
    
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 474, 747, 777, 774, 744};
    for(int x : luckyNumbers) {
        if (num % x == 0){
            cout << "YES" << endl;
            return 0;
        } 
    }
    cout << "NO" << endl;
    return 0;
}