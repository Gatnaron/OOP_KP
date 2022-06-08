#pragma once

#include "../MenuForm/MenuForm.h"
#include "../../Class/Table/Table.h"

#define MAX_NUMBER_TABLES 15

namespace Kafe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic; 
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;

	public ref class TableForm : public System::Windows::Forms::Form
	{
	public:
		TableForm(bool status) : Admin(status)
		{
			InitializeComponent();
			if (Admin) {
				PanelVisitor->Visible = false;
			}
			else {
				PanelAdmin->Visible = false;
			}
		}
		TableForm(bool status, String^ userName, Decimal^ numberSeats) : Admin(status), UserName(userName), NumberSeats(Convert::ToInt32(numberSeats))
		{
			InitializeComponent();
			PanelAdmin->Visible = false;	
			List<Table^>^ ListTable = ReadFileTable();
			for (int i = 0; i < ListButons->Count; i++)
			{
				if (ListTable[i]->NumberSeats < Convert::ToInt32(numberSeats)) ListButons[i]->BackColor = Color::Red;
				else if (ListTable[i]->NumberSeats < Convert::ToInt32(numberSeats)) ListButons[i]->BackColor = Color::Red;
				else if (ListTable[i]->NumberSeats >= Convert::ToInt32(numberSeats) && ListTable[i]->IsBusy != true) ListButons[i]->BackColor = Color::Green;
				else ListButons[i]->BackColor = Color::Red;
			}
		}
	private: List <Button^>^ ListButons = gcnew List<Button^>();
	private: String^ UserName; int NumberSeats;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonTable13;
	public:

	private:
		bool Admin;
	private: System::Windows::Forms::Button^ button2;
		   String^ LastButtonSelected;
	protected:
		~TableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonTable1;
	private: System::Windows::Forms::Button^ ButtonTable2;
	private: System::Windows::Forms::Button^ ButtonTable3;
	private: System::Windows::Forms::Button^ ButtonTable5;
	private: System::Windows::Forms::Button^ ButtonTable4;
	private: System::Windows::Forms::Button^ ButtonTable9;
	private: System::Windows::Forms::Button^ ButtonTable10;


	private: System::Windows::Forms::Button^ ButtonTable8;

	private: System::Windows::Forms::Button^ ButtonTable7;

	private: System::Windows::Forms::Button^ ButtonTable6;
	private: System::Windows::Forms::Button^ ButtonTable14;
	private: System::Windows::Forms::Button^ ButtonTable15;
	private: System::Windows::Forms::Button^ ButtonTable11;


	private: System::Windows::Forms::Panel^ PanelVisitor;

	private: System::Windows::Forms::Button^ ButtonTable12;

	private: System::Windows::Forms::TextBox^ TextBoxNumberSeatsVisitor;
	private: System::Windows::Forms::Button^ ButtonUpdateTableAdmin;

	private: System::Windows::Forms::NumericUpDown^ NumericUpDownNumberSeatsAdmin;
	private: System::Windows::Forms::ComboBox^ ÑomboBoxStatusAdmin;
	private: System::Windows::Forms::Panel^ PanelAdmin;

	private: System::Windows::Forms::TextBox^ TextBoxStatusVisitor;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent()
		{
			this->ButtonTable1 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable2 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable3 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable5 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable4 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable9 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable10 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable8 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable7 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable6 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable14 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable15 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable12 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable11 = (gcnew System::Windows::Forms::Button());
			this->PanelVisitor = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxNumberSeatsVisitor = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxStatusVisitor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PanelAdmin = (gcnew System::Windows::Forms::Panel());
			this->ButtonUpdateTableAdmin = (gcnew System::Windows::Forms::Button());
			this->NumericUpDownNumberSeatsAdmin = (gcnew System::Windows::Forms::NumericUpDown());
			this->ÑomboBoxStatusAdmin = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ButtonTable13 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->PanelVisitor->SuspendLayout();
			this->PanelAdmin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDownNumberSeatsAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// ButtonTable1
			// 
			this->ButtonTable1->Location = System::Drawing::Point(13, 13);
			this->ButtonTable1->Name = L"ButtonTable1";
			this->ButtonTable1->Size = System::Drawing::Size(125, 52);
			this->ButtonTable1->TabIndex = 0;
			this->ButtonTable1->Text = L"Ñòîë 1";
			this->ButtonTable1->UseVisualStyleBackColor = true;
			this->ButtonTable1->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable1_Click);
			ListButons->Add(ButtonTable1);
			// 
			// ButtonTable2
			// 
			this->ButtonTable2->Location = System::Drawing::Point(12, 70);
			this->ButtonTable2->Name = L"ButtonTable2";
			this->ButtonTable2->Size = System::Drawing::Size(125, 52);
			this->ButtonTable2->TabIndex = 1;
			this->ButtonTable2->Text = L"Ñòîë 2";
			this->ButtonTable2->UseVisualStyleBackColor = true;
			this->ButtonTable2->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable2_Click);
			ListButons->Add(ButtonTable2);
			// 
			// ButtonTable3
			// 
			this->ButtonTable3->Location = System::Drawing::Point(12, 128);
			this->ButtonTable3->Name = L"ButtonTable3";
			this->ButtonTable3->Size = System::Drawing::Size(125, 52);
			this->ButtonTable3->TabIndex = 3;
			this->ButtonTable3->Text = L"Ñòîë 3";
			this->ButtonTable3->UseVisualStyleBackColor = true;
			this->ButtonTable3->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable3_Click);
			ListButons->Add(ButtonTable3);
			// 
			// ButtonTable4
			// 
			this->ButtonTable4->Location = System::Drawing::Point(13, 186);
			this->ButtonTable4->Name = L"ButtonTable4";
			this->ButtonTable4->Size = System::Drawing::Size(125, 52);
			this->ButtonTable4->TabIndex = 5;
			this->ButtonTable4->Text = L"Ñòîë 4 ";
			this->ButtonTable4->UseVisualStyleBackColor = true;
			this->ButtonTable4->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable4_Click);
			ListButons->Add(ButtonTable4);
			// 
			// ButtonTable5
			// 
			this->ButtonTable5->Location = System::Drawing::Point(13, 244);
			this->ButtonTable5->Name = L"ButtonTable5";
			this->ButtonTable5->Size = System::Drawing::Size(125, 52);
			this->ButtonTable5->TabIndex = 4;
			this->ButtonTable5->Text = L"Ñòîë 5";
			this->ButtonTable5->UseVisualStyleBackColor = true;
			this->ButtonTable5->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable5_Click);
			ListButons->Add(ButtonTable5);
			// 
			// ButtonTable6
			// 
			this->ButtonTable6->Location = System::Drawing::Point(144, 12);
			this->ButtonTable6->Name = L"ButtonTable6";
			this->ButtonTable6->Size = System::Drawing::Size(125, 52);
			this->ButtonTable6->TabIndex = 6;
			this->ButtonTable6->Text = L"Ñòîë  6";
			this->ButtonTable6->UseVisualStyleBackColor = true;
			this->ButtonTable6->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable6_Click);
			ListButons->Add(ButtonTable6);
			// 
			// ButtonTable7
			// 
			this->ButtonTable7->Location = System::Drawing::Point(143, 69);
			this->ButtonTable7->Name = L"ButtonTable7";
			this->ButtonTable7->Size = System::Drawing::Size(125, 52);
			this->ButtonTable7->TabIndex = 7;
			this->ButtonTable7->Text = L"Ñòîë 7";
			this->ButtonTable7->UseVisualStyleBackColor = true;
			this->ButtonTable7->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable7_Click);
			ListButons->Add(ButtonTable7);
			// 
			// ButtonTable8
			// 
			this->ButtonTable8->Location = System::Drawing::Point(143, 127);
			this->ButtonTable8->Name = L"ButtonTable8";
			this->ButtonTable8->Size = System::Drawing::Size(125, 52);
			this->ButtonTable8->TabIndex = 8;
			this->ButtonTable8->Text = L"Ñòîë 8";
			this->ButtonTable8->UseVisualStyleBackColor = true;
			this->ButtonTable8->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable8_Click);
			ListButons->Add(ButtonTable8);
			// 
			// ButtonTable9
			// 
			this->ButtonTable9->Location = System::Drawing::Point(144, 185);
			this->ButtonTable9->Name = L"ButtonTable9";
			this->ButtonTable9->Size = System::Drawing::Size(125, 52);
			this->ButtonTable9->TabIndex = 10;
			this->ButtonTable9->Text = L"Ñòîë 9";
			this->ButtonTable9->UseVisualStyleBackColor = true;
			this->ButtonTable9->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable9_Click);
			ListButons->Add(ButtonTable9);
			// 
			// ButtonTable10
			// 
			this->ButtonTable10->Location = System::Drawing::Point(144, 243);
			this->ButtonTable10->Name = L"ButtonTable10";
			this->ButtonTable10->Size = System::Drawing::Size(125, 52);
			this->ButtonTable10->TabIndex = 9;
			this->ButtonTable10->Text = L"Ñòîë 10";
			this->ButtonTable10->UseVisualStyleBackColor = true;
			this->ButtonTable10->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable10_Click);
			ListButons->Add(ButtonTable10);
			// 
			// ButtonTable11
			// 
			this->ButtonTable11->Location = System::Drawing::Point(275, 12);
			this->ButtonTable11->Name = L"ButtonTable11";
			this->ButtonTable11->Size = System::Drawing::Size(125, 52);
			this->ButtonTable11->TabIndex = 11;
			this->ButtonTable11->Text = L"Ñòîë 11";
			this->ButtonTable11->UseVisualStyleBackColor = true;
			this->ButtonTable11->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable11_Click);
			ListButons->Add(ButtonTable11);
			// 
			// ButtonTable12
			// 
			this->ButtonTable12->Location = System::Drawing::Point(274, 69);
			this->ButtonTable12->Name = L"ButtonTable12";
			this->ButtonTable12->Size = System::Drawing::Size(125, 52);
			this->ButtonTable12->TabIndex = 12;
			this->ButtonTable12->Text = L"Ñòîë 12";
			this->ButtonTable12->UseVisualStyleBackColor = true;
			this->ButtonTable12->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable12_Click);
			ListButons->Add(ButtonTable12);
			// 
			// ButtonTable13
			// 
			this->ButtonTable13->Location = System::Drawing::Point(274, 127);
			this->ButtonTable13->Name = L"ButtonTable13";
			this->ButtonTable13->Size = System::Drawing::Size(125, 53);
			this->ButtonTable13->TabIndex = 19;
			this->ButtonTable13->Text = L"Ñòîë 13";
			this->ButtonTable13->UseVisualStyleBackColor = true;
			this->ButtonTable13->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable13_Click);
			ListButons->Add(ButtonTable13);
			// 
			// ButtonTable14
			// 
			this->ButtonTable14->Location = System::Drawing::Point(275, 185);
			this->ButtonTable14->Name = L"ButtonTable14";
			this->ButtonTable14->Size = System::Drawing::Size(125, 52);
			this->ButtonTable14->TabIndex = 15;
			this->ButtonTable14->Text = L"Ñòîë 14";
			this->ButtonTable14->UseVisualStyleBackColor = true;
			this->ButtonTable14->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable14_Click);
			ListButons->Add(ButtonTable14);
			// 
			// ButtonTable15
			// 
			this->ButtonTable15->Location = System::Drawing::Point(275, 243);
			this->ButtonTable15->Name = L"ButtonTable15";
			this->ButtonTable15->Size = System::Drawing::Size(125, 52);
			this->ButtonTable15->TabIndex = 14;
			this->ButtonTable15->Text = L"Ñòîë 15";
			this->ButtonTable15->UseVisualStyleBackColor = true;
			this->ButtonTable15->Click += gcnew System::EventHandler(this, &TableForm::ButtonTable15_Click);
			ListButons->Add(ButtonTable15);
			
		
			// 
			// PanelVisitor
			// 
			this->PanelVisitor->Controls->Add(this->label2);
			this->PanelVisitor->Controls->Add(this->TextBoxNumberSeatsVisitor);
			this->PanelVisitor->Controls->Add(this->TextBoxStatusVisitor);
			this->PanelVisitor->Controls->Add(this->label1);
			this->PanelVisitor->Location = System::Drawing::Point(407, 13);
			this->PanelVisitor->Name = L"PanelVisitor";
			this->PanelVisitor->Size = System::Drawing::Size(226, 74);
			this->PanelVisitor->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Êîë-âî ìåñò: ";
			// 
			// TextBoxNumberSeatsVisitor
			// 
			this->TextBoxNumberSeatsVisitor->Location = System::Drawing::Point(113, 42);
			this->TextBoxNumberSeatsVisitor->Name = L"TextBoxNumberSeatsVisitor";
			this->TextBoxNumberSeatsVisitor->Size = System::Drawing::Size(108, 22);
			this->TextBoxNumberSeatsVisitor->TabIndex = 3;
			// 
			// TextBoxStatusVisitor
			// 
			this->TextBoxStatusVisitor->Location = System::Drawing::Point(113, 7);
			this->TextBoxStatusVisitor->Name = L"TextBoxStatusVisitor";
			this->TextBoxStatusVisitor->Size = System::Drawing::Size(108, 22);
			this->TextBoxStatusVisitor->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ñòàòóñ:";
			// 
			// PanelAdmin
			// 
			this->PanelAdmin->Controls->Add(this->button2);
			this->PanelAdmin->Controls->Add(this->button1);
			this->PanelAdmin->Controls->Add(this->ButtonUpdateTableAdmin);
			this->PanelAdmin->Controls->Add(this->NumericUpDownNumberSeatsAdmin);
			this->PanelAdmin->Controls->Add(this->ÑomboBoxStatusAdmin);
			this->PanelAdmin->Controls->Add(this->label3);
			this->PanelAdmin->Controls->Add(this->label4);
			this->PanelAdmin->Location = System::Drawing::Point(407, 12);
			this->PanelAdmin->Name = L"PanelAdmin";
			this->PanelAdmin->Size = System::Drawing::Size(226, 281);
			this->PanelAdmin->TabIndex = 17;
			// 
			// ButtonUpdateTableAdmin
			// 
			this->ButtonUpdateTableAdmin->Location = System::Drawing::Point(9, 68);
			this->ButtonUpdateTableAdmin->Name = L"ButtonUpdateTableAdmin";
			this->ButtonUpdateTableAdmin->Size = System::Drawing::Size(211, 31);
			this->ButtonUpdateTableAdmin->TabIndex = 20;
			this->ButtonUpdateTableAdmin->Text = L"Èçìåíèòü";
			this->ButtonUpdateTableAdmin->UseVisualStyleBackColor = true;
			this->ButtonUpdateTableAdmin->Click += gcnew System::EventHandler(this, &TableForm::ButtonUpdateTableAdmin_Click);
			// 
			// NumericUpDownNumberSeatsAdmin
			// 
			this->NumericUpDownNumberSeatsAdmin->Location = System::Drawing::Point(101, 40);
			this->NumericUpDownNumberSeatsAdmin->Name = L"NumericUpDownNumberSeatsAdmin";
			this->NumericUpDownNumberSeatsAdmin->Size = System::Drawing::Size(120, 22);
			this->NumericUpDownNumberSeatsAdmin->TabIndex = 19;
			// 
			// ÑomboBoxStatusAdmin
			// 
			this->ÑomboBoxStatusAdmin->FormattingEnabled = true;
			this->ÑomboBoxStatusAdmin->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Íå çàíÿò", L"Çàíÿò" });
			this->ÑomboBoxStatusAdmin->Location = System::Drawing::Point(101, 7);
			this->ÑomboBoxStatusAdmin->Name = L"ÑomboBoxStatusAdmin";
			this->ÑomboBoxStatusAdmin->Size = System::Drawing::Size(121, 24);
			this->ÑomboBoxStatusAdmin->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Êîë-âî ìåñò:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ñòàòóñ:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 31);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Âûõîä";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TableForm::button1_Click);
			
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 31);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Íàçàä";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TableForm::button2_Click);
			// 
			// TableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 305);
			this->Controls->Add(this->ButtonTable13);
			this->Controls->Add(this->PanelAdmin);
			this->Controls->Add(this->PanelVisitor);
			this->Controls->Add(this->ButtonTable14);
			this->Controls->Add(this->ButtonTable15);
			this->Controls->Add(this->ButtonTable12);
			this->Controls->Add(this->ButtonTable11);
			this->Controls->Add(this->ButtonTable9);
			this->Controls->Add(this->ButtonTable10);
			this->Controls->Add(this->ButtonTable8);
			this->Controls->Add(this->ButtonTable7);
			this->Controls->Add(this->ButtonTable6);
			this->Controls->Add(this->ButtonTable4);
			this->Controls->Add(this->ButtonTable5);
			this->Controls->Add(this->ButtonTable3);
			this->Controls->Add(this->ButtonTable2);
			this->Controls->Add(this->ButtonTable1);
			this->Name = L"TableForm";
			this->Text = L"TableForm";
			this->PanelVisitor->ResumeLayout(false);
			this->PanelVisitor->PerformLayout();
			this->PanelAdmin->ResumeLayout(false);
			this->PanelAdmin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDownNumberSeatsAdmin))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		List<Table^>^ ReadFileTable() {
			StreamReader^ read = gcnew StreamReader("File/Table.txt");
			List<Table^>^ list_table = gcnew List<Table^>();
			String^ line;
			while ((line = read->ReadLine()) != nullptr)
			{
				array<String^>^ Array = line->Split(' ');
				Table^ table = gcnew Table();
				table->Name = Array[0];
				table->IsBusy = Convert::ToBoolean(Array[1]);
				table->NumberSeats = Convert::ToInt32(Array[2]);
				list_table->Add(table);
			}
			read->Close();
			return list_table;
		}
		void WriteFileTable(List<Table^>^ list_table) {
			StreamWriter^ write = gcnew StreamWriter("File/Table.txt");
			for (size_t i = 0; i < list_table->Count; i++)
			{
				write->WriteLine(list_table[i]->Name + " " + list_table[i]->IsBusy + " " + list_table[i]->NumberSeats);
			}
			write->Close();
			
		}
		Table^ NumberTable(List<Table^>^ list_table, Button^ ButtonTable) {
			LastButtonSelected = Convert::ToString(ButtonTable->Name);
			for (int i = 0; i < list_table->Count; i++)
			{
				if (list_table[i]->Name == ButtonTable->Name) {
					if (Admin) {
						if (list_table[i]->IsBusy)
							ÑomboBoxStatusAdmin->SelectedItem = "Çàíÿò";
						else
							ÑomboBoxStatusAdmin->SelectedItem = "Íå çàíÿò";
						NumericUpDownNumberSeatsAdmin->Value = list_table[i]->NumberSeats;
					}
					else
					{
						if (list_table[i]->IsBusy)
							TextBoxStatusVisitor->Text = "Çàíÿò";
						else
							TextBoxStatusVisitor->Text = "Íå çàíÿò";
						TextBoxNumberSeatsVisitor->Text = Convert::ToString(list_table[i]->NumberSeats);
					}
					return list_table[i];
				}
			}
			
		}
		
		static int ClickCounter = 0;
		void ButtonTaimer() {
			Thread::Sleep(1000);
			ClickCounter = 0;
		}
		void TipoDoubleClick(List<Table^>^ list_table, Button^ ButtonTable)
		{
			if (ClickCounter==0)
			{
				Task^ qwerty = gcnew Task(gcnew Action(this, &TableForm::ButtonTaimer));
				qwerty->Start();
			}
			else if (ClickCounter == 2) {
				ClickCounter = 0;
				MyForm^ form = gcnew MyForm(false, UserName, NumberSeats);
				form->Show();
				this->Hide();
				return;
			}
			ClickCounter++;
		}

	private: System::Void ButtonTable1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonUpdateTableAdmin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonTable15_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
