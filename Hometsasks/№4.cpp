#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)) {
        cout << n << "-ый год високосный" << endl;
    } else {
        cout << n << "-ый год не високосный" << endl;
    }
    
    return 0;
}
