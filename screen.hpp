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
#pragma once

#include <vector>
using namespace std;

struct Colour
{
	float r, g, b, a;
};

void saveScreen(vector<Colour>& Screen, const int width, const int height, const char* Filepath);
void readfile(const int width, const int height, const char* Filepath);