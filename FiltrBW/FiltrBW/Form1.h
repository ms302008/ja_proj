#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gb_cykle;
	protected:
	private: System::Windows::Forms::Label^ lb_lczbCykli;
	private: System::Windows::Forms::GroupBox^ gb_alter;
	private: System::Windows::Forms::PictureBox^ pb_alter;
	private: System::Windows::Forms::Button^ bt_wykonaj;
	private: System::Windows::Forms::GroupBox^ gb_orgObr;
	private: System::Windows::Forms::PictureBox^ pb_orgObr;
	private: System::Windows::Forms::CheckBox^ checkAsm;
	private: System::Windows::Forms::Button^ bt_wybPlik;

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
			this->gb_cykle = (gcnew System::Windows::Forms::GroupBox());
			this->lb_lczbCykli = (gcnew System::Windows::Forms::Label());
			this->gb_alter = (gcnew System::Windows::Forms::GroupBox());
			this->pb_alter = (gcnew System::Windows::Forms::PictureBox());
			this->bt_wykonaj = (gcnew System::Windows::Forms::Button());
			this->gb_orgObr = (gcnew System::Windows::Forms::GroupBox());
			this->pb_orgObr = (gcnew System::Windows::Forms::PictureBox());
			this->checkAsm = (gcnew System::Windows::Forms::CheckBox());
			this->bt_wybPlik = (gcnew System::Windows::Forms::Button());
			this->gb_cykle->SuspendLayout();
			this->gb_alter->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_alter))->BeginInit();
			this->gb_orgObr->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObr))->BeginInit();
			this->SuspendLayout();
			// 
			// gb_cykle
			// 
			this->gb_cykle->Controls->Add(this->lb_lczbCykli);
			this->gb_cykle->Location = System::Drawing::Point(225, 366);
			this->gb_cykle->Name = L"gb_cykle";
			this->gb_cykle->Size = System::Drawing::Size(204, 51);
			this->gb_cykle->TabIndex = 18;
			this->gb_cykle->TabStop = false;
			this->gb_cykle->Text = L"Cykle procesora";
			// 
			// lb_lczbCykli
			// 
			this->lb_lczbCykli->AutoSize = true;
			this->lb_lczbCykli->Location = System::Drawing::Point(6, 16);
			this->lb_lczbCykli->Name = L"lb_lczbCykli";
			this->lb_lczbCykli->Size = System::Drawing::Size(73, 13);
			this->lb_lczbCykli->TabIndex = 0;
			this->lb_lczbCykli->Text = L"<liczba_cykli>";
			// 
			// gb_alter
			// 
			this->gb_alter->Controls->Add(this->pb_alter);
			this->gb_alter->Location = System::Drawing::Point(372, 84);
			this->gb_alter->Name = L"gb_alter";
			this->gb_alter->Size = System::Drawing::Size(354, 259);
			this->gb_alter->TabIndex = 17;
			this->gb_alter->TabStop = false;
			this->gb_alter->Text = L"Zmodyfikany obraz";
			// 
			// pb_alter
			// 
			this->pb_alter->Location = System::Drawing::Point(9, 19);
			this->pb_alter->Name = L"pb_alter";
			this->pb_alter->Size = System::Drawing::Size(339, 234);
			this->pb_alter->TabIndex = 1;
			this->pb_alter->TabStop = false;
			// 
			// bt_wykonaj
			// 
			this->bt_wykonaj->Location = System::Drawing::Point(21, 366);
			this->bt_wykonaj->Name = L"bt_wykonaj";
			this->bt_wykonaj->Size = System::Drawing::Size(198, 51);
			this->bt_wykonaj->TabIndex = 16;
			this->bt_wykonaj->Text = L"Wykonaj";
			this->bt_wykonaj->UseVisualStyleBackColor = true;
			// 
			// gb_orgObr
			// 
			this->gb_orgObr->Controls->Add(this->pb_orgObr);
			this->gb_orgObr->Location = System::Drawing::Point(12, 84);
			this->gb_orgObr->Name = L"gb_orgObr";
			this->gb_orgObr->Size = System::Drawing::Size(354, 259);
			this->gb_orgObr->TabIndex = 15;
			this->gb_orgObr->TabStop = false;
			this->gb_orgObr->Text = L"Oryginalny obraz";
			// 
			// pb_orgObr
			// 
			this->pb_orgObr->Location = System::Drawing::Point(9, 19);
			this->pb_orgObr->Name = L"pb_orgObr";
			this->pb_orgObr->Size = System::Drawing::Size(339, 234);
			this->pb_orgObr->TabIndex = 1;
			this->pb_orgObr->TabStop = false;
			// 
			// checkAsm
			// 
			this->checkAsm->AutoSize = true;
			this->checkAsm->Location = System::Drawing::Point(21, 343);
			this->checkAsm->Name = L"checkAsm";
			this->checkAsm->Size = System::Drawing::Size(181, 17);
			this->checkAsm->TabIndex = 14;
			this->checkAsm->Text = L"Wykonaj u¿ywaj¹c biblioteki asm";
			this->checkAsm->UseVisualStyleBackColor = true;
			// 
			// bt_wybPlik
			// 
			this->bt_wybPlik->Location = System::Drawing::Point(12, 12);
			this->bt_wybPlik->Name = L"bt_wybPlik";
			this->bt_wybPlik->Size = System::Drawing::Size(288, 43);
			this->bt_wybPlik->TabIndex = 13;
			this->bt_wybPlik->Text = L"Wybierz plik";
			this->bt_wybPlik->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->gb_cykle);
			this->Controls->Add(this->gb_alter);
			this->Controls->Add(this->bt_wykonaj);
			this->Controls->Add(this->gb_orgObr);
			this->Controls->Add(this->checkAsm);
			this->Controls->Add(this->bt_wybPlik);
			this->Name = L"Form1";
			this->Text = L"B&W";
			this->gb_cykle->ResumeLayout(false);
			this->gb_cykle->PerformLayout();
			this->gb_alter->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_alter))->EndInit();
			this->gb_orgObr->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
