#pragma once
#include "../Prifile/Profile.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Admin : public Profile
{
private:
	String^ login;
	String^ password;

public:
	Admin() {}
	property String^ Login {
		String^ get() {
			return login;
		}
		void set(String^ value) {
			login = value;
		}
	}
	property String^ Password {
		String^ get() {
			return password;
		}
		void set(String^ value) {
			password = value;
		}
	}
	void name_func() override { MessageBox::Show("Вы вышли с аккаунта администратора.", "Сообщение", MessageBoxButtons::OK); }
};

