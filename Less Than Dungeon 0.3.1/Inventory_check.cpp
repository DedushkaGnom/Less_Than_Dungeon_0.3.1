#include "Header_game.h"

void ammunition_check(MyHero& Hero)
{
	int choice;

	while (true) {
		system("cls");
		cout << Hero.name << endl;
		cout << "����� : " << Hero.class_name << endl;
		cout << "�������� : " << Hero.HP << "/" << Hero.max_HP << endl << endl;
		cout << "������   : " << Hero.gold << endl;

		cout << "���� : " << Hero.damage << endl;
		cout << "����� : " << Hero.armor << endl;
		cout << "��� : " << Hero.shield << endl;
		cout << "��������� : " << Hero.dodge << endl;
		cout << "�������� : " << endl << endl;

		if (Hero.current_item_right_hand.item_type == 1)
		{
			cout << "������ � ������ ���� : " << Hero.current_item_right_hand.weapon_name << endl;
			cout << "���� ������� : " << (Hero.current_item_right_hand.weapon_damage - Hero.current_item_right_hand.weapon_damage_dif) << "-" << (Hero.current_item_right_hand.weapon_damage + Hero.current_item_right_hand.weapon_damage_dif) << endl;
			cout << "��������� : "; if (Hero.current_item_right_hand.weapon_dodge >= 0) { cout << "+"; } cout << Hero.current_item_right_hand.weapon_dodge << endl;
			cout << "�������� : "; if (Hero.current_item_right_hand.weapon_spead >= 0) { cout << "+"; } cout << Hero.current_item_right_hand.weapon_spead << endl << endl;
		}
		if (Hero.current_item_left_hand.item_type == 1)
		{
			cout << "������ � ����� ���� : " << Hero.current_item_left_hand.weapon_name << endl;
			cout << "���� ������� : " << (Hero.current_item_left_hand.weapon_damage - Hero.current_item_left_hand.weapon_damage_dif) << "-" << (Hero.current_item_left_hand.weapon_damage + Hero.current_item_left_hand.weapon_damage_dif) << endl;
			cout << "��������� : "; if (Hero.current_item_left_hand.weapon_dodge >= 0) { cout << "+"; } cout << Hero.current_item_left_hand.weapon_dodge << endl;
			cout << "�������� : "; if (Hero.current_item_left_hand.weapon_spead >= 0) { cout << "+"; } cout << Hero.current_item_left_hand.weapon_spead << endl << endl;
		}
		else if (Hero.current_item_left_hand.item_type == 2)
		{
			cout << "��� : " << Hero.current_item_left_hand.shield_name << endl;
			cout << "������ ���� : " << Hero.current_item_left_hand.shield_block << endl;
			cout << "��������� : "; if (Hero.current_item_left_hand.shield_dodge >= 0) { cout << "+"; } cout << Hero.current_item_left_hand.shield_dodge << endl << endl;
		}
		if (Hero.current_item_two_handed.item_type == 3)
		{
			cout << "������ � ���� ����� : " << Hero.current_item_two_handed.weapon_name << endl;
			cout << "���� ������� : " << (Hero.current_item_two_handed.weapon_damage - Hero.current_item_two_handed.weapon_damage_dif) << "-" << (Hero.current_item_two_handed.weapon_damage + Hero.current_item_two_handed.weapon_damage_dif) << endl;
			cout << "��������� : "; if (Hero.current_item_two_handed.weapon_dodge >= 0) { cout << "+"; } cout << Hero.current_item_two_handed.weapon_dodge << endl;
			cout << "�������� : "; if (Hero.current_item_two_handed.weapon_spead >= 0) { cout << "+"; } cout << Hero.current_item_two_handed.weapon_spead << endl << endl;
		}
		if (Hero.current_armor.item_type == 4)
		{
			cout << "����� : " << Hero.current_armor.armor_name << endl;
			cout << "������ ����� : " << Hero.current_armor.armor_block << endl;
			cout << "��������� : "; if (Hero.current_item_two_handed.weapon_dodge >= 0) { cout << "+"; } cout << Hero.current_item_two_handed.weapon_dodge << endl << endl;
		}

		cout << "1)�������� ������� � ������ ����." << endl;
		cout << "2)�������� ������� � ����� ����." << endl;
		cout << "3)����� ��������� �������." << endl;
		cout << "4)�������� �����." << endl;
		cout << "0)�����." << endl;
		cout << Hero.name << ": ";
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				int item_amount = 0;
				int *position = new int[Hero.inventory_size];

				for (int i = 0; i < Hero.inventory_size; i++)
				{
					if (Hero.item[i].item_type == 1)
					{
						position[item_amount] = i;
						item_amount++;
					}
				}

				while (true)
				{
					system("cls");
					cout << "���������� ������ � ������� � ������� :" << endl;
					for (int i = 0; i < item_amount; i++)
					{
						cout << i + 1 << ")" << Hero.item[position[i]].weapon_name << endl;
					}

					cout << "0)�����" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if ((choice < 0) || (choice > item_amount))
					{
						cout << Hero.name << "� �� ������ �� �������, ������" <<  endl;
						continue;
					}

					if (choice == 0)
					{
						break;
					}

					Hero.current_item_right_hand = Hero.item[position[choice-1]];
					Hero.refresh();
					break;
				}
				

				delete[] position;
				continue;
			}
			case 2:
			{

				int item_amount = Hero.item_amount();
				int *position = new int[Hero.inventory_size];

				while (true)
				{
					system("cls");
					cout << "���������� ������ � ������� � ������� :" << endl << endl;
					for (int i = 0; i < item_amount; i++)
					{
						cout << i + 1 << ")" << Hero.item[position[i]].weapon_name << endl;
					}

					cout << "0)�����" << endl;
					cout << Hero.name << ": ";
					cin >> choice;
					if ((choice < 0) || (choice > item_amount))
					{
						cout << Hero.name << "� �� ������ �� �������, ������" << endl;
						continue;
					}

					if (choice == 0)
					{
						break;
					}

					Hero.current_item_right_hand = Hero.item[position[choice - 1]];
					Hero.refresh();
					break;
				}


				delete[] position;
				continue;
			}
			case 3:
			{

				continue;
			}
			case 4:
			{

				continue;
			}
			case 0:
			{
				break;
			}
		}

		break;
	}

}

