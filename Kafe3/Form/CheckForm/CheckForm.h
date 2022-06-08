#pragma once

namespace Kafe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CheckForm
	/// </summary>
	public ref class CheckForm : public System::Windows::Forms::Form
	{
	public:
		CheckForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		CheckForm(Int16 fo, String^ userName, int numberSeats) : UserName(userName), NumberSeats(numberSeats)
		{
			InitializeComponent();
			StartM();
			this->temp = fo;
			label6->Text = Convert::ToString(temp);
			labelUserName->Text = UserName;
			labelNumberSeats->Text = Convert::ToString(NumberSeats);
		}

	public:
	private: String^ UserName; int NumberSeats;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelUserName;
	private: System::Windows::Forms::Label^ labelNumberSeats;


	private: System::Windows::Forms::Label^ label8;


	protected: Int16 temp;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CheckForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelUserName = (gcnew System::Windows::Forms::Label());
			this->labelNumberSeats = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Gabriola", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 727);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(345, 57);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Оплатить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CheckForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label4->Location = System::Drawing::Point(11, 632);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 77);
			this->label4->TabIndex = 13;
			this->label4->Text = L"К оплате:";
			// 
			// listView2
			// 
			this->listView2->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->HoverSelection = true;
			this->listView2->Location = System::Drawing::Point(12, 338);
			this->listView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(357, 288);
			this->listView2->TabIndex = 12;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label3->Location = System::Drawing::Point(122, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 77);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Заказ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 77);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Имя:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gabriola", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label1->Location = System::Drawing::Point(100, -34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 147);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ЧЕК";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label6->Location = System::Drawing::Point(232, 632);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 77);
			this->label6->TabIndex = 17;
			this->label6->Text = L"###";
			// 
			// labelUserName
			// 
			this->labelUserName->AutoSize = true;
			this->labelUserName->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelUserName->Location = System::Drawing::Point(239, 91);
			this->labelUserName->Name = L"labelUserName";
			this->labelUserName->Size = System::Drawing::Size(90, 77);
			this->labelUserName->TabIndex = 16;
			this->labelUserName->Text = L"###";
			// 
			// labelNumberSeats
			// 
			this->labelNumberSeats->AutoSize = true;
			this->labelNumberSeats->Font = (gcnew System::Drawing::Font(L"Gabriola", 25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelNumberSeats->Location = System::Drawing::Point(279, 177);
			this->labelNumberSeats->Name = L"labelNumberSeats";
			this->labelNumberSeats->Size = System::Drawing::Size(90, 77);
			this->labelNumberSeats->TabIndex = 19;
			this->labelNumberSeats->Text = L"###";
			this->labelNumberSeats->Click += gcnew System::EventHandler(this, &CheckForm::labelNumberSeats_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gabriola", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label8->Location = System::Drawing::Point(2, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(243, 55);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Кол-во посетителей:";
			// 
			// CheckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 797);
			this->Controls->Add(this->labelNumberSeats);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelUserName);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CheckForm";
			this->Text = L"CheckForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void StartM();
private: System::Void Headers();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void labelNumberSeats_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
