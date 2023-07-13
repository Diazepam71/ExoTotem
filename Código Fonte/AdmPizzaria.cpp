//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmPizzaria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
	SQLTable2->MoveBy(1);
	SQLTable3->MoveBy(2);
	SQLTable4->MoveBy(3);
	SQLTable5->MoveBy(4);
	SQLTable6->MoveBy(5);
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Alterar(TObject *Sender)
{
	String temp,p,d;

	if (RadioButton2->Checked) d = "Pre�oP";
	else if (RadioButton3->Checked) d = "Pre�oM";
	else if (RadioButton4->Checked) d = "Pre�oG";

	p = Edit1->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Mu�arela'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit2->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Calabresa'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit3->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Quatro Queijos'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit4->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Margherita'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit5->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Corn Bacon'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit6->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Da Casa'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

    ShowMessage("Altera��es feitas com sucesso!");
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
	delete this;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Pequena(TObject *Sender)
{
	DBText2->DataField = "Pre�oP";
	DBText4->DataField = "Pre�oP";
	DBText6->DataField = "Pre�oP";
	DBText8->DataField = "Pre�oP";
	DBText10->DataField = "Pre�oP";
	DBText12->DataField = "Pre�oP";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Media(TObject *Sender)
{
	DBText2->DataField = "Pre�oM";
	DBText4->DataField = "Pre�oM";
	DBText6->DataField = "Pre�oM";
	DBText8->DataField = "Pre�oM";
	DBText10->DataField = "Pre�oM";
	DBText12->DataField = "Pre�oM";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Grande(TObject *Sender)
{
	DBText2->DataField = "Pre�oG";
	DBText4->DataField = "Pre�oG";
	DBText6->DataField = "Pre�oG";
	DBText8->DataField = "Pre�oG";
	DBText10->DataField = "Pre�oG";
	DBText12->DataField = "Pre�oG";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
