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
    void __fastcall addClientBtnClick(TObject *Sender);
    void __fastcall deleteBtnClick(TObject *Sender);
    void __fastcall FilterBtnClick(TObject *Sender);
    void __fastcall CancelFilterBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
