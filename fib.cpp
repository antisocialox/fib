#include <iostream>

using namespace std;

void fib(int x) {
    int a = 0, b = 1, t;
    for (int i = 0; i < x; ++i) {
        cout << a << endl;
        t = b;
        b += a;
        a = t;
    }
}

int main() {
    fib(10);
    return 0;
}