//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TForm2 *Form2;
TForm3 *Form3;
String mass[3];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
mass[0]=Edit1->Text;
mass[1]=Edit2->Text;
mass[2]=Edit2->Text;
TForm3 * Form3 = new TForm3(0);
try{
Form3->ShowModal();
}
__finally
{
	delete Form3;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
mass[0]=Edit1->Text;
mass[1]=Edit2->Text;
mass[2]=Edit3->Text;
TForm2 * Form2 = new TForm2(0);
try{
Form3->ShowModal();
}
__finally
{
	delete Form3;
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N1Click(TObject *Sender)
{
ComponentNew1->WhoAmI();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

