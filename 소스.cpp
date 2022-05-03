#include <iostream>

int main(void)
{
	int x;
	int y;

	std::cout << "출력 할 구구단 숫자:";
	std::cin >> x;

	for (y = 1; y <= 9; y++)
	{
		std::cout << x << "*" << y << " = " << x * y << std::endl;
	}
 
	return 0;
}