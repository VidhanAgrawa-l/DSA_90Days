#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;  // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    
    int a = 0, b = 1, fib = 0;

    for (int i = 2; i <= n; i++) {
        fib = a + b;  // Calculate the next term
        a = b;        // Shift a to the next term
        b = fib;      // Shift b to the next term
    }

    return fib;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nthFibonacci = fibonacci(n);  // Call the function
    cout << "The " << n << "th Fibonacci number is: " << nthFibonacci << endl;

    return 0;
}
