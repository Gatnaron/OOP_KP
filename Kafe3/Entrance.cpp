#include "Entrance.h"
#include <Windows.h>
#include "Administrator.h"
#include "Visitor.h"
#include "Form/TableForm/TableForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Kafe3::Entrance form;
	Application::Run(% form);
}

System::Void Kafe3::Entrance::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Administrator^ admin = gcnew Administrator();
	admin->Show();
	Entrance::Hide();
}

System::Void Kafe3::Entrance::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Visitor^ visitor = gcnew Visitor();
	visitor->Show();
	Entrance::Hide();
}


