#include <iostream>
using namespace std;

int sumOfEvenNumbers(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int arr[size];

    cout << "Введите элементы массива по одному в строке: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = sumOfEvenNumbers(arr, size);

    cout << "Сумма чётных чисел: " << result << endl;

    return 0;
}
