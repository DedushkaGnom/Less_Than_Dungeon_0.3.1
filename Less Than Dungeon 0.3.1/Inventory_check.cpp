#include "Header_game.h"

void ActPockets(MyHero& Hero)
{
	system("cls");
	cout << Hero.name << endl;
	cout << "����� : " << Hero.class_name << endl;
	cout << "�������� : " << Hero.HP << "/" << Hero.max_HP << endl << endl;

	cout << "������ : " << endl;
	cout << "���� ������� : " << endl;
	cout << "����� : " << endl;
	cout << "������� ������ �����: " << Hero.armor << endl << endl;
	cout << "��� : " << endl;
	cout << "������� ������ ���� : " << Hero.shield << endl << endl;
	cout << "�������� : " << endl << endl;
	

	//cout << "����� ������� : " << Hero.poition << endl;
	//cout << "������� : " << Hero.picklock << endl;
	//cout << "������ : " << Hero.gold << endl;
	//cout << "���� : " << Hero.score << endl << endl;
	system("pause");
	system("cls");
}