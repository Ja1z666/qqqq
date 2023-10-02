//---------------------------------------------------------------------------
#include <vector>
#include <vcl.h>
#pragma hdrstop

#include "FormUnit.h"
#include "PhonePCH1.h"
#include "PhoneUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Phone *phone;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm( Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
	UnicodeString choice = TForm1::ComboBox1->Text;
	Brand brand = Brand::None;

	if (choice == "Apple") {
		brand = Brand::Apple;
	} else if (choice == "Xia") {

		   }

	wchar_t* txt = TForm1::Edit1->Text.c_str();
	wstring ws(txt);
	string model(ws.begin(), ws.end());

	int year = TForm1::Edit2->Text.ToInt();

	int price = TForm1::Edit3->Text.ToInt();

	phone = new Phone(Brand::Apple, model, year, price);

	ShowMessage(phone -> getBrand());
}
//---------------------------------------------------------------------------


