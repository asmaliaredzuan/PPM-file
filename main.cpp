/*
* University of Arkansas at Little Rock
* Bachelor in Computer Science
* Asmalia Redzuan
* T00666839
* CPSC 3383: Programming Language
* Assignment 1.2: Read/Write PPM image files
* Description: 1. Using at least two distinct programming-language paradigm.
*			   2. Write PPM image files with simple patterns and may be read and compare.
* Date Written: November 30, 2020
* Date Revised: December 5, 2020
*/


#include "Screen.hpp"
#include <vector>
#include <iostream>

using namespace std;

void render(vector<Colour>& Screen, const int width, const int height)
{
	for (int y = 0; y < height; y++)
	{
		const float fy = y / (height - 1.f);
		for (int x = 0; x < width; x++)
		{
			const float fx = x / (width - 1.f);
			const int i = x + y * width;
			Colour& col = Screen[i];

			col = { fx,fy,0 }; //make it red/green gradient

		}
	}
}

int main(int argc, const char* argv[])
{
	const int width = 256;
	const int height = 256;
	int n;
	
	cout << "WELCOME" << endl;
	cout << "Do you want to read an existing PPM file? (0-yes, 1-no): ";
	cin >> n;

	if (n == 0)
	{
		readfile(width, height, "output.ppm");
	}

	else
	{
		vector<Colour> screen(width * height);

		render(screen, width, height);

		saveScreen(screen, width, height, "output.ppm");

		cout << "File is successfully write and closed" << endl;
		//cout << "File is succesfully closed" << endl;
	}



	return 0;
}
