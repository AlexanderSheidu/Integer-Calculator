#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator_extra
	/// </summary>
	public ref class Calculator_extra : public System::Windows::Forms::Form
	{
	public:
		Calculator_extra(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator_extra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(27, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 49);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Calculator_extra::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(143, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Operator";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(316, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 49);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(189, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 64);
			this->button1->TabIndex = 4;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator_extra::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(190, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 64);
			this->button2->TabIndex = 5;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator_extra::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Blue;
			this->button3->Location = System::Drawing::Point(190, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 64);
			this->button3->TabIndex = 6;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator_extra::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Fuchsia;
			this->button4->Location = System::Drawing::Point(190, 372);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 64);
			this->button4->TabIndex = 7;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator_extra::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(348, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 42);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Result";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(316, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 49);
			this->textBox3->TabIndex = 9;
			// 
			// Calculator_extra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 491);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Calculator_extra";
			this->Text = L"The Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(output);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(output);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(output);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
		textBox3->Text = System::Convert::ToString(output);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