void items_check(MyHero& Hero)
{
	system("cls");
	cout << Hero.name << endl;
	cout << "����� : " << Hero.class_name << endl;
	cout << "�������� : " << Hero.HP << "/" << Hero.max_HP << endl << endl;	

	cout << "������   : " << Hero.gold << endl;
	cout << "����� ������� : " << Hero.potion << endl;
	cout << "�������       : " << Hero.picklock << endl << endl;

	cout << "����� ��� ��������� : " << "( " << Hero.item_amount(); cout << "/" << Hero.inventory_size << " )" << endl << endl;;
	cout << "������ :" << endl;
	cout << "�������� :\t" << "��� :\t\t" << "���� :\t" << "�������� :\t" << "��������� :\t" << "���� :\t" << endl;
	for (int i = 0; i < Hero.inventory_size; i++)
	{
		if ((Hero.item[i].item_type == 1) || (Hero.item[i].item_type == 2))
		{
			cout << Hero.item[i].weapon_name << "\t\t";
			if (Hero.item[i].item_type == 1)
			{
				cout << "����������\t";
			}
			else
			{
				cout << "���������\t";
			}
			cout << (Hero.item[i].weapon_damage - Hero.item[i].weapon_damage_dif) << "-" << (Hero.item[i].weapon_damage + Hero.item[i].weapon_damage_dif) << "\t";
			if (Hero.item[i].weapon_spead > 0)
			{
				cout << "+";
			}
			cout << Hero.item[i].weapon_spead << "\t\t";
			if (Hero.item[i].weapon_dodge > 0)
			{
				cout << "+";
			}
			cout << Hero.item[i].weapon_dodge << "\t\t";
			cout << Hero.item[i].weapon_cost  << "\t" << endl << endl;
		}
		
	}
	cout << endl;
	cout << "������/������� :" << endl;
	cout << "�������� :\t" << "������ :\t" << "��������� :\t" << "���� :\t" << endl;
	for (int i = 0; i < Hero.inventory_size; i++)
	{
		if (Hero.item[i].item_type == 4)
		{
			cout << Hero.item[i].armor_name << "\t";
			cout << Hero.item[i].armor_block << "\t\t";
			cout << "+" << Hero.item[i].armor_dodge << "\t\t";
			cout << Hero.item[i].armor_cost << "\t" << endl << endl;
		}
		
	}
	cout << endl;
	cout << "���� :" << endl;
	cout << "�������� :\t" << "������ :\t" << "��������� :\t" << "���� :\t" << endl;
	for (int i = 0; i < Hero.inventory_size; i++)
	{
		if (Hero.item[i].item_type == 3)
		{
			cout << Hero.item[i].shield_name << "\t";
			cout << Hero.item[i].shield_block << "\t\t";
			cout << "+" << Hero.item[i].shield_dodge << "\t\t";
			cout << Hero.item[i].shield_cost << "\t" << endl << endl;
		}
	}
	


	_getch();
	system("cls");
}