#pragma once
#include "header.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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

	private: System::Windows::Forms::Button^ bt_wykonaj;
	private: System::Windows::Forms::GroupBox^ gb_orgObr;
	private: System::Windows::Forms::PictureBox^ pb_orgObr;
	private: System::Windows::Forms::CheckBox^ checkAsm;
	private: System::Windows::Forms::Button^ bt_wybPlik;
	private: System::Windows::Forms::GroupBox^ gb_grayscaled;
	private: System::Windows::Forms::PictureBox^ pb_grayscaled;
	private: System::Windows::Forms::GroupBox^ gb_orgObrHist;
	private: System::Windows::Forms::PictureBox^ pb_orgObrHist;
	private: System::Windows::Forms::GroupBox^ gb_grayscaledHist;
	private: System::Windows::Forms::PictureBox^ pb_grayscaledHist;
	private: System::Windows::Forms::GroupBox^ gb_iloscWatkow;
	private: System::Windows::Forms::TextBox^ tb_iloscWatkow;
	private: System::Windows::Forms::ListBox^ lb_cykleProc;


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
			this->lb_cykleProc = (gcnew System::Windows::Forms::ListBox());
			this->bt_wykonaj = (gcnew System::Windows::Forms::Button());
			this->gb_orgObr = (gcnew System::Windows::Forms::GroupBox());
			this->pb_orgObr = (gcnew System::Windows::Forms::PictureBox());
			this->checkAsm = (gcnew System::Windows::Forms::CheckBox());
			this->bt_wybPlik = (gcnew System::Windows::Forms::Button());
			this->gb_grayscaled = (gcnew System::Windows::Forms::GroupBox());
			this->pb_grayscaled = (gcnew System::Windows::Forms::PictureBox());
			this->gb_orgObrHist = (gcnew System::Windows::Forms::GroupBox());
			this->pb_orgObrHist = (gcnew System::Windows::Forms::PictureBox());
			this->gb_grayscaledHist = (gcnew System::Windows::Forms::GroupBox());
			this->pb_grayscaledHist = (gcnew System::Windows::Forms::PictureBox());
			this->gb_iloscWatkow = (gcnew System::Windows::Forms::GroupBox());
			this->tb_iloscWatkow = (gcnew System::Windows::Forms::TextBox());
			this->gb_cykle->SuspendLayout();
			this->gb_orgObr->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObr))->BeginInit();
			this->gb_grayscaled->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_grayscaled))->BeginInit();
			this->gb_orgObrHist->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObrHist))->BeginInit();
			this->gb_grayscaledHist->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_grayscaledHist))->BeginInit();
			this->gb_iloscWatkow->SuspendLayout();
			this->SuspendLayout();
			// 
			// gb_cykle
			// 
			this->gb_cykle->Controls->Add(this->lb_cykleProc);
			this->gb_cykle->Location = System::Drawing::Point(412, 547);
			this->gb_cykle->Name = L"gb_cykle";
			this->gb_cykle->Size = System::Drawing::Size(272, 81);
			this->gb_cykle->TabIndex = 18;
			this->gb_cykle->TabStop = false;
			this->gb_cykle->Text = L"Cykle procesora";
			// 
			// lb_cykleProc
			// 
			this->lb_cykleProc->FormattingEnabled = true;
			this->lb_cykleProc->Location = System::Drawing::Point(6, 15);
			this->lb_cykleProc->Name = L"lb_cykleProc";
			this->lb_cykleProc->Size = System::Drawing::Size(260, 56);
			this->lb_cykleProc->TabIndex = 0;
			this->lb_cykleProc->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lb_cykleProc_SelectedIndexChanged);
			// 
			// bt_wykonaj
			// 
			this->bt_wykonaj->Location = System::Drawing::Point(12, 586);
			this->bt_wykonaj->Name = L"bt_wykonaj";
			this->bt_wykonaj->Size = System::Drawing::Size(198, 51);
			this->bt_wykonaj->TabIndex = 16;
			this->bt_wykonaj->Text = L"Wykonaj";
			this->bt_wykonaj->UseVisualStyleBackColor = true;
			this->bt_wykonaj->Click += gcnew System::EventHandler(this, &Form1::bt_wykonaj_Click);
			// 
			// gb_orgObr
			// 
			this->gb_orgObr->Controls->Add(this->pb_orgObr);
			this->gb_orgObr->Location = System::Drawing::Point(12, 61);
			this->gb_orgObr->Name = L"gb_orgObr";
			this->gb_orgObr->Size = System::Drawing::Size(336, 237);
			this->gb_orgObr->TabIndex = 15;
			this->gb_orgObr->TabStop = false;
			this->gb_orgObr->Text = L"Oryginalny obraz";
			// 
			// pb_orgObr
			// 
			this->pb_orgObr->Location = System::Drawing::Point(9, 19);
			this->pb_orgObr->Name = L"pb_orgObr";
			this->pb_orgObr->Size = System::Drawing::Size(321, 212);
			this->pb_orgObr->TabIndex = 1;
			this->pb_orgObr->TabStop = false;
			// 
			// checkAsm
			// 
			this->checkAsm->AutoSize = true;
			this->checkAsm->Location = System::Drawing::Point(225, 560);
			this->checkAsm->Name = L"checkAsm";
			this->checkAsm->Size = System::Drawing::Size(181, 17);
			this->checkAsm->TabIndex = 14;
			this->checkAsm->Text = L"Wykonaj u¿ywaj¹c biblioteki asm";
			this->checkAsm->UseVisualStyleBackColor = true;
			this->checkAsm->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkAsm_CheckedChanged);
			// 
			// bt_wybPlik
			// 
			this->bt_wybPlik->Location = System::Drawing::Point(12, 12);
			this->bt_wybPlik->Name = L"bt_wybPlik";
			this->bt_wybPlik->Size = System::Drawing::Size(288, 43);
			this->bt_wybPlik->TabIndex = 13;
			this->bt_wybPlik->Text = L"Wybierz plik";
			this->bt_wybPlik->UseVisualStyleBackColor = true;
			this->bt_wybPlik->Click += gcnew System::EventHandler(this, &Form1::bt_wybPlik_Click);
			// 
			// gb_grayscaled
			// 
			this->gb_grayscaled->Controls->Add(this->pb_grayscaled);
			this->gb_grayscaled->Location = System::Drawing::Point(354, 61);
			this->gb_grayscaled->Name = L"gb_grayscaled";
			this->gb_grayscaled->Size = System::Drawing::Size(336, 237);
			this->gb_grayscaled->TabIndex = 19;
			this->gb_grayscaled->TabStop = false;
			this->gb_grayscaled->Text = L"Obraz po konwersji";
			// 
			// pb_grayscaled
			// 
			this->pb_grayscaled->Location = System::Drawing::Point(9, 19);
			this->pb_grayscaled->Name = L"pb_grayscaled";
			this->pb_grayscaled->Size = System::Drawing::Size(321, 212);
			this->pb_grayscaled->TabIndex = 1;
			this->pb_grayscaled->TabStop = false;
			// 
			// gb_orgObrHist
			// 
			this->gb_orgObrHist->Controls->Add(this->pb_orgObrHist);
			this->gb_orgObrHist->Location = System::Drawing::Point(12, 304);
			this->gb_orgObrHist->Name = L"gb_orgObrHist";
			this->gb_orgObrHist->Size = System::Drawing::Size(336, 237);
			this->gb_orgObrHist->TabIndex = 20;
			this->gb_orgObrHist->TabStop = false;
			this->gb_orgObrHist->Text = L"Histogram oryginalnego obrazu";
			// 
			// pb_orgObrHist
			// 
			this->pb_orgObrHist->Location = System::Drawing::Point(9, 19);
			this->pb_orgObrHist->Name = L"pb_orgObrHist";
			this->pb_orgObrHist->Size = System::Drawing::Size(321, 212);
			this->pb_orgObrHist->TabIndex = 1;
			this->pb_orgObrHist->TabStop = false;
			// 
			// gb_grayscaledHist
			// 
			this->gb_grayscaledHist->Controls->Add(this->pb_grayscaledHist);
			this->gb_grayscaledHist->Location = System::Drawing::Point(354, 304);
			this->gb_grayscaledHist->Name = L"gb_grayscaledHist";
			this->gb_grayscaledHist->Size = System::Drawing::Size(336, 237);
			this->gb_grayscaledHist->TabIndex = 21;
			this->gb_grayscaledHist->TabStop = false;
			this->gb_grayscaledHist->Text = L"Histogram obrazu po konwersji";
			// 
			// pb_grayscaledHist
			// 
			this->pb_grayscaledHist->Location = System::Drawing::Point(9, 19);
			this->pb_grayscaledHist->Name = L"pb_grayscaledHist";
			this->pb_grayscaledHist->Size = System::Drawing::Size(321, 212);
			this->pb_grayscaledHist->TabIndex = 1;
			this->pb_grayscaledHist->TabStop = false;
			this->pb_grayscaledHist->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// gb_iloscWatkow
			// 
			this->gb_iloscWatkow->Controls->Add(this->tb_iloscWatkow);
			this->gb_iloscWatkow->Location = System::Drawing::Point(12, 541);
			this->gb_iloscWatkow->Name = L"gb_iloscWatkow";
			this->gb_iloscWatkow->Size = System::Drawing::Size(198, 44);
			this->gb_iloscWatkow->TabIndex = 23;
			this->gb_iloscWatkow->TabStop = false;
			this->gb_iloscWatkow->Text = L"Wybierz iloœæ w¹tków (1-64)";
			// 
			// tb_iloscWatkow
			// 
			this->tb_iloscWatkow->Location = System::Drawing::Point(6, 19);
			this->tb_iloscWatkow->Name = L"tb_iloscWatkow";
			this->tb_iloscWatkow->Size = System::Drawing::Size(186, 20);
			this->tb_iloscWatkow->TabIndex = 0;
			this->tb_iloscWatkow->Text = L"1";
			this->tb_iloscWatkow->TextChanged += gcnew System::EventHandler(this, &Form1::tb_iloscWatkow_TextChanged);
			this->tb_iloscWatkow->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::tb_iloscWatkow_KeyPress);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 640);
			this->Controls->Add(this->gb_iloscWatkow);
			this->Controls->Add(this->gb_grayscaledHist);
			this->Controls->Add(this->gb_orgObrHist);
			this->Controls->Add(this->gb_grayscaled);
			this->Controls->Add(this->gb_cykle);
			this->Controls->Add(this->bt_wykonaj);
			this->Controls->Add(this->gb_orgObr);
			this->Controls->Add(this->checkAsm);
			this->Controls->Add(this->bt_wybPlik);
			this->Name = L"Form1";
			this->Text = L"B&W";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->gb_cykle->ResumeLayout(false);
			this->gb_orgObr->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObr))->EndInit();
			this->gb_grayscaled->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_grayscaled))->EndInit();
			this->gb_orgObrHist->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_orgObrHist))->EndInit();
			this->gb_grayscaledHist->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_grayscaledHist))->EndInit();
			this->gb_iloscWatkow->ResumeLayout(false);
			this->gb_iloscWatkow->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_wybPlik_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//zwolnienie istniejacych obrazow i ich histogramow (if any) przed wladowaniem nowych
		FreePictureBox(pb_grayscaled);
		FreePictureBox(pb_grayscaledHist);
		FreePictureBox(pb_orgObr);
		FreePictureBox(pb_orgObrHist);

		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "";
		openFileDialog1->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				pb_orgObr->Image = Image::FromFile(openFileDialog1->FileName);
				pb_orgObr->SizeMode = PictureBoxSizeMode::StretchImage;

				cv::String str = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

				DrawHistogram(str, pb_orgObrHist);

				myStream->Close();
				bt_wykonaj->Enabled = true;
				tb_iloscWatkow->Enabled = true;
			}
		}

	}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	dllHandle = LoadLibrary(L"DLLC.dll");
	PrintToListBox(lb_cykleProc, "Zaladowano biblioteke C++!");

	bt_wykonaj->Enabled = false;
	lb_cykleProc->SelectionMode = SelectionMode::None;
	tb_iloscWatkow->Enabled = false;
	tb_iloscWatkow->MaxLength = 2;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkAsm_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	FreePictureBox(pb_grayscaled);//debug

	if (checkAsm->Checked)
	{
		FreeLibrary(dllHandle);
		dllHandle = NULL;
		dllHandle = LoadLibrary(L"DLL.dll");
		PrintToListBox(lb_cykleProc, "Zaladowano biblioteke asm!");
	}
	else
	{
		FreeLibrary(dllHandle);
		dllHandle = NULL;
		dllHandle = LoadLibrary(L"DLLC.dll");
		PrintToListBox(lb_cykleProc, "Zaladowano biblioteke C++!");
	}
}

