//---------------------------------------------------------------------------

#ifndef addDishH
#define addDishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TaddDishForm : public TForm
{
__published:	// IDE-managed Components
    TEdit *idEdit;
    TEdit *nameEdit;
    TEdit *priceEdit;
    TEdit *categEdit;
    TButton *CancelBtn;
    TButton *acceptBtn;
    void __fastcall CancelBtnClick(TObject *Sender);
    void __fastcall acceptBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TaddDishForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TaddDishForm *addDishForm;
//---------------------------------------------------------------------------
#endif
