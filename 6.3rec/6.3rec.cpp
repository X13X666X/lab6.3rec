#include <iostream>
using namespace std;

int CountOddElements(int* a, const int size, int i) {
    if (i >= size) {
        return 0;
    }
    return (a[i] % 2 != 0) + CountOddElements(a, size, i + 1);
}

template <typename T>
int CountOddElements(T* a, const int size, int i) {
    if (i >= size) {
        return 0;
    }
    if (static_cast<int>(a[i]) % 2 != 0) {
        return 1 + CountOddElements(a, size, i + 1);
    }
    return CountOddElements(a, size, i + 1);
}

int main() {
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "CountOddElements(a, n) = " << CountOddElements(a, n, 0) << endl;

    double b[n] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    cout << "CountOddElements(b, n) = " << CountOddElements(b, n, 0) << endl;

    return 0;
}
