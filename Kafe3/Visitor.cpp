#include "Visitor.h"
#include "Form/TableForm/TableForm.h"
#include "Entrance.h"

System::Void Kafe3::Visitor::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ Name = name->Text;
	Decimal^ numberV = numericUpDown1->Value;
	MessageBox::Show("Здраствуйте " + Name + "\nДавайте выберем столик для вашей компании из " + numberV + " человек.", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	TableForm^ T = gcnew TableForm(false, Name, numberV);
	T->Show();
	Visitor::Hide();
}

System::Void Kafe3::Visitor::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Entrance^ back = gcnew Entrance();
    back->Show();
    Visitor:Hide();
}
