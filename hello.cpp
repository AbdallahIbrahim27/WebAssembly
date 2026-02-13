#include <emscripten/emscripten.h>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

EMSCRIPTEN_KEEPALIVE
int exposed_add(int a, int b) {
    return add(a, b);
}

EMSCRIPTEN_KEEPALIVE
int exposed_multiply(int a, int b) {
    return multiply(a, b);
}

EMSCRIPTEN_KEEPALIVE
int exposed_fibonacci(int n) {
    return fibonacci(n);
}
