#include "Screen.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

void saveScreen(vector<Colour>& Screen, const int width, const int height, const char* Filepath)
{
	ofstream fout(Filepath);
	if (fout.fail()) return; //error

	fout << "P6\n";
	fout << width << " " << height << "\n";
	fout << "255\n";

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			const int i = x + y * width;
			const Colour& col = Screen[i];

			fout << uint8_t(col.r * 256); //red
			fout << uint8_t(col.g * 256); //green
			fout << uint8_t(col.b * 256); //blue

		}
	}

	fout.close();
}

void readfile(const int width, const int height, const char* Filepath)
{
	string a;

	ifstream fin(Filepath);

	//check
	if (fin.fail())
	{
		cout << "Unable to open file" << endl;
		return;
	}

	//read
	while (fin >> a)
	{
		cout << a << " ";
	}


	fin.close();
}
