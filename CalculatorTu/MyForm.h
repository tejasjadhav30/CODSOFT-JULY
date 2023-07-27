#pragma once

namespace CalculatorTu {

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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(-3, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(249, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 42);
			this->button3->TabIndex = 5;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(91, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 42);
			this->button4->TabIndex = 6;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(91, 156);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 42);
			this->button5->TabIndex = 10;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(170, 156);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 42);
			this->button6->TabIndex = 9;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(249, 156);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 42);
			this->button7->TabIndex = 8;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 156);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(91, 214);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 42);
			this->button9->TabIndex = 14;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(170, 214);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 42);
			this->button10->TabIndex = 13;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(249, 214);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 42);
			this->button11->TabIndex = 12;
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 214);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 42);
			this->button12->TabIndex = 11;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(91, 276);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(73, 42);
			this->button13->TabIndex = 18;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(170, 276);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(73, 42);
			this->button14->TabIndex = 17;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(249, 276);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(73, 42);
			this->button15->TabIndex = 16;
			this->button15->Text = L"�";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(12, 276);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(73, 42);
			this->button16->TabIndex = 15;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(91, 333);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 42);
			this->button17->TabIndex = 22;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(170, 333);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 42);
			this->button18->TabIndex = 21;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(249, 333);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 42);
			this->button19->TabIndex = 20;
			this->button19->Text = L"�";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(12, 333);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 42);
			this->button20->TabIndex = 19;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 419);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button15);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		if (textBox1->Text =="0")
		{
			textBox1->Text = Numbers->Text;
		}
		else {
			textBox1->Text = textBox1->Text + Numbers->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;

}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		if(!textBox1->Text->Contains("."))
		{
			textBox1->Text = textBox1->Text + ".";
		}
	}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox1->Text);

		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if(operators=="-")
		{
			result = firstDigit - secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if(operators=="*")
		{
			result = firstDigit * secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (operators == "/")
		{
			result = firstDigit / secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
;}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0,1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length>0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length-1,1);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}