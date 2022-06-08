#include "Header.h"

Checked::Checked()
{
	ifstream File(CHECK);
	if (File.is_open())
	{
		count = 0;
		while (!File.eof())
		{
			string temp;
			getline(File, temp);
			this->checkInfo.push_back(temp);
			count++;
		}
	}
	else { System::Windows::Forms::MessageBox::Show("‘айл повреждЄн", "ќшибка"); }
}

Foundation::Foundation()
{
	ifstream File(FILE_NAME);
	if (File.is_open())
	{
		count = 0;
		while (!File.eof())
		{
			string temp;
			getline(File, temp);
			this->Based.push_back(temp);
			count++;
		}
	}
	else { System::Windows::Forms::MessageBox::Show("‘айл повреждЄн", "ќшибка"); }
}

std::string Stos(System::String^ s)
{
	using namespace System::Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	std::string os(chars);
	return os;
}

System::String^ stoS(std::string& os)
{
	System::String^ s;
	s = gcnew System::String(os.c_str());
	return s;
}

vector<Dish> ReturnCell(vector<string> s, int count)
{
	int iterator;
	Dish goods;
	vector <Dish> v;
	regex reg(BT); // регул€рка
	smatch cat; // регул€рка
	for (int i = 0; i < count; i++)
	{
		v.push_back(goods);
		iterator = 0;
		while (regex_search(s[i], cat, reg))
		{
			switch (iterator)
			{
			case 0:
				v[i].Category = cat[0].str();
				break;
			case 1:
				v[i].Price = cat[1].str();
				break;
			default:
				break;
			}

			if (iterator == 1)
			{
				v[i].Description = cat.suffix().str();
				v[i].Description.erase(v[i].Description.size() - 1);
				break;
			}
			else s[i] = cat.suffix();

			iterator++;
		}
	}
	return v;
}