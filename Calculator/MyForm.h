#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonbackspace;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ buttonclear;
	private: System::Windows::Forms::Button^ buttonclearentry;
	private: System::Windows::Forms::Button^ buttonplusminus;
	protected:

	protected:










	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;





	private: System::Windows::Forms::Button^ buttoncollection;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



	private: System::Windows::Forms::Button^ buttonsubtraction;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ buttonmultiplication;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttondot;
	private: System::Windows::Forms::Button^ buttonequals;



	private: System::Windows::Forms::Button^ buttondivide;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonbackspace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->buttonclear = (gcnew System::Windows::Forms::Button());
			this->buttonclearentry = (gcnew System::Windows::Forms::Button());
			this->buttonplusminus = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttoncollection = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonsubtraction = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonmultiplication = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttondot = (gcnew System::Windows::Forms::Button());
			this->buttonequals = (gcnew System::Windows::Forms::Button());
			this->buttondivide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonbackspace
			// 
			this->buttonbackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->buttonbackspace->Location = System::Drawing::Point(8, 92);
			this->buttonbackspace->Name = L"buttonbackspace";
			this->buttonbackspace->Size = System::Drawing::Size(80, 80);
			this->buttonbackspace->TabIndex = 0;
			this->buttonbackspace->Text = L"";
			this->buttonbackspace->UseVisualStyleBackColor = true;
			this->buttonbackspace->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(8, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(338, 74);
			this->txtDisplay->TabIndex = 1;
			// 
			// buttonclear
			// 
			this->buttonclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonclear->Location = System::Drawing::Point(94, 92);
			this->buttonclear->Name = L"buttonclear";
			this->buttonclear->Size = System::Drawing::Size(80, 80);
			this->buttonclear->TabIndex = 2;
			this->buttonclear->Text = L"C";
			this->buttonclear->UseVisualStyleBackColor = true;
			this->buttonclear->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// buttonclearentry
			// 
			this->buttonclearentry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonclearentry->Location = System::Drawing::Point(180, 92);
			this->buttonclearentry->Name = L"buttonclearentry";
			this->buttonclearentry->Size = System::Drawing::Size(80, 80);
			this->buttonclearentry->TabIndex = 3;
			this->buttonclearentry->Text = L"CE";
			this->buttonclearentry->UseVisualStyleBackColor = true;
			this->buttonclearentry->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// buttonplusminus
			// 
			this->buttonplusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonplusminus->Location = System::Drawing::Point(266, 92);
			this->buttonplusminus->Name = L"buttonplusminus";
			this->buttonplusminus->Size = System::Drawing::Size(80, 80);
			this->buttonplusminus->TabIndex = 4;
			this->buttonplusminus->Text = L"±";
			this->buttonplusminus->UseVisualStyleBackColor = true;
			this->buttonplusminus->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(8, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 5;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(94, 178);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 6;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(180, 178);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 7;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// buttoncollection
			// 
			this->buttoncollection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoncollection->Location = System::Drawing::Point(266, 178);
			this->buttoncollection->Name = L"buttoncollection";
			this->buttoncollection->Size = System::Drawing::Size(80, 80);
			this->buttoncollection->TabIndex = 8;
			this->buttoncollection->Text = L"+";
			this->buttoncollection->UseVisualStyleBackColor = true;
			this->buttoncollection->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(8, 264);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 9;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(94, 264);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 10;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(178, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 11;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// buttonsubtraction
			// 
			this->buttonsubtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonsubtraction->Location = System::Drawing::Point(264, 264);
			this->buttonsubtraction->Name = L"buttonsubtraction";
			this->buttonsubtraction->Size = System::Drawing::Size(80, 80);
			this->buttonsubtraction->TabIndex = 12;
			this->buttonsubtraction->Text = L"-";
			this->buttonsubtraction->UseVisualStyleBackColor = true;
			this->buttonsubtraction->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(8, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 13;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(94, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 14;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(178, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 15;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// buttonmultiplication
			// 
			this->buttonmultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonmultiplication->Location = System::Drawing::Point(264, 350);
			this->buttonmultiplication->Name = L"buttonmultiplication";
			this->buttonmultiplication->Size = System::Drawing::Size(80, 80);
			this->buttonmultiplication->TabIndex = 16;
			this->buttonmultiplication->Text = L"*";
			this->buttonmultiplication->UseVisualStyleBackColor = true;
			this->buttonmultiplication->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(8, 436);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(80, 80);
			this->button0->TabIndex = 17;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// buttondot
			// 
			this->buttondot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondot->Location = System::Drawing::Point(94, 436);
			this->buttondot->Name = L"buttondot";
			this->buttondot->Size = System::Drawing::Size(80, 80);
			this->buttondot->TabIndex = 18;
			this->buttondot->Text = L".";
			this->buttondot->UseVisualStyleBackColor = true;
			this->buttondot->Click += gcnew System::EventHandler(this, &MyForm::buttondot_Click);
			// 
			// buttonequals
			// 
			this->buttonequals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonequals->Location = System::Drawing::Point(178, 436);
			this->buttonequals->Name = L"buttonequals";
			this->buttonequals->Size = System::Drawing::Size(80, 80);
			this->buttonequals->TabIndex = 19;
			this->buttonequals->Text = L"=";
			this->buttonequals->UseVisualStyleBackColor = true;
			this->buttonequals->Click += gcnew System::EventHandler(this, &MyForm::buttonequals_Click);
			// 
			// buttondivide
			// 
			this->buttondivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondivide->Location = System::Drawing::Point(264, 436);
			this->buttondivide->Name = L"buttondivide";
			this->buttondivide->Size = System::Drawing::Size(80, 80);
			this->buttondivide->TabIndex = 20;
			this->buttondivide->Text = L"/";
			this->buttondivide->UseVisualStyleBackColor = true;
			this->buttondivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 522);
			this->Controls->Add(this->buttondivide);
			this->Controls->Add(this->buttonequals);
			this->Controls->Add(this->buttondot);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonmultiplication);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonsubtraction);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttoncollection);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonplusminus);
			this->Controls->Add(this->buttonclearentry);
			this->Controls->Add(this->buttonclear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->buttonbackspace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text=="")
	{
		txtDisplay->Text = "0";
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	txtDisplay->Text = "0";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else 
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast <Button^> (sender);
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	     }
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast <Button^> (sender);
	firstDigit = Double::Parse(txtDisplay->Text);
    txtDisplay->Text ="";
	operators = NumbersOp->Text;
}
private: System::Void buttondot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void buttonequals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
};
}
