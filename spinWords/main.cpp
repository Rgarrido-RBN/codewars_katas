#include <iostream>
#include <string.h>

std::string spinWords(const std::string &str)
{
	//TODO: Reverse all the words
	std::string myStringToReverse{str};

	std::string stringReversed;

	for(int i = 0; i <= str.size(); i++)
	{
		stringReversed.push_back(myStringToReverse.back());

		myStringToReverse.pop_back();
	}
	return stringReversed;
}// spinWords

int main()
{
	std::string stringToReverse{"Hello World"};

	std::cout << "String to reverse is: " << stringToReverse << std::endl;
	std::cout << "String reversed is: " << spinWords(stringToReverse) << std::endl;

	return 0;
}
