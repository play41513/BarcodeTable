//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <pngimage.hpp>
#include <Menus.hpp>



#include <stdio.h>
#include <string>
#include <inifiles.hpp>
#include "ConstantString.h"
#include "StringProc.h"
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *plMainTable;
	TPanel *Panel1;
	TStringGrid *StringGrid;
	TPanel *plMsg;
	TPanel *plBarcodeInput;
	TPanel *plBottomBar;
	TPanel *plTimeUI;
	TPanel *Panel2;
	TEdit *edtBarcodeValue;
	TPanel *Panel3;
	TTimer *TimerTime;
	TPanel *plTime;
	TPanel *plDate;
	TPanel *plTotalCountTitle;
	TImage *ImgLogo;
	TPanel *plTotalCount;
	TPanel *Panel4;
	TPanel *plBoxBarcode1;
	TPanel *Panel6;
	TPanel *plBoxBarcode2;
	TPopupMenu *PopupMenu;
	TMenuItem *popUndo;
	TMenuItem *popPackaging;
	void __fastcall edtBarcodeValueKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall StringGridDrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall TimerTimeTimer(TObject *Sender);
	void __fastcall popUndoClick(TObject *Sender);
	void __fastcall popPackagingClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall edtBarcodeValueMouseEnter(TObject *Sender);

private:	// User declarations
	StringProc *StrProc;
    AnsiString strLogPath;

	DWORD CheckBacodeValueToGrid(AnsiString BarcodValue);
	bool writeLOG(AnsiString Time,AnsiString Msg);
	void SetMsgBoxUI(AnsiString Msg,TColor color,DWORD dwWidth);
	void ReadINIFile();
	void AddLocalFilePath();
	typedef struct _TABLE_DESCRIPOR
	{
		AnsiString strINIBarcodeValue;
		AnsiString strINIBoxBarcode1;
		AnsiString strINIBoxBarcode2;

		DWORD	dwLayerChangeCount;
		DWORD	dwBoxChangeCount;
		AnsiString strNowBarcodeValue;
		DWORD dwNowGroupCount;
		DWORD dwNowTotalCount;
	}TABLE_DESCRIPOR;
	TABLE_DESCRIPOR TableDesc;

public:		// User declarations
	__fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
