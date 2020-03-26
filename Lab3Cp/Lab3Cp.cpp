#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;


void task1()
{
	char arr[3][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = 48 + rand() % 10;
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	int count = 0;

	cout << endl << endl;
	cout << "Новый массив с заменнеными цыфрами на !" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] >= 48 && arr[i][j] <= 57)
			{
				arr[i][j] = '!';
				count++;
			}
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "Количесто чисел : " << count << endl;
}



void task2()
{

	char arr[30];
	char arr1[30];
	int count = 0;
	cout << "Введите 1 массив символов: ";
	cin.ignore(std::cin.rdbuf()->in_avail());
	cin.getline(arr, 30);
	cout << "Введите 2 массив символов: ";
	cin.ignore(std::cin.rdbuf()->in_avail());
	cin.getline(arr1, 30);


	bool a[256] = { false };
	for (int i = 0; i < strlen(arr); i++)
	{
		for (int j = 0; j < strlen(arr1); j++)
		{
			if (arr[i] == arr1[j] && a[(int)arr[i]] == false)
			{
				cout << "Символ " << arr[i] << " ";
				count = 0;
				for (int a = 0; a < strlen(arr); a++)
				{
					if (arr[a] == arr[i])
					{
						count++;
					}
				}

				for (int b = 0; b < strlen(arr1); b++)
				{
					if (arr1[b] == arr[i])
					{
						count++;
					}
				}
				cout << "повторяется : " << count << " раза." << endl;
				a[(int)arr[i]] = true;
			}
		}
	}
}



void task3()
{
	

}




int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	using namespace std;
	unsigned short num = 0;

	while (true)
	{
		cout << "Выберите задание: 1)Низкий уровень 2)Средний уровень 3)Высокий уровень 0)Закрыть программу" << endl;

		while (!(cin >> num))
		{
			cout << "Некорректный ввод числового значения!" << endl;
			cin.clear();
			cin.ignore(65535, '\n');
		}

		switch (num)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 0:
			return 0;
		}
	}
}
