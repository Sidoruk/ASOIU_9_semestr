//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addClient.h"
#include "main.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TaddClientForm *addClientForm;
//---------------------------------------------------------------------------
__fastcall TaddClientForm::TaddClientForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TaddClientForm::completeAddBtnClick(TObject *Sender)
{
     if(!idEdit->Text.IsEmpty() && !SurnameEdit->Text.IsEmpty() && !NameEdit->Text.IsEmpty() && !StatusEdit->Text.IsEmpty() && !PhoneEdit->Text.IsEmpty()){
         MainForm->TClient->Insert();
         MainForm->TClient->FieldByName("idClient")->AsInteger=StrToInt(idEdit->Text);
         MainForm->TClient->FieldByName("SurnameClient")->AsString=SurnameEdit->Text;
         MainForm->TClient->FieldByName("NameClient")->AsString=NameEdit->Text;
         MainForm->TClient->FieldByName("StatusClient")->AsString=StatusEdit->Text;
         MainForm->TClient->FieldByName("PhoneClient")->AsString=PhoneEdit->Text;
         MainForm->TClient->Post();

         addClientForm->idEdit->Text="";
         addClientForm->SurnameEdit->Text="";
         addClientForm->NameEdit->Text="";
         addClientForm->StatusEdit->Text="";
         addClientForm->PhoneEdit->Text="";

         MainForm->Enabled=true;
         addClientForm->Hide();
     }else{
         ShowMessage(String("Данные введены некорректно! Есть пустые поля!"));
     }
     
}
//---------------------------------------------------------------------------

void __fastcall TaddClientForm::cancelBtnClick(TObject *Sender)
{
     MainForm->Enabled=true;
     addClientForm->Hide();
}
//---------------------------------------------------------------------------

