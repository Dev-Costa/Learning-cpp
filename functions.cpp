#include <iostream>

int sum_two_numbers(int a, int b) {
	return a + b;
}

int main() {
	int x, y, sum;

	x = 15;
	y = 79;
	sum = sum_two_numbers(x, y);

	std::cout << x << " + " << y << " = " << sum << std::endl;

	return 0;
}
