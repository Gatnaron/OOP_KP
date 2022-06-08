#include "MenuForm.h"
#include "../..//Class/Menu/Header.h"
#include "../..//AdminForm.h"
#include "..//CheckForm/CheckForm.h"
#include "..//AdminFormADD+DELETE/ADD.h"

System::Void Kafe3::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Soup);//регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::Headers()
{
	listView1->Columns->Clear();
	listView1->Items->Clear();
	listView1->Columns->Add("#", 25,HorizontalAlignment::Left);
	listView1->Columns->Add("“ип", 80, HorizontalAlignment::Left);
	listView1->Columns->Add("÷ена", 50, HorizontalAlignment::Left);
	listView1->Columns->Add("Ќазвание", 200, HorizontalAlignment::Left);
}

System::Void Kafe3::MyForm::FileCheckclear()
{
	ofstream(CHECK, ios_base::trunc);
}

System::Void Kafe3::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Meat); // регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i],cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });
			
		}
	}
}

System::Void Kafe3::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Drink); // регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Sea); // регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Salat); // регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;

	Headers();

	std::vector<std::string> temp_old = found.GetFound();
	regex reg(Desert); // регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::listView1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
{
	Foundation found;
	String^ temp_current_cell;
	int ask;

	temp_current_cell = listView1->FocusedItem->Text;

	try
	{
		fstream File(CHECK,ios_base::app);
		ask = Convert::ToInt16(temp_current_cell) - 1;
		
		auto temp = found.GetFound();

		File << temp[ask] << endl;
		MessageBox::Show("”спешно", "—осто€ние");
	}

	catch (Exception^ e)
	{
		MessageBox::Show("Ќеизвестна€ ошибка", "”пс...");
	}

}

System::Void Kafe3::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	Checked checked;
	vector<string> temp = checked.GetChec();
	int all = 0;

	vector<Dish> dish = ReturnCell(temp, checked.GetCheck() - 1);

	for (int i = 0; i < checked.GetCheck() - 1; i++) all += stoi(dish[i].Price);

	if (all == 0) MessageBox::Show("¬ы ещЄ ничего не выбрали", "«аказ");
	else {
		
		Int16 foo = Convert::ToInt16(all);
		CheckForm^ checkf = gcnew CheckForm(foo, UserName, NumberSeats);
		checkf->ShowDialog();
		MyForm::Hide();
	}
}

System::Void Kafe3::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	AdminForm^ AF = gcnew AdminForm();
	AF->Show();
	MyForm::Hide();
}

System::Void Kafe3::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	//ƒобавить
	MyForm1^ addnew = gcnew MyForm1();
	addnew->ShowDialog();

	listView1->Items->Clear();

	Foundation new_found;

	Headers();

	std::vector<std::string> temp_old = new_found.GetFound();
	regex reg(Soup);//регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, new_found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}

System::Void Kafe3::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	//удалить
	Foundation found;
	auto temp_v = found.GetFound();

	String^ temp_focused = listView1->FocusedItem->Text;

	int ask = Convert::ToInt16(temp_focused);

	temp_v.erase(temp_v.begin() + ask - 1);
	ofstream File(FILE_NAME, ios_base::trunc);
	for (int i = 0; i < temp_v.size(); i++)
	{
		if (temp_v.size() - 1 == i) File << temp_v[i];
		else File << temp_v[i] << endl;
	}
	File.close();

	listView1->Items->Clear();

	Foundation new_found;

	Headers();

	std::vector<std::string> temp_old = new_found.GetFound();
	regex reg(Soup);//регул€рка
	smatch cat; // регул€рка

	std::vector<Dish> dish_temp = ReturnCell(temp_old, new_found.GetCount());

	for (int i = 0; i < temp_old.size(); i++)
	{
		if (regex_search(temp_old[i], cat, reg))
		{

			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Category = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Category));
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Price));
			ListViewItem::ListViewSubItem^ Description = gcnew ListViewItem::ListViewSubItem(newItem, stoS(dish_temp[i].Description));

			newItem->SubItems->Add(Category);
			newItem->SubItems->Add(Price);
			newItem->SubItems->Add(Description);

			listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });

		}
	}
}
