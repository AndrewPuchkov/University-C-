#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    
    cout << "Факториал числа " << n << " = " << s << endl;
    
    return 0;
}
