// Fibonacci

#include <iostream>

using namespace std;

void fibonacci(int);

int main() {
	int n, fibnum;

	cout << "Put in the 'Nth' fibonacci number: ";
	cin >> n;

	fibonacci(n);
}

void fibonacci(int n) {
	int fib1 = 0,
		fib2 = 1,
		fib3 = 0;
	for (int i = 0; i <=n; i++) {
		fib3 = fib1 + fib2;	
		fib1 = fib2; 
		fib2 = fib3;

		cout << fib3 << " ";
	}
}