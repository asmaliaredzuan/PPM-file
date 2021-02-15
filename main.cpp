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
