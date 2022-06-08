#pragma once
#include "../Prifile/Profile.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Visitors : public Profile
{
public:
	Visitors() {}
	void name_func() override { MessageBox::Show("Вы вышли с аккаунта посетителя.", "Сообщение", MessageBoxButtons::OK); }
};