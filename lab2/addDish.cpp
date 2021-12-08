//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addDish.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TaddDishForm *addDishForm;
//---------------------------------------------------------------------------
__fastcall TaddDishForm::TaddDishForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TaddDishForm::CancelBtnClick(TObject *Sender)
{
     MainForm->Enabled=true;
     addDishForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TaddDishForm::acceptBtnClick(TObject *Sender)
{
     if(!idEdit->Text.IsEmpty() && !nameEdit->Text.IsEmpty() && !priceEdit->Text.IsEmpty() && !categEdit->Text.IsEmpty()){
         MainForm->TDish->Insert();
         MainForm->TDish->FieldByName("idDish")->AsInteger=StrToInt(idEdit->Text);
         MainForm->TDish->FieldByName("nameDish")->AsString=nameEdit->Text;
         MainForm->TDish->FieldByName("priceDish")->AsInteger=StrToInt(priceEdit->Text);
         MainForm->TDish->FieldByName("categDish")->AsString=categEdit->Text;
         MainForm->TDish->Post();

         addDishForm->idEdit->Text="";
         addDishForm->nameEdit->Text="";
         addDishForm->priceEdit->Text="";
         addDishForm->categEdit->Text="";

         MainForm->Enabled=true;
         addDishForm->Hide();
     }else{
         ShowMessage(String("Данные введены некорректно! Есть пустые поля!"));
     }
}
//---------------------------------------------------------------------------
