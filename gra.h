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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->BeginInit();
			this->SuspendLayout();
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.Image")));
			this->pilka->Location = System::Drawing::Point(337, 447);
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
			this->zegar->Interval = 50;
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
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(701, 501);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 0, y = 0, punkty = 0,zycia =3;
		char kierunek;
#pragma endregion
	private: System::Void zegar_Tick(System::Object^  sender, System::EventArgs^  e) {
		// ruch pi³ki
		pilka->Left += x;
		pilka->Top += y;
		// Odbicie od œcianki prawej
		if (pilka->Left >= gra::Width - pilka->Width) x = -x;
		// Odbicie od do³u
		if (pilka->Top >= gra::Height - deska->Height - 65 && pilka->Left >= deska->Left && pilka->Left+pilka->Width <= deska->Left+deska->Width) y = -y;
		else if(pilka->Top >= deska->Top+5){
			zegar->Enabled = false;
			pilka->Visible = false;
			MessageBox::Show("Zagubiona pilka!","Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			
			pilka->Top = deska->Top - pilka->Height-3;
			pilka->Left = deska->Left + deska->Width / 2;
			x = 0;
			y=0;
			
			zegar->Enabled = true;
			pilka->Visible = true;
			punkty -= 50;
			zycia -= 1;
			lblPunkty->Text = punkty.ToString();
			lblZycia->Text = zycia.ToString();

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
			x = -6;
			y = -6;
		}


	}
private: System::Void stopDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';
	
}

private: System::Void deska_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
