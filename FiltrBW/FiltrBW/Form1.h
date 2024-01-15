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
	private: System::Windows::Forms::RadioButton^ rb_asm;

	private: System::Windows::Forms::RadioButton^ rb_cpp;



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
			this->gb_cykle = (gcnew System::Windows::Forms::GroupBox());
			this->lb_cykleProc = (gcnew System::Windows::Forms::ListBox());
			this->bt_wykonaj = (gcnew System::Windows::Forms::Button());
			this->gb_orgObr = (gcnew System::Windows::Forms::GroupBox());
			this->pb_orgObr = (gcnew System::Windows::Forms::PictureBox());
			this->bt_wybPlik = (gcnew System::Windows::Forms::Button());
			this->gb_grayscaled = (gcnew System::Windows::Forms::GroupBox());
			this->pb_grayscaled = (gcnew System::Windows::Forms::PictureBox());
			this->gb_orgObrHist = (gcnew System::Windows::Forms::GroupBox());
			this->pb_orgObrHist = (gcnew System::Windows::Forms::PictureBox());
			this->gb_grayscaledHist = (gcnew System::Windows::Forms::GroupBox());
			this->pb_grayscaledHist = (gcnew System::Windows::Forms::PictureBox());
			this->gb_iloscWatkow = (gcnew System::Windows::Forms::GroupBox());
			this->tb_iloscWatkow = (gcnew System::Windows::Forms::TextBox());
			this->rb_asm = (gcnew System::Windows::Forms::RadioButton());
			this->rb_cpp = (gcnew System::Windows::Forms::RadioButton());
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
			this->gb_cykle->Size = System::Drawing::Size(272, 90);
			this->gb_cykle->TabIndex = 18;
			this->gb_cykle->TabStop = false;
			this->gb_cykle->Text = L"Cykle procesora";
			// 
			// lb_cykleProc
			// 
			this->lb_cykleProc->FormattingEnabled = true;
			this->lb_cykleProc->Location = System::Drawing::Point(6, 15);
			this->lb_cykleProc->Name = L"lb_cykleProc";
			this->lb_cykleProc->Size = System::Drawing::Size(260, 69);
			this->lb_cykleProc->TabIndex = 0;
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
			// 
			// gb_iloscWatkow
			// 
			this->gb_iloscWatkow->Controls->Add(this->tb_iloscWatkow);
			this->gb_iloscWatkow->Location = System::Drawing::Point(12, 541);
			this->gb_iloscWatkow->Name = L"gb_iloscWatkow";
			this->gb_iloscWatkow->Size = System::Drawing::Size(198, 44);
			this->gb_iloscWatkow->TabIndex = 23;
			this->gb_iloscWatkow->TabStop = false;
			this->gb_iloscWatkow->Text = L"Wybierz ilosc watkow (1-64)";
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
			// rb_asm
			// 
			this->rb_asm->AutoSize = true;
			this->rb_asm->Location = System::Drawing::Point(225, 547);
			this->rb_asm->Name = L"rb_asm";
			this->rb_asm->Size = System::Drawing::Size(180, 17);
			this->rb_asm->TabIndex = 24;
			this->rb_asm->TabStop = true;
			this->rb_asm->Text = L"Wykonaj uzywajac biblioteki asm";
			this->rb_asm->UseVisualStyleBackColor = true;
			this->rb_asm->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_asm_CheckedChanged);
			// 
			// rb_cpp
			// 
			this->rb_cpp->AutoSize = true;
			this->rb_cpp->Location = System::Drawing::Point(225, 570);
			this->rb_cpp->Name = L"rb_cpp";
			this->rb_cpp->Size = System::Drawing::Size(180, 17);
			this->rb_cpp->TabIndex = 25;
			this->rb_cpp->TabStop = true;
			this->rb_cpp->Text = L"Wykonaj uzywajac biblioteki C++";
			this->rb_cpp->UseVisualStyleBackColor = true;
			this->rb_cpp->CheckedChanged += gcnew System::EventHandler(this, &Form1::rb_cpp_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 640);
			this->Controls->Add(this->rb_cpp);
			this->Controls->Add(this->rb_asm);
			this->Controls->Add(this->gb_iloscWatkow);
			this->Controls->Add(this->gb_grayscaledHist);
			this->Controls->Add(this->gb_orgObrHist);
			this->Controls->Add(this->gb_grayscaled);
			this->Controls->Add(this->gb_cykle);
			this->Controls->Add(this->bt_wykonaj);
			this->Controls->Add(this->gb_orgObr);
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
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		dllHandle = LoadLibrary(L"DLL.dll");

		//ustaw poczatkowa liczbe watkow na ilosc jednostek logiczych sprzetu
		const auto processor_count = std::thread::hardware_concurrency();
		tb_iloscWatkow->Text = processor_count.ToString();

		rb_asm->Checked = true;
		bt_wykonaj->Enabled = false;
		lb_cykleProc->SelectionMode = SelectionMode::None;
		tb_iloscWatkow->Enabled = false;
		tb_iloscWatkow->MaxLength = 2;
		
	}

	private: System::Void rb_asm_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (rb_asm->Checked == true) {
			FreeLibrary(dllHandle);
			dllHandle = NULL;
			dllHandle = LoadLibrary(L"DLL.dll");
		}
	}

	private: System::Void rb_cpp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (rb_cpp->Checked == true) {
			FreeLibrary(dllHandle);
			dllHandle = NULL;
			dllHandle = LoadLibrary(L"DLLC.dll");
		}
	}

	private: System::Void bt_wybPlik_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Stream^ myStream;
		OpenFileDialog^ myOpenFileDialog = gcnew OpenFileDialog;

		myOpenFileDialog->InitialDirectory = "";
		myOpenFileDialog->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		myOpenFileDialog->FilterIndex = 1;
		myOpenFileDialog->RestoreDirectory = true;
		try {
			if (myOpenFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = myOpenFileDialog->OpenFile()) != nullptr)
				{
					FileInfo^ fi = gcnew FileInfo(myOpenFileDialog->FileName);
					if ((fi->Extension == ".png" && fi->Length < 125'000'000) ||
						(fi->Extension == ".jpg" && fi->Length < 125'000'000) ||
						(fi->Extension == ".jpeg" && fi->Length < 125'000'000) ||
						(fi->Extension == ".bmp" && fi->Length < 1'000'000'000)) { //przyjmuj tylko bitmapy <1GB i <125MB inne formaty
						DisableComponents();
						//Code to read the stream
						//zwolnienie istniejacych obrazow i ich histogramow (if any) przed wladowaniem nowych
						FreePictureBox(pb_grayscaled);
						FreePictureBox(pb_grayscaledHist);
						FreePictureBox(pb_orgObr);
						FreePictureBox(pb_orgObrHist);

						pb_orgObr->Image = Image::FromFile(myOpenFileDialog->FileName);
						pb_orgObr->SizeMode = PictureBoxSizeMode::StretchImage;
						myStream->Close();
						cv::String path = msclr::interop::marshal_as<std::string>(myOpenFileDialog->FileName);

						DrawHistogram(path, pb_orgObrHist);

						EnableComponents();
					}
					else {
						PrintToListBox(lb_cykleProc, "Za duzy plik!");
					}
				}
			}
		}
		catch (Exception^ ex) {
			PrintToListBox(lb_cykleProc, "Blad przy otwieraniu pliku!");
			bt_wybPlik->Enabled = true;
		}
		delete myOpenFileDialog;
	}

	private: System::Void bt_wykonaj_Click(System::Object^ sender, System::EventArgs^ e) {
		DisableComponents();
		FreePictureBox(pb_grayscaled);
		FreePictureBox(pb_grayscaledHist);

		clock_t start_time = clock();

		Bitmap^ bmp = gcnew Bitmap(pb_orgObr->Image);
		System::Drawing::Imaging::BitmapData^ bmpData = bmp->LockBits(System::Drawing::Rectangle(0, 0, bmp->Width, bmp->Height),
			Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		IntPtr cliimgptr = bmpData->Scan0;
		uint8_t* cimgptr = (uint8_t*)cliimgptr.ToPointer();

		//piksele w pamieci od lewej do prawej, od gory w dol, BGR
		to_grayscale proc = (to_grayscale)GetProcAddress(dllHandle, "to_grayscale");

		//threads!
		std::string temp = msclr::interop::marshal_as<std::string>(tb_iloscWatkow->Text);
		int thread_amount = stoi(temp);

		//cap na ilosc watkow jesli obraz jest za maly
		if (pb_orgObr->Image->Height < thread_amount)
			thread_amount = pb_orgObr->Image->Height;

		int lines_per_thread = pb_orgObr->Image->Height / thread_amount;
		int extra_lines = pb_orgObr->Image->Height % thread_amount;
		std::vector<std::thread> threads;
		int handled_extra_lines = 0;

		for (int i = 0; i < thread_amount; ++i) {
			if (extra_lines) {
				threads.push_back(std::thread(proc, cimgptr,
					(i * lines_per_thread + handled_extra_lines) * pb_orgObr->Image->Width, (lines_per_thread + 1) * pb_orgObr->Image->Width));
				++handled_extra_lines;
				--extra_lines;
			}
			else
				threads.push_back(std::thread(proc, cimgptr, (i * lines_per_thread + handled_extra_lines) * pb_orgObr->Image->Width, lines_per_thread * pb_orgObr->Image->Width));
		}
		for (auto& th : threads) {
			th.join();
		}

		pb_grayscaled->Image = bmp; //przez referencje
		pb_grayscaled->SizeMode = PictureBoxSizeMode::StretchImage;
		pb_grayscaled->Image->Save("..\\output.bmp", Imaging::ImageFormat::Bmp);//zmienic na "output.bmp" dla wersji release

		//histogram grayscale
		DrawHistogram("..\\output.bmp", pb_grayscaledHist);
		bmp->UnlockBits(bmpData);

		clock_t finish_time = clock();
		double duration_s = (double)(finish_time - start_time) / CLOCKS_PER_SEC;

		if (rb_asm->Checked) {
			PrintToListBox(lb_cykleProc, "asm: Ilosc watkow: " + thread_amount + " Czas wykonania: " + duration_s + "s");
		}
		else
			PrintToListBox(lb_cykleProc, "C++: Ilosc watkow: " + thread_amount + " Czas wykonania: " + duration_s + "s");

		EnableComponents();
	}

	private: System::Void tb_iloscWatkow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//zablokuj wykonanie jesli liczba nie jest w zakresie 1-64
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
		//blokuj nie-cyfry i nie-backspace
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

	private: void DisableComponents() {
		bt_wybPlik->Enabled = false;
		bt_wykonaj->Enabled = false;
		tb_iloscWatkow->Enabled = false;
		rb_asm->Enabled = false;
		rb_cpp->Enabled = false;
	}

	private: void EnableComponents() {
		bt_wybPlik->Enabled = true;
		bt_wykonaj->Enabled = true;
		tb_iloscWatkow->Enabled = true;
		rb_asm->Enabled = true;
		rb_cpp->Enabled = true;
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
