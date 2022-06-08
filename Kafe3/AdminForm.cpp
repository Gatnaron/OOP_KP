#include "AdminForm.h"
#include "Form/TableForm/TableForm.h"
#include "Form/MenuForm/MenuForm.h"
#include "Class/Admin/Admin.h"
System::Void Kafe3::AdminForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin d;
	d.name_func();
	Application::Exit();
}

System::Void Kafe3::AdminForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	TableForm^ TF = gcnew TableForm(true);
	TF->Show();
	AdminForm::Hide();
}

System::Void Kafe3::AdminForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ MF = gcnew MyForm(true);
	MF->Show();
	AdminForm::Hide();
}
