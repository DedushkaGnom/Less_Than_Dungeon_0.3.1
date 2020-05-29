#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

class MyHero
{
 public:
	string name;       //��� �����
	string class_name; //������������ ������

	int Level;         //������� ������� 

	int HP;            //������� ��������
	int EXP;           //������� ����
	
	int max_HP;        //������������ ��������
	int armor;         //�������� ������
	int shield;        //�������� ���������� ������ ���� 
	int dodge;         //�������� ���������
	int magic;         //������� ���������� ����
	int damage;        //�������� �����
	int damage_dif;    //������� �����
	int chest_unlock;  //���� �������� �����

	int position_x, position_y;

	MyHero(string p_name, int P_X, int P_Y)
	{
		name = p_name;

		armor = 0;
		shield = 0;
		damage_dif = 2;
		position_x = P_X;
		position_y = P_Y;
	}

	void Class_choice(int choice)
	{
		switch (choice)
		{
			case 1:
			{
				class_name = "��������";
				HP = 25;
				max_HP = 100;
				chest_unlock = 30;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
				break;
			}

			case 2:
			{
				class_name = "����"; 
				HP = 40;
				max_HP = 120;
				chest_unlock = 20;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
				break;
			}

			case 3:
			{
				class_name = "�������";
				HP = 60;
				max_HP = 150;
				chest_unlock = 10;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
				break;
			}

			case 4:
			{
				class_name = "���";
				HP = 20;
				max_HP = 80;
				chest_unlock = 50;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
			break;
			}

			case 5:
			{
				class_name = "��������";
				HP = 25;
				max_HP = 100;
				chest_unlock = 15;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
			break;
			}

			case 6:
			{
				class_name = "�����";
				HP = 20;
				max_HP = 70;
				chest_unlock = 20;
				armor = 0;
				shield = 1;
				dodge = 30;
				magic = 2;
				damage = 5;
				damage_dif = 2;
			break;
			}
		}
	}


	class MyInventory
	{
	   public:

	};

};
