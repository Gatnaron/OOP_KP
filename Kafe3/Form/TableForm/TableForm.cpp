#include "TableForm.h"
#include "../..//AdminForm.h"

System::Void Kafe3::TableForm::ButtonTable1_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable1);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable1);
}

System::Void Kafe3::TableForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Kafe3::TableForm::ButtonUpdateTableAdmin_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	for (size_t i = 0; i < list_table->Count; i++)
	{
		if (list_table[i]->Name == LastButtonSelected) {
			list_table[i]->IsBusy = ÑomboBoxStatusAdmin->SelectedIndex;
			list_table[i]->NumberSeats = Convert::ToInt32(NumericUpDownNumberSeatsAdmin->Value);
		}
	}
	WriteFileTable(list_table);
}

System::Void Kafe3::TableForm::ButtonTable2_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable2);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable2);
}

System::Void Kafe3::TableForm::ButtonTable3_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable3);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable3);
}

System::Void Kafe3::TableForm::ButtonTable4_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable4);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable4);
}

System::Void Kafe3::TableForm::ButtonTable5_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable5);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable5);
}

System::Void Kafe3::TableForm::ButtonTable6_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable6);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable6);
}

System::Void Kafe3::TableForm::ButtonTable7_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable7);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable7);
}

System::Void Kafe3::TableForm::ButtonTable8_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable8);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable8);
}

System::Void Kafe3::TableForm::ButtonTable9_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable9);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable9);
}

System::Void Kafe3::TableForm::ButtonTable10_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable10);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable10);
}

System::Void Kafe3::TableForm::ButtonTable11_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable11);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable11);
}

System::Void Kafe3::TableForm::ButtonTable12_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable12);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable12);
}

System::Void Kafe3::TableForm::ButtonTable13_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable13);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable13);
}

System::Void Kafe3::TableForm::ButtonTable14_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable14);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable14);
}

System::Void Kafe3::TableForm::ButtonTable15_Click(System::Object^ sender, System::EventArgs^ e)
{
	List<Table^>^ list_table = ReadFileTable();
	Table^ SelectedTable = NumberTable(list_table, ButtonTable15);
	if (SelectedTable->NumberSeats >= NumberSeats && SelectedTable->IsBusy != true) TipoDoubleClick(list_table, ButtonTable15);
}

System::Void Kafe3::TableForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm^ AF = gcnew AdminForm();
	AF->Show();
	TableForm::Hide();
}
