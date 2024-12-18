#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";
	
	//a password with a length of 16 chars will cause the program to print Congratulations because it will
	//not leave any room for std::cin to add a 0 at the end of the string to terminate it, which will cause the strcmp
	//to return a false (could be NULL idk) which will put false in incorrect

	return 0;
}
