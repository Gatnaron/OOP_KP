#include "CheckForm.h"
#include "..//MenuForm/MenuForm.h"
#include "..//../Class/Menu/Header.h"
#include "..//ExpectationForm/ExpectationForm.h"
System::Void Kafe3::CheckForm::StartM()
{
		Checked found;

		Headers();

		std::vector<std::string> temp_old = found.GetChec();
		regex reg(Soup);//регул€рка
		smatch cat; // регул€рка

		std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCheck());

		for (int i = 0; i < temp_old.size() - 1; i++)
		{
				ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
				ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
				ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
				ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

				newItem->SubItems->Add(Category);
				newItem->SubItems->Add(Price);
				newItem->SubItems->Add(Description);

				listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });
		}
}

System::Void Kafe3::CheckForm::Headers()
{
	listView2->Columns->Clear();
	listView2->Items->Clear();
	listView2->Columns->Add("#", 25, HorizontalAlignment::Left);
	listView2->Columns->Add("“ип", 80, HorizontalAlignment::Left);
	listView2->Columns->Add("÷ена", 50, HorizontalAlignment::Left);
	listView2->Columns->Add("Ќазвание", 120, HorizontalAlignment::Left);
}

System::Void Kafe3::CheckForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ExpectationForm^ EF = gcnew ExpectationForm();
	EF->Show();
	CheckForm::Hide();
}
