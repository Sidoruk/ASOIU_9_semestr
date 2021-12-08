//---------------------------------------------------------------------------

#ifndef addZakazH
#define addZakazH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TaddZakazForm : public TForm
{
__published:	// IDE-managed Components
    TEdit *idClientEdit;
    TEdit *idDishEdit;
    TEdit *countEdit;
    TButton *cancelBtn;
    TButton *addZakazBtn;
    TDateTimePicker *dateEdit;
    void __fastcall cancelBtnClick(TObject *Sender);
    void __fastcall addZakazBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TaddZakazForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TaddZakazForm *addZakazForm;
//---------------------------------------------------------------------------
#endif
