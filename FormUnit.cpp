//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "FormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int row = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm( Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int i = StringGrid1->RowCount;

	phones[i - 1] = new Phone;

	string brand = AnsiString(ComboBox1->Text).c_str();
	string model = AnsiString(Edit1->Text).c_str();
	int year = Edit2->Text.ToInt();
	int price = Edit3->Text.ToInt();

	phones[i - 1]->setBrand(brand);
	phones[i - 1]->setModel(model);
	phones[i - 1]->setYear(year);
	phones[i - 1]->setPrice(price);

	StringGrid1->RowCount++;
	StringGrid1->Cells[0][i] = IntToStr(i) + ".";
	StringGrid1->Cells[1][i] = phones[i - 1]->getBrand().c_str();
	StringGrid1->Cells[2][i] = phones[i - 1]->getModel().c_str();
	StringGrid1->Cells[3][i] = phones[i - 1]->getYear();
	StringGrid1->Cells[4][i] = phones[i - 1]->getPrice();

	ComboBox1->Text = "";
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






void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	row = ARow;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int year = Edit4->Text.ToInt();

	if (year != 0) {
		ShowMessage(phones[row - 1]->getPriceAfter(year));
	} else {
		ShowMessage(phones[row - 1]->getPriceAfter());
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	ShowMessage(phones[0]->getCount());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	for (int i = 0; i < phones[0]->getCount(); i++) {
    	delete phones[i];
	}
}
//---------------------------------------------------------------------------




