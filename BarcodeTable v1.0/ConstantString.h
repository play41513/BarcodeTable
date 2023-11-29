﻿#ifndef ConstantStringH
#define ConstantStringH
//---------------------------------------------------------------------------
//標題
const TCHAR APP_TITLE[] = _T("BarcodeTable v1.0 (ActionStar)");
//
#define KEY_ENTER			13
#define KEYIN_PASS_1		1
#define KEYIN_PASS_2		2
#define KEYIN_REPEAT_1		3
#define KEYIN_REPEAT_2		4
#define KEYIN_OVERRANGE		5

#define PACKING_STATUS_COMPLETE		1
#define PACKING_STATUS_STOCKOUT		2
#define PACKING_STATUS_UNFINISH		3
//MSG
AnsiString MSG_BOX_1_SCAN_ERROR = "--外箱1 掃描錯誤 Scan Error(BoxBarcode 1)--";
AnsiString MSG_BOX_2_SCAN_ERROR = "--外箱2 掃描錯誤 Scan Error(BoxBarcode 2)--";
AnsiString MSG_PRODUCT_SCAN_ERROR = "--產品條碼掃描錯誤 Scan Error(ProductBarcode)--";
AnsiString MSG_LAYER_CHANGE = "--換層 Layer Change--";
AnsiString MSG_BOX_CHANGE = "--換箱 Box Change--";

AnsiString MSGBOX_BOX_CHANGE = "回復上一步驟(Undo)";
AnsiString MSGBOX_BOX_CHANGE = "完成包箱(Complete Packaging)";
//ERROR MSG
AnsiString ERROR_QTY_WRONG		= "(!)Q'TY值錯誤";
AnsiString ERROR_REPEAT_SCAN 	= "(!)重複掃描";
AnsiString ERROR_OVER_RANGE  	= "(!)超出範圍";
AnsiString ERROR_FORMAT_WRONG  	= "(!)格式錯誤";
AnsiString ERROR_C_NO_WRONG  	= "(!)C/NO箱數不符合";
AnsiString ERROR_OVER_RANGE_OR_FORMAT_WRONG  	= "(!)掃描值 格式/範圍 錯誤";


#define MB_WARNING(handle, msg) MessageBox(handle, msg, MB_CAPTIONWARNING, MB_ICONWARNING)
//---------------------------------------------------------------------------
#endif
