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
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;



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
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
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
			this->deska->Location = System::Drawing::Point(282, 472);
			this->deska->Margin = System::Windows::Forms::Padding(0);
			this->deska->Name = L"deska";
			this->deska->Size = System::Drawing::Size(133, 28);
			this->deska->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->deska->TabIndex = 2;
			this->deska->TabStop = false;
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
			this->pictureBox1->Location = System::Drawing::Point(26, 120);
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
			this->pictureBox2->Location = System::Drawing::Point(26, 78);
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
			this->pictureBox3->Location = System::Drawing::Point(26, 162);
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
			this->pictureBox4->Location = System::Drawing::Point(26, 204);
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
			this->pictureBox5->Location = System::Drawing::Point(26, 246);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"c";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(108, 246);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"c";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(108, 204);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 16;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"c";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(108, 162);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"c";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(108, 78);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"t";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(108, 120);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 13;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"c";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(190, 246);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(76, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 22;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"c";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(190, 204);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 36);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 21;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"c";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(190, 162);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(76, 36);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 20;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"c";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(190, 78);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(76, 36);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 19;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"t";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(190, 120);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(76, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 18;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"c";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(272, 246);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 27;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"c";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(272, 204);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 36);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 26;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"c";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(272, 162);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(76, 36);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 25;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"c";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(272, 78);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(76, 36);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 24;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"t";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(272, 120);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(76, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 23;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"c";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(354, 246);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 36);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 32;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"c";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(354, 204);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 36);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 31;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"c";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(354, 162);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 30;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"c";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(354, 78);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 29;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"t";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(354, 120);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 36);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 28;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"c";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(436, 246);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 36);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 37;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"c";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(436, 204);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(76, 36);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 36;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"c";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(436, 162);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(76, 36);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 35;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"c";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(436, 78);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(76, 36);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 34;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"t";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(436, 120);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(76, 36);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 33;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"c";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(518, 246);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(76, 36);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 42;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"c";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(518, 204);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(76, 36);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 41;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"c";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(518, 162);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(76, 36);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 40;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"c";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(518, 78);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(76, 36);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 39;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"t";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(518, 120);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(76, 36);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 38;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"c";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(600, 246);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(76, 36);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 47;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Tag = L"c";
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(600, 204);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(76, 36);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 46;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Tag = L"c";
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(600, 162);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(76, 36);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 45;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Tag = L"c";
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(600, 78);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(76, 36);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 44;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Tag = L"t";
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(600, 120);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(76, 36);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 43;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Tag = L"c";
			// 
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(701, 501);
			this->Controls->Add(this->deska);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
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
			this->Controls->Add(this->pilka);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"gra";
			this->Text = L"Arkanoid";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
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
				System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
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
					//dzwiek
					zagraj("../dzwieki/zbicie.wav");
				}
				else
				{
					if (x> 0)
					{
						x += 1;
					}
					else
					{
						x -= 1;
					}
					if (y> 0)
					{
						y += 1;
					}
					else
					{
						y -= 1;
					}
					PictureBox^ ceglaRozbita = (PictureBox^)cegla;
					ceglaRozbita->Image = imageList1->Images[2];
					pilka->Image = Image::FromFile("../grafiki/pilka_power.png");
					ceglaRozbita->Tag = "ct";
					punkty += 20;
					//dzwiek
					zagraj("../dzwieki/kruszenie.wav");
				}

			}

			lblPunkty->Text = "" + punkty;
			if (cegly == 40){
				//dzwiek
				zagraj("../dzwieki/wygrana.wav");
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

		// ruch pi�ki
		pilka->Left += x;
		pilka->Top += y;
		// Odbicie od �cianki prawej
		if (pilka->Left >= gra::Width - pilka->Width) x = -x;
		// Odbicie od do�u
		if ((pilka->Left + pilka->Width > deska->Left) &&  (pilka->Left < deska->Left + deska->Width) && (pilka->Top+pilka->Height > gra::Height - deska->Height - 40))
		{
			zagraj("../dzwieki/paletka.wav");
			y = -y;
		}
		//utrata pilki
		else if(pilka->Top + pilka->Height > deska->Top+5){

			zegar->Enabled = false;
			pilka->Visible = false;

			punkty -= 50;
			zycia -= 1;
			lblPunkty->Text = punkty.ToString();

			if (zycia > 0){

				MessageBox::Show("Zagubiona pilka!", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				pilka->Image = Image::FromFile("../grafiki/pilka_power.png");
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
				zagraj("../dzwieki/smiech.wav");
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

	private: System::Void ruszajDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right) kierunek= 'R';
		if (e->KeyCode == Keys::Space && x==0) 
		{
			x = -10;
			y = -10;
		}


	}
private: System::Void stopDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';
	
}


private: System::Void picKoniec_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();

}
private: System::Void picRestart_Click(System::Object^  sender, System::EventArgs^  e) {
	pilka->Image = Image::FromFile("../grafiki/pilka.png");
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
