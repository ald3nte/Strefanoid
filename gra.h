#pragma once

namespace Strefanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gra
	/// </summary>
	public ref class gra : public System::Windows::Forms::Form
	{

	public:
		gra(void)
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
		~gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pilka;
	protected:
	private: System::Windows::Forms::Timer^  zegar;
	private: System::Windows::Forms::PictureBox^  deska;
	private: System::Windows::Forms::Label^  lblPunkty;
	private: System::Windows::Forms::Label^  lblZycia;
	private: System::Windows::Forms::PictureBox^  picPrzegrana;
	private: System::Windows::Forms::PictureBox^  picRestart;
	private: System::Windows::Forms::PictureBox^  picKoniec;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gra::typeid));
			this->pilka = (gcnew System::Windows::Forms::PictureBox());
			this->zegar = (gcnew System::Windows::Forms::Timer(this->components));
			this->deska = (gcnew System::Windows::Forms::PictureBox());
			this->lblPunkty = (gcnew System::Windows::Forms::Label());
			this->lblZycia = (gcnew System::Windows::Forms::Label());
			this->picPrzegrana = (gcnew System::Windows::Forms::PictureBox());
			this->picRestart = (gcnew System::Windows::Forms::PictureBox());
			this->picKoniec = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRestart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.Image")));
			this->pilka->Location = System::Drawing::Point(336, 450);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(25, 25);
			this->pilka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pilka->TabIndex = 1;
			this->pilka->TabStop = false;
			this->pilka->Click += gcnew System::EventHandler(this, &gra::pilka_Click);
			// 
			// zegar
			// 
			this->zegar->Enabled = true;
			this->zegar->Interval = 1;
			this->zegar->Tick += gcnew System::EventHandler(this, &gra::zegar_Tick);
			// 
			// deska
			// 
			this->deska->BackColor = System::Drawing::Color::Transparent;
			this->deska->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deska.Image")));
			this->deska->Location = System::Drawing::Point(280, 472);
			this->deska->Margin = System::Windows::Forms::Padding(0);
			this->deska->Name = L"deska";
			this->deska->Size = System::Drawing::Size(133, 28);
			this->deska->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->deska->TabIndex = 2;
			this->deska->TabStop = false;
			this->deska->Click += gcnew System::EventHandler(this, &gra::deska_Click);
			// 
			// lblPunkty
			// 
			this->lblPunkty->BackColor = System::Drawing::Color::Transparent;
			this->lblPunkty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPunkty->ForeColor = System::Drawing::Color::White;
			this->lblPunkty->Location = System::Drawing::Point(522, 22);
			this->lblPunkty->Margin = System::Windows::Forms::Padding(0);
			this->lblPunkty->Name = L"lblPunkty";
			this->lblPunkty->Padding = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->lblPunkty->Size = System::Drawing::Size(56, 30);
			this->lblPunkty->TabIndex = 3;
			this->lblPunkty->Text = L"000";
			// 
			// lblZycia
			// 
			this->lblZycia->BackColor = System::Drawing::Color::Transparent;
			this->lblZycia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblZycia->ForeColor = System::Drawing::Color::White;
			this->lblZycia->Location = System::Drawing::Point(659, 25);
			this->lblZycia->Name = L"lblZycia";
			this->lblZycia->Size = System::Drawing::Size(30, 29);
			this->lblZycia->TabIndex = 4;
			this->lblZycia->Text = L"3";
			// 
			// picPrzegrana
			// 
			this->picPrzegrana->BackColor = System::Drawing::Color::Transparent;
			this->picPrzegrana->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPrzegrana.Image")));
			this->picPrzegrana->Location = System::Drawing::Point(450, 300);
			this->picPrzegrana->Name = L"picPrzegrana";
			this->picPrzegrana->Size = System::Drawing::Size(251, 200);
			this->picPrzegrana->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picPrzegrana->TabIndex = 5;
			this->picPrzegrana->TabStop = false;
			this->picPrzegrana->Visible = false;
			// 
			// picRestart
			// 
			this->picRestart->BackColor = System::Drawing::Color::Transparent;
			this->picRestart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picRestart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picRestart.Image")));
			this->picRestart->Location = System::Drawing::Point(231, 327);
			this->picRestart->Name = L"picRestart";
			this->picRestart->Size = System::Drawing::Size(199, 86);
			this->picRestart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picRestart->TabIndex = 6;
			this->picRestart->TabStop = false;
			this->picRestart->Visible = false;
			this->picRestart->Click += gcnew System::EventHandler(this, &gra::picRestart_Click);
			// 
			// picKoniec
			// 
			this->picKoniec->BackColor = System::Drawing::Color::Transparent;
			this->picKoniec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picKoniec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picKoniec.Image")));
			this->picKoniec->Location = System::Drawing::Point(12, 327);
			this->picKoniec->Name = L"picKoniec";
			this->picKoniec->Size = System::Drawing::Size(199, 85);
			this->picKoniec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picKoniec->TabIndex = 7;
			this->picKoniec->TabStop = false;
			this->picKoniec->Visible = false;
			this->picKoniec->Click += gcnew System::EventHandler(this, &gra::picKoniec_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(108, 233);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"c";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(26, 233);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"t";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(190, 233);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"c";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(272, 233);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"c";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(354, 233);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"c";
			// 
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(701, 501);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->picKoniec);
			this->Controls->Add(this->picRestart);
			this->Controls->Add(this->picPrzegrana);
			this->Controls->Add(this->lblZycia);
			this->Controls->Add(this->lblPunkty);
			this->Controls->Add(this->deska);
			this->Controls->Add(this->pilka);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"gra";
			this->Text = L"e";
			this->Load += gcnew System::EventHandler(this, &gra::gra_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &gra::ruszajDeska);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &gra::stopDeska);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRestart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 0, y = 0, punkty = 0,zycia =3,cegly=0;
		char kierunek;
