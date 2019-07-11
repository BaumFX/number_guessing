#include "optimization.hpp"
#include <iostream>
#include <string>
#include <random>

int main()
{
	bool running = true;

	std::random_device random;
	std::mt19937 engine(random());
	std::uniform_int_distribution<> distr(1, 10000);

	int target_number = distr(engine);

	std::cout << "welcome to this small number guessing game. please enter any number between 1 and 10000." << std::endl;
	std::string input;
	int num_tries = 0;
	while (running) {
		std::getline(std::cin, input);
		int user_input = std::stoi(input);
		if (user_input == target_number) { running = false; }
		else if (user_input < target_number) { std::cout << "your number is too small! try again." << std::endl; }
		else if (user_input > target_number) { std::cout << "your number is too big! try again." << std::endl; }
		num_tries++;
	}
	std::cout << "congratulations, you win. the number was " << std::to_string(target_number) << "." << std::endl;
	std::cout << "it took you " << num_tries << " attempts to guess the number." << std::endl;
	std::getline(std::cin, input);
}
