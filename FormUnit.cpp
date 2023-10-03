//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "FormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm( Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
//	UnicodeString choice = TForm1::ComboBox1->Text;
//	Brand brand = Brand::None;
//
//	if (choice == "Apple") {
//		brand = Brand::Apple;
//	} else if (choice == "Samsung") {
//		brand = Brand::Samsung;
//	} else if (choice == "Xiaomi") {
//		brand = Brand::Xiaomi;
//	} else {
//		brand = Brand::None;
//	}
//
//	wchar_t* txt = TForm1::Edit1->Text.c_str();
//	wstring ws(txt);
//	string model(ws.begin(), ws.end());
//
//	int year = TForm1::Edit2->Text.ToInt();
//
//	int price = TForm1::Edit3->Text.ToInt();
//
//	phone = new Phone(Brand::Apple, model, year, price);

	int i = StringGrid1->RowCount;

	phones[i - 1] = new Phone;

	string choice = AnsiString(ComboBox1->Text).c_str();
	Brand brand = Brand::None;

	switch(choice) {
		case "Apple":
			brand = Brand::Apple;
			break;
	}

	string model = AnsiString(Edit1->Text).c_str();
	int year = Edit2->Text.ToInt();
	int price = Edit3->Text.ToInt();

	phones[i - 1]->setModel(model);
	phones[i - 1]->setYear(year);
	phones[i - 1]->setPrice(price);

	StringGrid1->RowCount++;
	StringGrid1->Cells[0][i] = IntToStr(i) + ".";
	StringGrid1->Cells[2][i] = phones[i - 1]->getModel().c_str();
	StringGrid1->Cells[3][i] = phones[i - 1]->getYear();
	StringGrid1->Cells[4][i] = phones[i - 1]->getPrice();

	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->RowCount = 0;
	StringGrid1->Cells[0][0] = "Nr.p.k.";
	StringGrid1->Cells[1][0] = "Brand";
	StringGrid1->Cells[2][0] = "Model";
	StringGrid1->Cells[3][0] = "Year";
	StringGrid1->Cells[4][0] = "Price";
}
//---------------------------------------------------------------------------

