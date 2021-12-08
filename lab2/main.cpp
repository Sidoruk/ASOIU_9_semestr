//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "addClient.h"
#include "addDish.h"
#include "addZakaz.h"
#include <iostream>

using namespace System;
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
     TZakaz->Refresh();
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


void __fastcall TMainForm::deleteDishBtnClick(TObject *Sender)
{
     MainForm->TDish->Delete();
     TZakaz->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::addDishBtnClick(TObject *Sender)
{
     addDishForm->idEdit->Text="";
     addDishForm->nameEdit->Text="";
     addDishForm->priceEdit->Text="";
     addDishForm->categEdit->Text="";
     addDishForm->Show();
     MainForm->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::addZakazBtnClick(TObject *Sender)
{
     addZakazForm->idClientEdit->Text="";
     addZakazForm->idDishEdit->Text="";
     addZakazForm->countEdit->Text="";
     addZakazForm->Show();
     MainForm->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::searchByDateClick(TObject *Sender)
{
     TZakaz->Filtered=false;
     TZakaz->RecNo=0;
     //Label2->Caption=DateToStr(minDate->Date);
     //std::cout<<"date="<<TZakaz->Fields->FieldByName('date')->Value<<std::endl;
     //Label2->Caption=TZakaz->Fields->FieldByName('date')->Value;
     //String dateTime=minDate->Date;
     //TZakaz->Filter="WHERE DATE(date) BETWEEN '2000-01-01' AND '2022-01-01 00:00:00'";
     //TZakaz->Filtered=true;
}
//---------------------------------------------------------------------------
