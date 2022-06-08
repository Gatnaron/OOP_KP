#include "Administrator.h"
#include "Entrance.h"
#include "AdminForm.h"
#include "Form/TableForm/TableForm.h"



System::Void Kafe3::Administrator::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ log = textBox1->Text;
	String^ pas = textBox2->Text;

	if (Login_Password(log, pas))
	{
		AdminForm^ AF = gcnew AdminForm();
		AF->Show();
		Administrator::Hide();
	}

}

System::Void Kafe3::Administrator::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Entrance^ back = gcnew Entrance();
	back->Show();
	Administrator::Hide();
}