#pragma endregion
		private: Void zagraj(String^ dzwiek)
		{
			try
			{
				System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer;
				graj->SoundLocation = dzwiek;
				graj->Load();
				graj->Play();
			}
			catch (...)
			{

			}
		}


		private: Void zbij_cegle(System::Windows::Forms::Control^ cegla)
		{
			if ((pilka->Top + pilka->Height > cegla->Top) &&
				(pilka->Top < cegla->Top + cegla->Height) &&
				(pilka->Left + pilka->Width > cegla->Left) &&
				(pilka->Left < cegla->Left + cegla->Width) &&
				(cegla->Visible == true))
			{
				y = -y;

				if (cegla->Tag != "t"){
					cegla->Visible = false;
					punkty += 10;
					//zliczanie cegiel
					cegly += 1;
				}
				else
				{
					PictureBox^ ceglaRozbita = (PictureBox^)cegla;
					ceglaRozbita->Image = imageList1->Images[2];
					ceglaRozbita->Tag = "ct";
					punkty += 20;
				}

			}

			lblPunkty->Text = "" + punkty;
			if (cegly == 5){
				zegar->Enabled = false;
				picKoniec->Visible = true;
				picRestart->Visible = true;
				cegly = 0;
				gra::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
			}
		}

	private: System::Void zegar_Tick(System::Object^  sender, System::EventArgs^  e) {

		for each(Control^ element in this->Controls)
		{
			if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct")
			{
				zbij_cegle(element);
			}
		}

		// ruch pi³ki
		pilka->Left += x;
		pilka->Top += y;
		// Odbicie od œcianki prawej
		if (pilka->Left >= gra::Width - pilka->Width) x = -x;
		// Odbicie od do³u
		if (pilka->Top >= gra::Height - deska->Height - 65 && pilka->Left >= deska->Left && pilka->Left+pilka->Width <= deska->Left+deska->Width) y = -y;
		//utrata pilki
		else if(pilka->Top >= deska->Top+5){

			zegar->Enabled = false;
			pilka->Visible = false;

			punkty -= 50;
			zycia -= 1;

			lblPunkty->Text = punkty.ToString();

			if (zycia > 0){

				MessageBox::Show("Zagubiona pilka!", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);

				pilka->Top = deska->Top - pilka->Height - 3;
				pilka->Left = deska->Left + deska->Width / 2;
				x = 0;
				y = 0;

				zegar->Enabled = true;
				pilka->Visible = true;

				lblZycia->Text = zycia.ToString();
			}
			else{
				lblZycia->Text = ":(";
				picPrzegrana->Visible = true;
				picKoniec->Visible = true;
				picRestart->Visible = true;
			}

		}
		
		// Odbicie od gory
		if (pilka->Top <= 75) y = -y;
		//odbicie od lewej
		if (pilka->Left <= 0) x = -x;

		//ruch deski w prawo
		if (kierunek == 'R') {
			if (deska->Left >= gra::Width - deska->Width-15)	deska->Left += 0;
		else{
				deska->Left += 20;
				if(x==0)	pilka->Left += 20;
			}

		}
		if (kierunek == 'L') {
			if (deska->Left <= 0)	deska->Left += 0;
		else{
				deska->Left -= 20;
				if(x==0)	pilka->Left -= 20;
			}
		}
	}
	private: System::Void pilka_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gra_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ruszajDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right) kierunek= 'R';
		if (e->KeyCode == Keys::Space && x==0) 
		{
			x = -5;
			y = -5;
		}


	}
private: System::Void stopDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';
	
}

private: System::Void deska_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void picKoniec_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();

}
private: System::Void picRestart_Click(System::Object^  sender, System::EventArgs^  e) {
	zycia = 3;
	punkty = 0;
	lblZycia->Text = "3";
	picPrzegrana->Visible = false;
	picKoniec->Visible = false;
	picRestart->Visible = false;
	pilka->Top = deska->Top - pilka->Height - 3;
	pilka->Left = deska->Left + deska->Width / 2;
	x = 0;
	y = 0;
	lblPunkty->Text = "000";
	zegar->Enabled = true;
	pilka->Visible = true;
	gra::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");

	for each(Control^ element in this->Controls)
	{
		if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct")
			element->Visible = true;
		if (element->Tag == "ct")
		{
			element->Tag = "t";
			PictureBox^ obraz = (PictureBox^)element;
			obraz->Image = imageList1->Images[1];
		}
	}
}
};
}
