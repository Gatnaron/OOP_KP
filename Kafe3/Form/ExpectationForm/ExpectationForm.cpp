#include "ExpectationForm.h"
#include "../../Class/Visitors/Visitors.h"

System::Void Kafe3::ExpectationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Visitors d;
	d.name_func();
	Application::Exit();
}
