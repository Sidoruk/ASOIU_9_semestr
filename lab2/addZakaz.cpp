//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addZakaz.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TaddZakazForm *addZakazForm;
//---------------------------------------------------------------------------
__fastcall TaddZakazForm::TaddZakazForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TaddZakazForm::cancelBtnClick(TObject *Sender)
{
     MainForm->Enabled=true;
     addZakazForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TaddZakazForm::addZakazBtnClick(TObject *Sender)
{
      if(!idDishEdit->Text.IsEmpty() && !idClientEdit->Text.IsEmpty() && !countEdit->Text.IsEmpty()){
         MainForm->TZakaz->Insert();
         MainForm->TZakaz->FieldByName("idDish")->AsInteger=StrToInt(idDishEdit->Text);
         MainForm->TZakaz->FieldByName("idClient")->AsInteger=StrToInt(idClientEdit->Text);
         MainForm->TZakaz->FieldByName("count")->AsInteger=StrToInt(countEdit->Text);
         MainForm->TZakaz->FieldByName("date")->AsDateTime=dateEdit->Date;

         MainForm->TZakaz->Post();

         addZakazForm->idDishEdit->Text="";
         addZakazForm->idClientEdit->Text="";
         addZakazForm->countEdit->Text="";

         MainForm->Enabled=true;
         addZakazForm->Hide();
     }else{
         ShowMessage(String("Данные введены некорректно! Есть пустые поля!"));
     }
}
//---------------------------------------------------------------------------
