// Includes
//
// Iostream - C++ default IO library
#include <iostream>

// Main function
int main(int argc, char* argv[])
{
	// Number - Int that holds testing number	
	int number = 0;
	
	// Output instruction
		std::cout << "Welcome to Game of Threes!" << std::endl;
		std::cout << "You will input a number to start with or 1 to exit," << std::endl;
		std::cout << "then enter -1,0,1 to add to the current number to get it to be divisible by three." << std::endl;
		std::cout << "Do this until you cannot divide by 3 anymore." << std::endl;
		std::cout << "Input Number(1 - INT_MAX): ";
	
	// While Loop that gets number
	while (number == 0)
	{
		// Input - Int that holds input number
		int input = 0;

		// Get input
		std::cin >> input;

		// Test for valid input
		//
		// If not return error
		if (input <= 0)
			std::cout << input << " is an invalid input! Try again..." << std::endl;
		// If so set number
		else
			number = input;
	}

	// While loop that contains game loop
	while (number != 1)
	{
		// Output current state
		std::cout << number << " ";

		// Input - Int that holds input number
		int input = 0;

		// Get input
		std::cin >> input;

		// Test for valid input
		//
		// If so handle it
		if (input >= -1 && input <= 1)
		{
			// Test if correct answer
			// 
			// If so handle input with number
			if ( ((input + number) % 3) == 0)
				number = (input + number) / 3;
			// If not return error
			else
				std::cout << "Wrong Answer! Try Again..." << std::endl;
		}
		// If not return error
		else
		{
			std::cout << input << " is an invalid input! Try again..." << std::endl;
		}
	}

	// Output end state
	if (number == 1)
		std::cout << number << std::endl;

	// Exit game
	return 0;
}
