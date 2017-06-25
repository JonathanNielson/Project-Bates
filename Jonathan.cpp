#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void print(ifstream &in);

int main()
{

	string options[6];
	int optionSelect = 5;

	string file = "Welcome.txt";


	while (optionSelect != 9)
	{

		ifstream in(file);

		if (!in.good())
		{
			cout << "Unable to open file. Exiting Program." << endl;
			exit(1);
		}

		print(in);
		getline(in, options[0], '|');
		getline(in, options[1], '|');
		getline(in, options[2], '|');
		getline(in, options[3], '|');
		getline(in, options[4], '|');
		getline(in, options[5], '|');

		cin >> optionSelect;

		file = options[(optionSelect - 1)];

	}


}

void print(ifstream &in)
{
	string display;
	getline(in, display, '|');
	cout << display << endl;
}