#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	int data[10] = { 0, };
	

	for (int i = 0; i < 10; i++)
	{
		data[i] = (rand() % 10 + 1);
		for (int j = 0; j < i; ++j)
		{
			if (data[i] == data[j])
			{
				i--;
				break;
			}
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout; data[i] << endl;
	}
		

		return 0;
}