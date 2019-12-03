/*
 * main.cpp
 *
 *  Created on: Nov 29, 2019
 *      Author: tyler
 */


include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<string>

using namespace std;

struct book
{
	vector <string> spells1;
	vector <string> spells2;
	vector <string> spells3;
	vector <string> spells4;
	vector <string> spells5;
};

void read_File(int level, book &user);
void spell_Gen(int val, book& user, int level);

int main()
{
	int level,val;
	char flag;
	book user;

	srand(time(NULL));

	do
	{
		cout << "What level spell would you like to generate: ";
		cin >> level;

		read_File(level, user);

		cout << "How many spells would you like to generate: ";
		cin >> val;

		spell_Gen(val, user, level);

		cout << endl;

		cout << "Would you like to generate more spells? y/n" << endl;
		cin >> flag;

	} while (flag == 'y');

	system("Pause");

	return 0;
}

void read_File(int level, book &user)
{
	ifstream infile;
	string line;

	switch (level)
	{
		case 1: infile.open("C:\\1stLevel.txt");
			break;
		case 2: infile.open("C:\\2ndLevel.txt");
			break;
		case 3: infile.open("C:\\3rdLevel.txt");
			break;
		case 4: infile.open("C:\\4thLevel.txt");
			break;
		case 5: infile.open("C:\\5thLevel.txt");
			break;
		default: cout << "Failed to open a file" << endl;
	}

	if (infile.is_open())
	{
		while (getline(infile, line))
		{
			switch (level)
			{
				case 1: user.spells1.push_back(line);
					break;
				case 2: user.spells2.push_back(line);
					break;
				case 3: user.spells3.push_back(line);
					break;
				case 4: user.spells4.push_back(line);
					break;
				case 5: user.spells5.push_back(line);
					break;
				default: cout << "Failed to fill spell book" << endl;
			}
		}
	}
	else
		cout << "Failed to open file" << endl;

	infile.close();

}

void spell_Gen(int val,book &user,int level)
{
	int num;
	vector <string> selected;

	switch (level)
	{
		case 1: for (int i = 0; i < val; i++) //generates numbers and then uses these numbers to select from the vector array and then deletes selected spell as to prevent repeats
		{
			num = rand() % user.spells1.size();
			selected.push_back(user.spells1[num]);
			user.spells1.erase(user.spells1.begin() + num);
		}
				break;
		case 2: for (int i = 0; i < val; i++) //generates numbers and then uses these numbers to select from the vector array and then deletes selected spell as to prevent repeats
		{
			num = rand() % user.spells2.size();
			selected.push_back(user.spells2[num]);
			user.spells2.erase(user.spells2.begin() + num);
		}
				break;
		case 3: for (int i = 0; i < val; i++) //generates numbers and then uses these numbers to select from the vector array and then deletes selected spell as to prevent repeats
		{
			num = rand() % user.spells3.size();
			selected.push_back(user.spells3[num]);
			user.spells3.erase(user.spells3.begin() + num);
		}
				break;
		case 4: for (int i = 0; i < val; i++) //generates numbers and then uses these numbers to select from the vector array and then deletes selected spell as to prevent repeats
		{
			num = rand() % user.spells4.size();
			selected.push_back(user.spells4[num]);
			user.spells4.erase(user.spells4.begin() + num);
		}
				break;
		case 5: for (int i = 0; i < val; i++) //generates numbers and then uses these numbers to select from the vector array and then deletes selected spell as to prevent repeats
		{
			num = rand() % user.spells5.size();
			selected.push_back(user.spells5[num]);
			user.spells5.erase(user.spells5.begin() + num);
		}
				break;
		default: cout << "No go bro" << endl;
	}

	for (int i = 0; i < selected.size(); i++) //prints out selected spells from 1st level list
	{
		cout << endl << selected[i] << endl;
	}

}
