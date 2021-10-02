#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    // time complexity O(sqrt(n))
    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}