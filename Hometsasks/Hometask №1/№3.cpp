#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin >> n;
    int k = 0;
    for (int i = 2; i <= sqrt(n) ; i++) {
        if (n % i == 0) {
            k++;
            cout << "Число " << n << " не простое" << endl;
            break;
        }
    }
    
    if (k == 0) {
        cout << "Число " << n << " простое" << endl;
    }
    
    return 0;
}
