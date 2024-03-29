//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include "gui/PIWOEngine.h"
#include <Menus.hpp>
#include <ImgList.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <ToolWin.hpp>
#include <Registry.hpp>
#include <cgauges.h>
#include <AppEvnts.hpp>

#define CAPTION "PIWO - Projekt Informatyczny Wilqu & Others 1.0"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Plik1;
	TMenuItem *Edycja1;
	TMenuItem *Nowy1;
	TMenuItem *Otwrz1;
	TMenuItem *Zapisz1;
	TMenuItem *Zapiszjako1;
	TMenuItem *Exportujjakoobraz1;
	TMenuItem *Zakocz1;
	TMenuItem *Zaznaczwszystkiebloki1;
	TMenuItem *Odznaczwszystkiebloki1;
	TMenuItem *Odwrzaznaczenieblokw1;
	TMenuItem *Duplikujbloki1;
	TMenuItem *Usubloki1;
	TMenuItem *N1;
	TMenuItem *Zakocz2;
	TMenuItem *Usuzaznaczonebloki1;
	TMenuItem *Odznaczzaznaczonepoaczenie1;
	TMenuItem *Usuwszystkiepoczenia1;
	TMenuItem *Usuzaznaczonepoczenie1;
	TMenuItem *Pomoc1;
	TMenuItem *Instrukcjauytkoniwka1;
	TMenuItem *Dokumentacjatechniczna1;
	TMenuItem *Oautorach1;
	TMenuItem *Oprogramie1;
	TImageList *ImageList1;
	TStatusBar *StatusBar1;
	TMenuItem *Uruchom2;
	TMenuItem *Uruchomwszystko1;
	TMenuItem *Uruchom3;
	TMenuItem *Zresetujwszystkiepoczenia1;
	TMenuItem *Zresetujzaznaczonepoczenie1;
	TMenuItem *Widok1;
	TPanel *Panel1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TListView *ListView1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TImageList *ImageList2;
	TPopupMenu *PopupMenu1;
	TMenuItem *Wyczylogi1;
	TMenuItem *Zapiszdopliku1;
	TListView *ListView2;
	TListView *ListView3;
	TSaveDialog *SaveDialog1;
	TPopupMenu *PopupMenu2;
	TMenuItem *MenuItem1;
	TMenuItem *MenuItem2;
	TPopupMenu *PopupMenu3;
	TMenuItem *MenuItem3;
	TMenuItem *MenuItem4;
	TToolBar *ToolBar1;
	TPanel *Panel2;
	TCGauge *CGauge1;
	TLabel *Label1;
	TSpeedButton *SpeedButton1;
	TTimer *Timer1;
	TMenuItem *Anuluj1;
	TSaveDialog *SaveDialog2;
	TOpenDialog *OpenDialog1;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	TToolButton *ToolButton10;
	TToolButton *ToolButton11;
	TToolButton *ToolButton12;
	TToolButton *ToolButton13;
	TToolButton *ToolButton14;
	TToolButton *ToolButton15;
	TToolButton *ToolButton16;
	TToolButton *ToolButton17;
	TToolButton *ToolButton18;
	TToolButton *ToolButton19;
	TToolButton *ToolButton20;
	TToolButton *ToolButton21;
	TToolButton *ToolButton22;
	TToolButton *ToolButton23;
	TToolButton *ToolButton24;
	TToolButton *ToolButton25;
	TToolButton *ToolButton26;
	TImageList *ImageList3;
	TToolButton *ToolButton27;
	TMenuItem *Sprawdprojekt1;
	TBevel *Bevel1;
	TMenuItem *Zamknijwszystkieokna1;
	TMenuItem *Pokawszystkieokna1;
	TMenuItem *N2;
	TApplicationEvents *ApplicationEvents1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Zakocz2Click(TObject *Sender);
	void __fastcall Zaznaczwszystkiebloki1Click(TObject *Sender);
	void __fastcall Odznaczwszystkiebloki1Click(TObject *Sender);
	void __fastcall Odwrzaznaczenieblokw1Click(TObject *Sender);
	void __fastcall Usubloki1Click(TObject *Sender);
	void __fastcall Usuzaznaczonebloki1Click(TObject *Sender);
	void __fastcall Odznaczzaznaczonepoaczenie1Click(TObject *Sender);
	void __fastcall Usuwszystkiepoczenia1Click(TObject *Sender);
	void __fastcall Usuzaznaczonepoczenie1Click(TObject *Sender);
	void __fastcall Zresetujwszystkiepoczenia1Click(TObject *Sender);
	void __fastcall Zresetujzaznaczonepoczenie1Click(TObject *Sender);
	void __fastcall Uruchomwszystko1Click(TObject *Sender);
	void __fastcall Uruchom3Click(TObject *Sender);
	void __fastcall PageControl1Resize(TObject *Sender);
	void __fastcall Wyczylogi1Click(TObject *Sender);
	void __fastcall MenuItem1Click(TObject *Sender);
	void __fastcall MenuItem3Click(TObject *Sender);
	void __fastcall Zapiszdopliku1Zapiszjako1ClickClick(TObject *Sender);
	void __fastcall MenuItem2Click(TObject *Sender);
	void __fastcall MenuItem4Click(TObject *Sender);
	void __fastcall PageControl1Change(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Nowy1Click(TObject *Sender);
	void __fastcall Zakocz1Click(TObject *Sender);
	void __fastcall Otwrz1Click(TObject *Sender);
	void __fastcall Duplikujbloki1Click(TObject *Sender);
	void __fastcall Exportujjakoobraz1Click(TObject *Sender);
	void __fastcall Zapiszjako1Click(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall Sprawdprojekt1Click(TObject *Sender);
	void __fastcall Anuluj1Click(TObject *Sender);
	void __fastcall ToolButton11Click(TObject *Sender);
	void __fastcall ToolButton18Click(TObject *Sender);
	void __fastcall ToolButton19Click(TObject *Sender);
	void __fastcall ToolButton20Click(TObject *Sender);
	void __fastcall ToolButton21Click(TObject *Sender);
	void __fastcall ToolButton22Click(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Widok1Click(TObject *Sender);
	void __fastcall Zamknijwszystkieokna1Click(TObject *Sender);
	void __fastcall Pokawszystkieokna1Click(TObject *Sender);
	void __fastcall Oprogramie1Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ApplicationEvents1Message(tagMSG &Msg, bool &Handled);
	void __fastcall Instrukcjauytkoniwka1Click(TObject *Sender);
	void __fastcall Dokumentacjatechniczna1Click(TObject *Sender);
	void __fastcall Oautorach1Click(TObject *Sender);

private:
	PIWOEngine *piwo;
	AnsiString fileName;
	bool isBlocked;
	Graphics::TBitmap *defaultBlockImage;
	vector<FunctionDLL*> top5Added;
	vector<TMenuItem*> historyItems;
	POINT mousePos;
	void  OnLoadProgress(void* Sender, int position, int max, AnsiString info, int id);
	void  OnFunctionAddClick(void* Sender);

	void OnLogInformation(TObject* Sender, const AnsiString message);
	void OnLogDebug(TObject* Sender, const AnsiString message);
	void OnLogWarrning(TObject* Sender, const AnsiString message);
	void OnLogSuccess(TObject* Sender, const AnsiString message);
	void OnLogError(TObject* Sender, const AnsiString message);

	void OnLogRunInformation(TObject* Sender, const AnsiString message);
	void OnLogRunDebug(TObject* Sender, const AnsiString message);
	void OnLogRunWarrning(TObject* Sender, const AnsiString message);
	void OnLogRunSuccess(TObject* Sender, const AnsiString message);
	void OnLogRunError(TObject* Sender, const AnsiString message);

	void OnRunStart(TObject* Sender);
	void OnRunEnd(TObject* Sender);
	void OnRunProgress(TObject* Sender,const AnsiString message, const double precent);

	void OnChanged(TObject* Sender);

	void OnBlockSelected(TObject* Sender);
	void OnConnectionSelected(TObject* Sender);
	void OnNothingSelected(TObject* Sender);
	void __fastcall HistoryMenuClick(TObject *Sender);

	void blockMenu(bool blocked);
	void newProject();
	bool closeProject();
	void openProject();
public:
	PluginContener plugins;
	void addExt(const AnsiString &ExtMyFile);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
