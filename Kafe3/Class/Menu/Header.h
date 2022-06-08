#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <regex>
#include <algorithm>
#include <ctime>

#define FILE_NAME "File/Menu.txt"
#define CHECK "File/Check.txt"
#define BT R"((^[�-��-߸�"'\w]{2,13}\s)|(\d{1,5})|([�-��-�];))"
#define Soup R"((���))"
#define Meat R"((����))"
#define Drink R"((�������))"
#define Sea R"((������������))"
#define Salat R"((������))"
#define Desert R"((�������))"

using namespace std;
using namespace System;

struct Dish
{
	std::string Category	= "";
	std::string Price		= "";
	std::string Description = "";
};

class Foundation
{
public:
	Foundation();
	std::vector<std::string> GetFound() { return Based; }
	int GetCount() { return count; }
protected:
	std::vector<std::string> Based;
	int16_t count = 0;
};

class Checked
{
public:
	Checked();
	std::vector<string> GetChec() { return checkInfo; }
	int GetCheck() { return count; }
protected:
	vector<string> checkInfo;
	int count = 0;
};

System::String^ stoS(std::string& os);

std::string Stos(System::String^ s);

vector<Dish> ReturnCell(vector<string> s, int count);