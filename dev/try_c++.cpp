#include <iostream>

long long gcd(long long numberOne, long long numberTwo) {
	if (numberTwo == 0)
		return numberOne;

	return gcd(numberTwo, numberOne % numberTwo);
}

long long lcmNaive(long long numberOne, long long numberTwo) {
	long long lowestCommonMultiple = (numberOne * numberTwo) / gcd(numberOne, numberTwo);
	return lowestCommonMultiple;
}

int main() {
	std::cout << "Enter the inputs" << std::endl;
	long long numberOne, numberTwo;
	std::cin >> numberOne >> numberTwo;

	std::cout << lcmNaive(numberOne, numberTwo) << std::endl;

	return 0;
}