private: System::Void bt_wykonaj_Click(System::Object^ sender, System::EventArgs^ e) {
	FreePictureBox(pb_grayscaled);
	//TODO: tutaj sie dzieja jakies zle rzeczy z kopiami?
	pb_grayscaled->Image = (Image^)pb_orgObr->Image->Clone();
	pb_grayscaled->SizeMode = PictureBoxSizeMode::StretchImage;

	Bitmap^ bmp = gcnew Bitmap(pb_grayscaled->Image);
	System::Drawing::Imaging::BitmapData^ bmpData = bmp->LockBits(System::Drawing::Rectangle(0, 0, bmp->Width, bmp->Height),
		Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
	IntPtr cliimgptr = bmpData->Scan0;
	uint8_t* cimgptr = (uint8_t*) cliimgptr.ToPointer();

	//piksele w pamieci od lewej do prawej, od gory w dol, BGR
	to_grayscale proc = (to_grayscale)GetProcAddress(dllHandle, "to_grayscale");

	//threads!
	std::string temp = "";
	MarshalString(tb_iloscWatkow->Text, temp);
	int thread_amount = stoi(temp);

	int lines_per_thread = pb_grayscaled->Image->Height / thread_amount;
	int extra_lines = pb_grayscaled->Image->Height % thread_amount;
	std::vector<std::thread> threads;
	int handled_extra_lines = 0;
	//duzy obraz testowy na wiekszej ilosci watkow zwraca oryginal!!
	for (int i = 0; i < thread_amount; ++i) {
		if (extra_lines) {
			threads.push_back(std::thread(proc, cimgptr,
				i * lines_per_thread + handled_extra_lines * pb_grayscaled->Image->Width, lines_per_thread + 1 * pb_grayscaled->Image->Width));
			++handled_extra_lines;
			--extra_lines;
		}
		else
			threads.push_back(std::thread(proc, cimgptr, i * lines_per_thread * pb_grayscaled->Image->Width, lines_per_thread * pb_grayscaled->Image->Width));
	}
	for (auto& th : threads) {
		th.join();
	}

	//proc(cimgptr, 0, pb_grayscaled->Image->Width*pb_grayscaled->Image->Height);//debug

	pb_grayscaled->Image = bmp; //nie kopiuje? czy trzeba delete bmp?
	//bmp->UnlockBits(bmpData);
	pb_grayscaled->Image->Save("..\\output.bmp", Imaging::ImageFormat::Bmp);

	//TODO: histogram grayscale
	DrawHistogram("..\\output.bmp", pb_grayscaledHist);
	bmp->UnlockBits(bmpData);

}
private: System::Void lb_cykleProc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tb_iloscWatkow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int a = 0;
	if (!tb_iloscWatkow->Text->IsNullOrEmpty(tb_iloscWatkow->Text))
		a = Convert::ToInt16(tb_iloscWatkow->Text);
	
	if (a < 1 || a > 64) {
		bt_wykonaj->Enabled = false;
	}
	else
		bt_wykonaj->Enabled = true;
}

