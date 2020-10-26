#include <iostream>
#include <string>
#include <set>
#include <vector>

char mostChar(const char* str)
{
	if (str == nullptr)	
		return 0;	

	int count[256] = { 0 };
	int max = 0;
	char result = 0;

	while (*str)
	{
		if (++count[*str] > max)
		{			
			max = count[*str];
			result = *str;			
		}
		str++;
	}
	if (result == ' ')
		std::cout << "The most used char is: space";
	else
		std::cout << "The most used char is: ";
	return result;
}

char getMaxRecurringChar(char* str)
{
	int count[256] = { 0 };
	int len = strlen(str);
	int max = 0;
	char result{};

	for (int i = 0; i < len; i++)
	{
		count[str[i]]++;
		if (max < count[str[i]])
		{
			max = count[str[i]];
			result = str[i];
		}
	}
	if (result == ' ')
		std::cout << "The most used char is: space";
	else
		std::cout << "The most used char is: ";

	return result;
}

int main()
{
	char str[] = "ddee      ";

	char result = mostChar(str);

	std::cout << result << "\n";	

	char secondResult = getMaxRecurringChar(str);

	std::cout << secondResult;



	std::cout << "\n\n";
	system("pause");
	return 0;
}