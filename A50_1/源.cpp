#include <iostream>
int main()
{
	int i, j, k;
	int a[6];
	std::cout << "����6��������" << std::endl;
	for (i = 0; i < 6; i++)
	{
		std::cin >> a[i];
	}
	std::cout << "------------------------���6��6����---------------------------" << std::endl;

	for (i = 0; i < 6; i++)
	{
		k = 6 - i;

		for (j = 0; j < 6; j++)
		{
			k %= 6;
			std::cout << " " << a[k++] << " ";

		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;
}