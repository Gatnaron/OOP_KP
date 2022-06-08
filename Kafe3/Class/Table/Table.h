#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Table
{
private:
	String^ name;
	bool isBusy;
	int numberSeats;
public:
	Table() {}
	property String^ Name 
	{
		String^ get() {
			return name;
		}
		void set(String^ value) 
		{
			name = value;
		}
	}
	property bool IsBusy 
	{
		bool get() {
			return isBusy;
		}
		void set(bool value) 
		{
			isBusy = value;
		}
	}
	property int NumberSeats 
	{
		int get() 
		{
			return numberSeats;
		}
		void set(int value) 
		{
			numberSeats = value;
		}
	}
};

