#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <string>

//https://en.cppreference.com/w/cpp/algorithm

// Функтор: Посчитать кол. фруктов, в названиях которых, меньше 5 символов
/*using std::string;
using std::cout;

class IsEv
{
public:
	bool operator () (const string& val) const
	{
		return val.length() > 5 == 0;
	}
};

int main()
{
	const int SIZE = 5;
	string arr[SIZE]{ "Банан","Банан","Банан","Банан","Банан" };

	std::cout << std::count_if(std::begin(arr), std::end(arr), IsEv()) << "\n";
}*/

// I love и X5 какие-то фрукты (доделать!!!!!!!!!!!!!!!)
/*using std::string;
using std::cout;

int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 5;
	string arr[SIZE]{ "Банан","Ведро кампота","Негрофильмы","Груши","Оцелотов" };
	string zz = "Йа лублю ";


	for (int i = 0; i <= SIZE; i++)
	{
		zz += arr[i];
	}
	cout << zz << "\n";
}*/

// EXAMEN...

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

	int get_month()
	{
		return month;
	}

	void show_info()
	{
		/*std::cout << "Введи номер месяца: ";
		std::cin >> month;*/

		std::string zz;

		if (month > 12)
		{
			std::cout << "404\n";
		}
		else
		{
			if (month == 1)
			{
				std::cout << std::string("Козерог\n");
				std::cout << zz;
			}
			if (month == 2)
			{
				std::string zz("Водолей\n");
				std::cout << zz;
			}
			if (month == 3)
			{
				std::cout << "Рыбы\n";
			}
			if (month == 4)
			{
				std::cout << "Овен\n";
			}
			if (month == 5)
			{
				std::cout << "Телец\n";
			}
			if (month == 6)
			{
				std::cout << "Близнецы\n";
			}
			if (month == 7)
			{
				std::cout << std::string("Лев\n");
				std::cout << zz;
			}
			if (month == 8)
			{
				std::cout << "Лев\n";
			}
			if (month == 9)
			{
				std::cout << "Дева\n";
			}
			if (month == 10)
			{
				std::cout << "Весы\n";
			}
			if (month == 11)
			{
				std::cout << "Скорпион\n";
			}
			if (month == 12)
			{
				std::cout << "Стрелец\n";
			}
		}
	}


private:
	int month;
};



int main()
{
	setlocale(LC_ALL, "Russian");

	ZZ zz1 = ZZ(2);
	zz1.show_info();

	zz1.set_month(3);
	zz1.show_info();

	/*int a = 0;
	std::cout << "Введи номер месяца: ";
	std::cin >> a;

	int day = 0;
	std::cout << "Введи номер дня: ";
	std::cin >> day;

	std::string zz;

	if (a > 12)
	{
		std::cout << "404";
	}
	else
	{
		if (a == 1)
		{
			
			if (day <= 19 && day >= 1)
			{
				std::cout << std::string("Козерог");
				std::cout << zz;
			}
			else
			{
				std::cout << std::string("Стрелец");
				std::cout << zz;
			}
		}
		if (a == 2)
		{
			if (day >= 19 && day <= 28)
			{
				std::string zz("Рыба");
				std::cout << zz;
			}
			else
			{
				std::string zz("Водолей");
				std::cout << zz;
			}
		}
		if (a == 3)
		{
			std::cout << "Рыбы";
		}
		if (a == 4)
		{
			std::cout << "Овен";
		}
		if (a == 5)
		{
			std::cout << "Телец";
		}
		if (a == 6)
		{
			std::cout << "Близнецы";
		}
		if (a == 7)
		{
			if (day <= 22 && day >= 30)
			{
				std::cout << std::string("Лев");
				std::cout << zz;
			}
			else
			{
				std::cout << std::string("Рак");
				std::cout << zz;
			}
		}
		if (a == 8)
		{
			std::cout << "Лев";
		}
		if (a == 9)
		{
			std::cout << "Дева";
		}
		if (a == 10)
		{
			std::cout << "Весы";
		}
		if (a == 11)
		{
			std::cout << "Скорпион";
		}
		if (a == 12)
		{
			std::cout << "Стрелец";
		}*/
	}