private: System::Void tb_iloscWatkow_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
}

private: void FreePictureBox(PictureBox^ picbox) {
	if (picbox->Image != nullptr)
	{
		delete picbox->Image;
		picbox->Image = nullptr;
	}
	//clear imagebox (for histograms)
	System::Drawing::Graphics^ graphics = picbox->CreateGraphics();
	graphics->Clear(SystemColors::Control);
	delete graphics;
}

private: void DrawHistogram(cv::String imgpath, PictureBox^ picbox) {
	cv::Mat src = cv::imread(cv::samples::findFile(imgpath, cv::IMREAD_COLOR));

	std::vector<cv::Mat> bgr_planes;
	split(src, bgr_planes);
	int histSize = 256;
	float range[] = { 0, 256 }; //the upper boundary is exclusive
	const float* histRange[] = { range };
	bool uniform = true, accumulate = false;
	cv::Mat b_hist, g_hist, r_hist;
	calcHist(&bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histSize, histRange, uniform, accumulate);
	calcHist(&bgr_planes[1], 1, 0, cv::Mat(), g_hist, 1, &histSize, histRange, uniform, accumulate);
	calcHist(&bgr_planes[2], 1, 0, cv::Mat(), r_hist, 1, &histSize, histRange, uniform, accumulate);
	int hist_w = 512, hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);
	cv::Mat histImage(hist_h, hist_w, CV_8UC3, cv::Scalar(0, 0, 0));
	normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
	normalize(g_hist, g_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
	normalize(r_hist, r_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
	for (int i = 1; i < histSize; i++)
	{
		line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(b_hist.at<float>(i - 1))),
			cv::Point(bin_w * (i), hist_h - cvRound(b_hist.at<float>(i))),
			cv::Scalar(255, 0, 0), 2, 8, 0);
		line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(g_hist.at<float>(i - 1))),
			cv::Point(bin_w * (i), hist_h - cvRound(g_hist.at<float>(i))),
			cv::Scalar(0, 255, 0), 2, 8, 0);
		line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(r_hist.at<float>(i - 1))),
			cv::Point(bin_w * (i), hist_h - cvRound(r_hist.at<float>(i))),
			cv::Scalar(0, 0, 255), 2, 8, 0);
	}

	System::Drawing::Graphics^ graphics = picbox->CreateGraphics();
	System::IntPtr ptr(histImage.ptr());
	System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(histImage.cols, histImage.rows, histImage.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, picbox->Width, picbox->Height);
	graphics->DrawImage(b, rect);
	delete graphics;
}
};
}
