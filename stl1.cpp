#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <string>

class ZZ
{
public:
	ZZ()
	{
		month = 1;
	}
	ZZ(int _month)
	{
		month = _month;
	}

	void set_month(int _month)
	{
		month = _month;
	}
	/*int get_month()
	{
		return month;
	}*/
	std::string get_month()
	{
		if (month == 1)
		{
			return "Овен\n";
		}
		if (month == 2)
		{
			return "Телец\n";
		}
		if (month == 3)
		{
			return "Близнецы\n";
		}
		if (month == 4)
		{
			return "Рак\n";
		}
		if (month == 5)
		{
			return "Лев\n";
		}
		if (month == 6)
		{
			return "Дева\n";
		}
		if (month == 7)
		{
			return "Весы\n";
		}
		if (month == 8)
		{
			return "Скорпионы\n";
		}
		if (month == 9)
		{
			return "Стрелец\n";
		}
		if (month == 10)
		{
			return "Козерог\n";
		}
		if (month == 11)
		{
			return "Водолей\n";
		}
		if (month == 12)
		{
			return "Рыбы\n";
		}
	}

	void show_info()
	{
		std::string zz;

		if (month > 12)
		{
			std::cout << "404\n";
		}
		else
		{
			if (month == 1)
			{
				std::cout << std::string("Овен\n");
				std::cout << zz;
			}
			if (month == 2)
			{
				std::string zz("Телец\n");
				std::cout << zz;
			}
			if (month == 3)
			{
				std::string zz("Близнецы\n");
				std::cout << zz;
			}
			if (month == 4)
			{
				std::string zz("Рак\n");
				std::cout << zz;
			}
			if (month == 5)
			{
				std::string zz("Лев\n");
				std::cout << zz;
			}
			if (month == 6)
			{
				std::string zz("Дева\n");
				std::cout << zz;
			}
			if (month == 7)
			{
				std::string zz("Весы\n");
				std::cout << zz;
			}
			if (month == 8)
			{
				std::string zz("Скорпионы\n");
				std::cout << zz;
			}
			if (month == 9)
			{
				std::string zz("Стрелец\n");
				std::cout << zz;
			}
			if (month == 10)
			{
				std::string zz("Козерог\n");
				std::cout << zz;
			}
			if (month == 11)
			{
				std::string zz("Водолей\n");
				std::cout << zz;
			}
			if (month == 12)
			{
				std::string zz("Рыбы\n");
				std::cout << zz;
			}
		}
	}

private:
	int month;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	ZZ zz1 = ZZ(1);
	zz1.show_info();

	zz1.set_month(2);
	zz1.show_info();

	std::cout << zz1.get_month() << "\n";
}