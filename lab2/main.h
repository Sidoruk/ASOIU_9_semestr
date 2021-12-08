//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
    TADOTable *TClient;
    TDBGrid *ClientGrid;
    TDataSource *DClient;
    TButton *addClientBtn;
    TButton *deleteBtn;
    TEdit *Edit1;
    TEdit *FilterEdit;
    TButton *FilterBtn;
    TButton *CancelFilterBtn;
    TLabel *Label1;
    TADOTable *TDish;
    TDataSource *DDish;
    TDBGrid *DishGrid;
    TButton *addDishBtn;
    TButton *deleteDishBtn;
    TADOTable *TZakaz;
    TDataSource *DZakaz;
    TDBGrid *DBGrid1;
    TIntegerField *TZakazidDish;
    TIntegerField *TZakazidClient;
    TIntegerField *TZakazcount;
    TDateField *TZakazdate;
    TStringField *TZakazSurnameClient;
    TStringField *TZakazNameClient;
    TStringField *TZakazDish;
    TButton *addZakazBtn;
    TDateTimePicker *minDate;
    TDateTimePicker *maxDate;
    TButton *searchByDate;
    TButton *clearFilter;
    TLabel *Label2;
    void __fastcall addClientBtnClick(TObject *Sender);
    void __fastcall deleteBtnClick(TObject *Sender);
    void __fastcall FilterBtnClick(TObject *Sender);
    void __fastcall CancelFilterBtnClick(TObject *Sender);
    void __fastcall deleteDishBtnClick(TObject *Sender);
    void __fastcall addDishBtnClick(TObject *Sender);
    void __fastcall addZakazBtnClick(TObject *Sender);
    void __fastcall searchByDateClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
