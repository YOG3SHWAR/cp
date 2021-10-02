#include <iostream>>
using namespace std;

// golbally defined values are 0 by default
int f[100], exp[100], len;

void primeFactor(int n) {
    if (n == 1) {
        len++;
        f[len] = 2;
        exp[len] = 0;
        return;
    }

    int d = 2;

    // 2nd condition makes the time complexity from O(n) to O(sqrt(n))
    while (n > 1 && d * d < n) {
        int k = 0;
        if (n % d == 0) {
            k++;
            n /= d;
        }
        if (k > 0) {
            len++;
            f[len] = d;
            exp[len] = k;
        }
        d++;
    }

    if (n > 1) {
        len++;
        f[len] = n;
        exp[len] = 1;
    }
}

int main() {
    primeFactor(50);
    cout << "\n";
    for (int i = 1; i <= len; i++) {
        cout << f[i] << " " << exp[i] << "\n";
    }
    return 0;
}