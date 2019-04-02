#include "autor.h"
#include "gra.h"
#include "Powitanie.h" //dodajemy biblioteki

using namespace Strefanoid;

void ZamknijOkno(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0){ //czy ilosc ostartych form app wynosi zero
		Application::Exit();
	}
	else{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
			//jak nie to zamykamy pierwsz¹ forme 
	}
}

[STAThreadAttribute]

int main(array<String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Strefanoid::Powitanie forma; //Co ma za³¹czyæ
	Powitanie^ pierwsza = gcnew Powitanie();
	pierwsza->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	pierwsza->Show();
	Application::Run();
	return 0;
}