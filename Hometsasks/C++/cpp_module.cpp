#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

extern "C" {
float calculate_sin_n_times(int n);
}

int main() {
    std::cout << "Opened" << std::endl;

}

float calculate_sin_n_times(int n) {
    clock_t start, end;
    start = clock();
    for (int i = 0; i < n; i++) {
        double result = sin(1.57);
    }
    end = clock();
    std::cout << float(end - start) / CLOCKS_PER_SEC << std::endl;
    return 0;
}


