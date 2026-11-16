#include <iostream>

int main()
{
	int age = 20;
	long long number = age * 365ll * 24ll * 3600ll * 1000ll;
	std::cout << "Number of milliseconds lived: " << number << std::endl;
}