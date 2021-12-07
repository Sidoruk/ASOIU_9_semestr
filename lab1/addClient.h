//---------------------------------------------------------------------------

#ifndef addClientH
#define addClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TaddClientForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *SurnameEdit;
	TEdit *NameEdit;
	TEdit *StatusEdit;
	TEdit *PhoneEdit;
    TButton *completeAddBtn;
    TEdit *idEdit;
    TButton *cancelBtn;
    void __fastcall completeAddBtnClick(TObject *Sender);
    void __fastcall cancelBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TaddClientForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TaddClientForm *addClientForm;
//---------------------------------------------------------------------------
#endif
