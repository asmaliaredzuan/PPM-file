#pragma once

#include <vector>
using namespace std;

struct Colour
{
	float r, g, b, a;
};

void saveScreen(vector<Colour>& Screen, const int width, const int height, const char* Filepath);
void readfile(const int width, const int height, const char* Filepath);
