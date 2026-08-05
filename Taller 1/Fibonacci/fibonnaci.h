#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <iostream>

typedef unsigned long long ull;

ull fibonacci(int n){
    if(n < 1) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

ull fibonacci_memory(int n){
    if(n < 1) return 0;
    if(n == 1) return 1;
    ull* fib = new ull[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    ull result = fib[n - 1];
    delete[] fib;
    return result;
}

ull fibonacci_iterative(int n){
    if(n < 1) return 0;
    if(n == 1) return 1;
    ull a = 0, b = 1, c;
    for(int i = 2; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

#endif // FIBONACCI_H