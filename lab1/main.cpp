//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "addClient.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::addClientBtnClick(TObject *Sender)
{
     addClientForm->idEdit->Text="";
     addClientForm->SurnameEdit->Text="";
     addClientForm->NameEdit->Text="";
     addClientForm->StatusEdit->Text="";
     addClientForm->PhoneEdit->Text="";
     addClientForm->Show();
     MainForm->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::deleteBtnClick(TObject *Sender)
{
     MainForm->TClient->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FilterBtnClick(TObject *Sender)
{
     if(!FilterEdit->Text.IsEmpty()){
         TClient->Filtered=false;
         TClient->Filter="NameClient LIKE '"+FilterEdit->Text+"%'";
         TClient->Filtered=true;
     }else{
         TClient->Filtered=false;
         TClient->Filter="";
         TClient->Filtered=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CancelFilterBtnClick(TObject *Sender)
{
     FilterEdit->Text="";
     TClient->Filtered=false;
}
//---------------------------------------------------------------------------

