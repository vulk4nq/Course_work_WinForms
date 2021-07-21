#pragma once

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ fAQToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àâòîğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èÈÖÒToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãğóïïû12002005ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äàâûäîâÀëåêñàíäğToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericRow;
	private: System::Windows::Forms::NumericUpDown^ numericColumn;
	private: System::Windows::Forms::Button^ buttonMake;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonGen;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonFromFile;

	private: System::Windows::Forms::Button^ buttonFileOut;
	private: System::Windows::Forms::TextBox^ tBOut;

	private: System::Windows::Forms::Button^ buttonRez;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fAQToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àâòîğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èÈÖÒToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğóïïû12002005ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàâûäîâÀëåêñàíäğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericRow = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericColumn = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonMake = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonGen = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonFromFile = (gcnew System::Windows::Forms::Button());
			this->buttonFileOut = (gcnew System::Windows::Forms::Button());
			this->tBOut = (gcnew System::Windows::Forms::TextBox());
			this->buttonRez = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericColumn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âûõîäToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1239, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(80, 32);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fAQToolStripMenuItem,
					this->àâòîğToolStripMenuItem
			});
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(141, 32);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// fAQToolStripMenuItem
			// 
			this->fAQToolStripMenuItem->Name = L"fAQToolStripMenuItem";
			this->fAQToolStripMenuItem->Size = System::Drawing::Size(211, 34);
			this->fAQToolStripMenuItem->Text = L"Íàçíà÷åíèå";
			this->fAQToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fAQToolStripMenuItem_Click);
			// 
			// àâòîğToolStripMenuItem
			// 
			this->àâòîğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem });
			this->àâòîğToolStripMenuItem->Name = L"àâòîğToolStripMenuItem";
			this->àâòîğToolStripMenuItem->Size = System::Drawing::Size(211, 34);
			this->àâòîğToolStripMenuItem->Text = L"Àâòîğ";
			// 
			// ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem
			// 
			this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->èÈÖÒToolStripMenuItem });
			this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem->Name = L"ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem";
			this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem->Size = System::Drawing::Size(269, 34);
			this->ñòóäåíòÍÈÓÁåëÃÓToolStripMenuItem->Text = L"Ñòóäåíò ÍÈÓ ÁåëÃÓ";
			// 
			// èÈÖÒToolStripMenuItem
			// 
			this->èÈÖÒToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ãğóïïû12002005ToolStripMenuItem });
			this->èÈÖÒToolStripMenuItem->Name = L"èÈÖÒToolStripMenuItem";
			this->èÈÖÒToolStripMenuItem->Size = System::Drawing::Size(162, 34);
			this->èÈÖÒToolStripMenuItem->Text = L"ÈÈÖÒ";
			// 
			// ãğóïïû12002005ToolStripMenuItem
			// 
			this->ãğóïïû12002005ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->äàâûäîâÀëåêñàíäğToolStripMenuItem });
			this->ãğóïïû12002005ToolStripMenuItem->Name = L"ãğóïïû12002005ToolStripMenuItem";
			this->ãğóïïû12002005ToolStripMenuItem->Size = System::Drawing::Size(259, 34);
			this->ãğóïïû12002005ToolStripMenuItem->Text = L"ãğóïïû 12002005";
			// 
			// äàâûäîâÀëåêñàíäğToolStripMenuItem
			// 
			this->äàâûäîâÀëåêñàíäğToolStripMenuItem->Name = L"äàâûäîâÀëåêñàíäğToolStripMenuItem";
			this->äàâûäîâÀëåêñàíäğToolStripMenuItem->Size = System::Drawing::Size(281, 34);
			this->äàâûäîâÀëåêñàíäğToolStripMenuItem->Text = L"Äàâûäîâ Àëåêñàíäğ";
			// 
			// numericRow
			// 
			this->numericRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericRow->Location = System::Drawing::Point(430, 407);
			this->numericRow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericRow->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericRow->Name = L"numericRow";
			this->numericRow->Size = System::Drawing::Size(120, 37);
			this->numericRow->TabIndex = 4;
			this->numericRow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericColumn
			// 
			this->numericColumn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericColumn->Location = System::Drawing::Point(174, 407);
			this->numericColumn->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericColumn->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericColumn->Name = L"numericColumn";
			this->numericColumn->Size = System::Drawing::Size(120, 37);
			this->numericColumn->TabIndex = 3;
			this->numericColumn->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// buttonMake
			// 
			this->buttonMake->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMake->Location = System::Drawing::Point(374, 462);
			this->buttonMake->Name = L"buttonMake";
			this->buttonMake->Size = System::Drawing::Size(220, 66);
			this->buttonMake->TabIndex = 5;
			this->buttonMake->Text = L"Ñîçäàòü ìàòğèöó";
			this->buttonMake->UseVisualStyleBackColor = true;
			this->buttonMake->Click += gcnew System::EventHandler(this, &MyForm::buttonMake_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(131, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Èñõîäíàÿ ìàòğèöà";
			// 
			// buttonGen
			// 
			this->buttonGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGen->Location = System::Drawing::Point(47, 462);
			this->buttonGen->Name = L"buttonGen";
			this->buttonGen->Size = System::Drawing::Size(220, 66);
			this->buttonGen->TabIndex = 6;
			this->buttonGen->Text = L"Cãåíåğèğîâàòü*";
			this->buttonGen->UseVisualStyleBackColor = true;
			this->buttonGen->Click += gcnew System::EventHandler(this, &MyForm::buttonGen_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(57, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(439, 343);
			this->dataGridView1->TabIndex = 2;
			// 
			// buttonFromFile
			// 
			this->buttonFromFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFromFile->Location = System::Drawing::Point(47, 536);
			this->buttonFromFile->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonFromFile->Name = L"buttonFromFile";
			this->buttonFromFile->Size = System::Drawing::Size(270, 66);
			this->buttonFromFile->TabIndex = 7;
			this->buttonFromFile->Text = L"C÷èòàòü èç ôàéëà* \"IshodnieDanie.txt\"";
			this->buttonFromFile->UseVisualStyleBackColor = true;
			this->buttonFromFile->Click += gcnew System::EventHandler(this, &MyForm::buttonFromFile_Click);
			// 
			// buttonFileOut
			// 
			this->buttonFileOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFileOut->Location = System::Drawing::Point(324, 536);
			this->buttonFileOut->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonFileOut->Name = L"buttonFileOut";
			this->buttonFileOut->Size = System::Drawing::Size(270, 66);
			this->buttonFileOut->TabIndex = 9;
			this->buttonFileOut->Text = L"Âûâåñòè â ôàéë \"Rezultati.txt\"";
			this->buttonFileOut->UseVisualStyleBackColor = true;
			this->buttonFileOut->Click += gcnew System::EventHandler(this, &MyForm::buttonFileOut_Click);
			// 
			// tBOut
			// 
			this->tBOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBOut->Location = System::Drawing::Point(503, 55);
			this->tBOut->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tBOut->Multiline = true;
			this->tBOut->Name = L"tBOut";
			this->tBOut->ReadOnly = true;
			this->tBOut->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tBOut->Size = System::Drawing::Size(690, 341);
			this->tBOut->TabIndex = 10;
			// 
			// buttonRez
			// 
			this->buttonRez->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRez->Location = System::Drawing::Point(635, 418);
			this->buttonRez->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonRez->Name = L"buttonRez";
			this->buttonRez->Size = System::Drawing::Size(512, 222);
			this->buttonRez->TabIndex = 11;
			this->buttonRez->Text = L"Âûñ÷èòàòü ïîñëåäîâàòåëüíîñòü";
			this->buttonRez->UseVisualStyleBackColor = true;
			this->buttonRez->Click += gcnew System::EventHandler(this, &MyForm::buttonRez_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(786, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 37);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Âûâîä";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->buttonRez);
			this->groupBox1->Controls->Add(this->tBOut);
			this->groupBox1->Controls->Add(this->buttonFileOut);
			this->groupBox1->Controls->Add(this->buttonFromFile);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->buttonGen);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->buttonMake);
			this->groupBox1->Controls->Add(this->numericColumn);
			this->groupBox1->Controls->Add(this->numericRow);
			this->groupBox1->Location = System::Drawing::Point(12, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1214, 652);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(303, 413);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 26);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Ñğåäñòâà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(21, 413);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 26);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Ïğåäïğèÿòèÿ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 620);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(573, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"*Äëÿ ñ÷èòûâàíèÿ äàííûõ è ãåíåğàöèè ïğåäâàğèòåëüíî ñîçäàéòå ìàòğèöó";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1239, 700);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Êóğñîâàÿ Ğàáîòà";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericColumn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonGen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMake_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFromFile_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRez_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFileOut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void fAQToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	   private: void ShowA();


};
}
