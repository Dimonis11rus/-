#include <iostream>
#include <stdlib.h>
#include "ISubscriber.h"
#include "IPublisher.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ofstream clear; clear.open("OUTPUT.txt");	clear.close();	//онли для того, чтобы отчистить выходной файл, после предыдущего запуска
	char str0[]{ "TopGear" };
	char str1[]{ "National Geographic" };
	char str2[]{ "People" };
	char str3[]{ "BusinessWeek" };
	char str4[]{ "PROSport" };
	char str5[]{ "Forbes" };

	ConcretePublisher publishers[6]
	{
		ConcretePublisher(str0),
		ConcretePublisher(str1),
		ConcretePublisher(str2),
		ConcretePublisher(str3),
		ConcretePublisher(str4),
		ConcretePublisher(str5)
	};

	ConcreteSubscriber me;
	
	while (1)
	{
		int ch;
		cout << "|1| Подписаться на журналы\n|2| Отписаться от журналов\n|3| START BUTTON\n|0| Выход\n>";		cin >> ch;
		switch (ch)
		{
		case 1:
			int ch2;
			cout << "\nЖурналы, доступные для подписки:\n1)TopGear\t\t\t";
					if (publishers[0].plus_or_minus()) cout << '+';		else	cout << '-';
					cout << "\n2)National Geographic\t\t";
					if (publishers[1].plus_or_minus()) cout << '+';		else	cout << '-';
					cout << "\n3)People\t\t\t";
					if (publishers[2].plus_or_minus()) cout << '+';		else	cout << '-';
					cout << "\n4)BusinessWeek\t\t\t"; 
					if (publishers[3].plus_or_minus()) cout << '+';		else	cout << '-';
					cout << "\n5)PROSport\t\t\t";
					if (publishers[4].plus_or_minus()) cout << '+';		else	cout << '-';
					cout << "\n6)Forbes\t\t\t";
					if (publishers[5].plus_or_minus()) cout << '+';		else	cout << '-';
					cout <<"\n0)Назад\n>";
			cin >> ch2;
			switch (ch2)
			{
			case 1:
				publishers[0].subscribe(me);		break;
			case 2:
				publishers[1].subscribe(me);		break;
			case 3:
				publishers[2].subscribe(me);		break;
			case 4:
				publishers[3].subscribe(me);		break;
			case 5:
				publishers[4].subscribe(me);		break;
			case 6:
				publishers[5].subscribe(me);		break;
			case 0:		break;
			}
			break;
		case 2:
			int ch3;
			cout << "\nОтписаться от:\n1)TopGear\t\t\t";
				if (publishers[0].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n2)National Geographic\t\t";
				if (publishers[1].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n3)People\t\t\t";
				if (publishers[2].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n4)BusinessWeek\t\t\t";
				if (publishers[3].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n5)PROSport\t\t\t";
				if (publishers[4].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n6)Forbes\t\t\t";
				if (publishers[5].plus_or_minus()) cout << '+';		else	cout << '-';
				cout << "\n0)Назад\n>";
				cin >> ch3;
			switch (ch3)
			{
			case 1:
				publishers[0].unsubscribe();		break;
			case 2:
				publishers[1].unsubscribe();		break;
			case 3:
				publishers[2].unsubscribe();		break;
			case 4:
				publishers[3].unsubscribe();		break;
			case 5:
				publishers[4].unsubscribe();		break;
			case 6:
				publishers[5].unsubscribe();		break;
			case 0:		break;
			}
			break;
		case 3:
			ConcretePublisher::some_logic(publishers);		break;
		case 0:
			return 0;
		}
		system("cls");
	}
	return 0;
}
