#include "ADD.h"
#include "..//..//Class/Menu/Header.h"

System::Void Kafe3::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ temp_str = comboBox1->Text + " " + numericUpDown1->Value + " " + textBox2->Text + ";";
	ofstream File(FILE_NAME, std::ios::app);
	string temp = Stos(temp_str);
	File << "\n" << temp;

	MessageBox::Show("Успешно", "Состояние");

	File.close();
	this->Close();
}
