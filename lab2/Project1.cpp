//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("main.cpp", MainForm);
USEFORM("addClient.cpp", addClientForm);
USEFORM("addDish.cpp", addDishForm);
USEFORM("addZakaz.cpp", addZakazForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainForm), &MainForm);
         Application->CreateForm(__classid(TaddClientForm), &addClientForm);
         Application->CreateForm(__classid(TaddDishForm), &addDishForm);
         Application->CreateForm(__classid(TaddZakazForm), &addZakazForm);
         Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
