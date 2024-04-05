// https://wiki.winehq.org/List_Of_Windows_Messages + additions
#include "inipp.h"
#include "utils.h"

LPCWSTR get_message_name(DWORD msg) {
	if (msg == 0) return L"WM_NULL";
	if (msg == 1) return L"WM_CREATE";
	if (msg == 2) return L"WM_DESTROY";
	if (msg == 3) return L"WM_MOVE";
	if (msg == 5) return L"WM_SIZE";
	if (msg == 6) return L"WM_ACTIVATE";
	if (msg == 7) return L"WM_SETFOCUS";
	if (msg == 8) return L"WM_KILLFOCUS";
	if (msg == 10) return L"WM_ENABLE";
	if (msg == 11) return L"WM_SETREDRAW";
	if (msg == 12) return L"WM_SETTEXT";
	if (msg == 13) return L"WM_GETTEXT";
	if (msg == 14) return L"WM_GETTEXTLENGTH";
	if (msg == 15) return L"WM_PAINT";
	if (msg == 16) return L"WM_CLOSE";
	if (msg == 17) return L"WM_QUERYENDSESSION";
	if (msg == 18) return L"WM_QUIT";
	if (msg == 19) return L"WM_QUERYOPEN";
	if (msg == 20) return L"WM_ERASEBKGND";
	if (msg == 21) return L"WM_SYSCOLORCHANGE";
	if (msg == 22) return L"WM_ENDSESSION";
	if (msg == 24) return L"WM_SHOWWINDOW";
	if (msg == 25) return L"WM_CTLCOLOR";
	if (msg == 26) return L"WM_WININICHANGE";
	if (msg == 27) return L"WM_DEVMODECHANGE";
	if (msg == 28) return L"WM_ACTIVATEAPP";
	if (msg == 29) return L"WM_FONTCHANGE";
	if (msg == 30) return L"WM_TIMECHANGE";
	if (msg == 31) return L"WM_CANCELMODE";
	if (msg == 32) return L"WM_SETCURSOR";
	if (msg == 33) return L"WM_MOUSEACTIVATE";
	if (msg == 34) return L"WM_CHILDACTIVATE";
	if (msg == 35) return L"WM_QUEUESYNC";
	if (msg == 36) return L"WM_GETMINMAXINFO";
	if (msg == 38) return L"WM_PAINTICON";
	if (msg == 39) return L"WM_ICONERASEBKGND";
	if (msg == 40) return L"WM_NEXTDLGCTL";
	if (msg == 42) return L"WM_SPOOLERSTATUS";
	if (msg == 43) return L"WM_DRAWITEM";
	if (msg == 44) return L"WM_MEASUREITEM";
	if (msg == 45) return L"WM_DELETEITEM";
	if (msg == 46) return L"WM_VKEYTOITEM";
	if (msg == 47) return L"WM_CHARTOITEM";
	if (msg == 48) return L"WM_SETFONT";
	if (msg == 49) return L"WM_GETFONT";
	if (msg == 50) return L"WM_SETHOTKEY";
	if (msg == 51) return L"WM_GETHOTKEY";
	if (msg == 55) return L"WM_QUERYDRAGICON";
	if (msg == 57) return L"WM_COMPAREITEM";
	if (msg == 61) return L"WM_GETOBJECT";
	if (msg == 65) return L"WM_COMPACTING";
	if (msg == 68) return L"WM_COMMNOTIFY";
	if (msg == 70) return L"WM_WINDOWPOSCHANGING";
	if (msg == 71) return L"WM_WINDOWPOSCHANGED";
	if (msg == 72) return L"WM_POWER";
	if (msg == 73) return L"WM_COPYGLOBALDATA";
	if (msg == 74) return L"WM_COPYDATA";
	if (msg == 75) return L"WM_CANCELJOURNAL";
	if (msg == 78) return L"WM_NOTIFY";
	if (msg == 80) return L"WM_INPUTLANGCHANGEREQUEST";
	if (msg == 81) return L"WM_INPUTLANGCHANGE";
	if (msg == 82) return L"WM_TCARD";
	if (msg == 83) return L"WM_HELP";
	if (msg == 84) return L"WM_USERCHANGED";
	if (msg == 85) return L"WM_NOTIFYFORMAT";
	if (msg == 123) return L"WM_CONTEXTMENU";
	if (msg == 124) return L"WM_STYLECHANGING";
	if (msg == 125) return L"WM_STYLECHANGED";
	if (msg == 126) return L"WM_DISPLAYCHANGE";
	if (msg == 127) return L"WM_GETICON";
	if (msg == 128) return L"WM_SETICON";
	if (msg == 129) return L"WM_NCCREATE";
	if (msg == 130) return L"WM_NCDESTROY";
	if (msg == 131) return L"WM_NCCALCSIZE";
	if (msg == 132) return L"WM_NCHITTEST";
	if (msg == 133) return L"WM_NCPAINT";
	if (msg == 134) return L"WM_NCACTIVATE";
	if (msg == 135) return L"WM_GETDLGCODE";
	if (msg == 136) return L"WM_SYNCPAINT";
	if (msg == 144) return L"WM_UAHDESTROYWINDOW";
	if (msg == 145) return L"WM_UAHDRAWMENU";
	if (msg == 146) return L"WM_UAHDRAWMENUITEM";
	if (msg == 147) return L"WM_UAHINITMENU";
	if (msg == 148) return L"WM_UAHMEASUREMENUITEM";
	if (msg == 149) return L"WM_UAHNCPAINTMENUPOPUP";
	if (msg == 160) return L"WM_NCMOUSEMOVE";
	if (msg == 161) return L"WM_NCLBUTTONDOWN";
	if (msg == 162) return L"WM_NCLBUTTONUP";
	if (msg == 163) return L"WM_NCLBUTTONDBLCLK";
	if (msg == 164) return L"WM_NCRBUTTONDOWN";
	if (msg == 165) return L"WM_NCRBUTTONUP";
	if (msg == 166) return L"WM_NCRBUTTONDBLCLK";
	if (msg == 167) return L"WM_NCMBUTTONDOWN";
	if (msg == 168) return L"WM_NCMBUTTONUP";
	if (msg == 169) return L"WM_NCMBUTTONDBLCLK";
	if (msg == 171) return L"WM_NCXBUTTONDOWN";
	if (msg == 172) return L"WM_NCXBUTTONUP";
	if (msg == 173) return L"WM_NCXBUTTONDBLCLK";
	if (msg == 176) return L"EM_GETSEL";
	if (msg == 177) return L"EM_SETSEL";
	if (msg == 178) return L"EM_GETRECT";
	if (msg == 179) return L"EM_SETRECT";
	if (msg == 180) return L"EM_SETRECTNP";
	if (msg == 181) return L"EM_SCROLL";
	if (msg == 182) return L"EM_LINESCROLL";
	if (msg == 183) return L"EM_SCROLLCARET";
	if (msg == 185) return L"EM_GETMODIFY";
	if (msg == 187) return L"EM_SETMODIFY";
	if (msg == 188) return L"EM_GETLINECOUNT";
	if (msg == 189) return L"EM_LINEINDEX";
	if (msg == 190) return L"EM_SETHANDLE";
	if (msg == 191) return L"EM_GETHANDLE";
	if (msg == 192) return L"EM_GETTHUMB";
	if (msg == 193) return L"EM_LINELENGTH";
	if (msg == 194) return L"EM_REPLACESEL";
	if (msg == 195) return L"EM_SETFONT";
	if (msg == 196) return L"EM_GETLINE";
	if (msg == 197) return L"EM_LIMITTEXT";
	if (msg == 197) return L"EM_SETLIMITTEXT";
	if (msg == 198) return L"EM_CANUNDO";
	if (msg == 199) return L"EM_UNDO";
	if (msg == 200) return L"EM_FMTLINES";
	if (msg == 201) return L"EM_LINEFROMCHAR";
	if (msg == 202) return L"EM_SETWORDBREAK";
	if (msg == 203) return L"EM_SETTABSTOPS";
	if (msg == 204) return L"EM_SETPASSWORDCHAR";
	if (msg == 205) return L"EM_EMPTYUNDOBUFFER";
	if (msg == 206) return L"EM_GETFIRSTVISIBLELINE";
	if (msg == 207) return L"EM_SETREADONLY";
	if (msg == 209) return L"EM_SETWORDBREAKPROC";
	if (msg == 209) return L"EM_GETWORDBREAKPROC";
	if (msg == 210) return L"EM_GETPASSWORDCHAR";
	if (msg == 211) return L"EM_SETMARGINS";
	if (msg == 212) return L"EM_GETMARGINS";
	if (msg == 213) return L"EM_GETLIMITTEXT";
	if (msg == 214) return L"EM_POSFROMCHAR";
	if (msg == 215) return L"EM_CHARFROMPOS";
	if (msg == 216) return L"EM_SETIMESTATUS";
	if (msg == 217) return L"EM_GETIMESTATUS";
	if (msg == 224) return L"SBM_SETPOS";
	if (msg == 225) return L"SBM_GETPOS";
	if (msg == 226) return L"SBM_SETRANGE";
	if (msg == 227) return L"SBM_GETRANGE";
	if (msg == 228) return L"SBM_ENABLE_ARROWS";
	if (msg == 230) return L"SBM_SETRANGEREDRAW";
	if (msg == 233) return L"SBM_SETSCROLLINFO";
	if (msg == 234) return L"SBM_GETSCROLLINFO";
	if (msg == 235) return L"SBM_GETSCROLLBARINFO";
	if (msg == 240) return L"BM_GETCHECK";
	if (msg == 241) return L"BM_SETCHECK";
	if (msg == 242) return L"BM_GETSTATE";
	if (msg == 243) return L"BM_SETSTATE";
	if (msg == 244) return L"BM_SETSTYLE";
	if (msg == 245) return L"BM_CLICK";
	if (msg == 246) return L"BM_GETIMAGE";
	if (msg == 247) return L"BM_SETIMAGE";
	if (msg == 248) return L"BM_SETDONTCLICK";
	if (msg == 255) return L"WM_INPUT";
	if (msg == 256) return L"WM_KEYDOWN";
	if (msg == 256) return L"WM_KEYFIRST";
	if (msg == 257) return L"WM_KEYUP";
	if (msg == 258) return L"WM_CHAR";
	if (msg == 259) return L"WM_DEADCHAR";
	if (msg == 260) return L"WM_SYSKEYDOWN";
	if (msg == 261) return L"WM_SYSKEYUP";
	if (msg == 262) return L"WM_SYSCHAR";
	if (msg == 263) return L"WM_SYSDEADCHAR";
	if (msg == 265) return L"WM_WNT_CONVERTREQUESTEX|WM_UNICHAR|WM_KEYLAST";
	if (msg == 266) return L"WM_CONVERTREQUEST";
	if (msg == 267) return L"WM_CONVERTRESULT";
	if (msg == 268) return L"WM_INTERIM";
	if (msg == 269) return L"WM_IME_STARTCOMPOSITION";
	if (msg == 270) return L"WM_IME_ENDCOMPOSITION";
	if (msg == 271) return L"WM_IME_COMPOSITION";
	if (msg == 271) return L"WM_IME_KEYLAST";
	if (msg == 272) return L"WM_INITDIALOG";
	if (msg == 273) return L"WM_COMMAND";
	if (msg == 274) return L"WM_SYSCOMMAND";
	if (msg == 275) return L"WM_TIMER";
	if (msg == 276) return L"WM_HSCROLL";
	if (msg == 277) return L"WM_VSCROLL";
	if (msg == 278) return L"WM_INITMENU";
	if (msg == 279) return L"WM_INITMENUPOPUP";
	if (msg == 280) return L"WM_SYSTIMER";
	if (msg == 287) return L"WM_MENUSELECT";
	if (msg == 288) return L"WM_MENUCHAR";
	if (msg == 289) return L"WM_ENTERIDLE";
	if (msg == 290) return L"WM_MENURBUTTONUP";
	if (msg == 291) return L"WM_MENUDRAG";
	if (msg == 292) return L"WM_MENUGETOBJECT";
	if (msg == 293) return L"WM_UNINITMENUPOPUP";
	if (msg == 294) return L"WM_MENUCOMMAND";
	if (msg == 295) return L"WM_CHANGEUISTATE";
	if (msg == 296) return L"WM_UPDATEUISTATE";
	if (msg == 297) return L"WM_QUERYUISTATE";
	if (msg == 305) return L"WM_LBTRACKPOINT";
	if (msg == 306) return L"WM_CTLCOLORMSGBOX";
	if (msg == 307) return L"WM_CTLCOLOREDIT";
	if (msg == 308) return L"WM_CTLCOLORLISTBOX";
	if (msg == 309) return L"WM_CTLCOLORBTN";
	if (msg == 310) return L"WM_CTLCOLORDLG";
	if (msg == 311) return L"WM_CTLCOLORSCROLLBAR";
	if (msg == 312) return L"WM_CTLCOLORSTATIC";
	if (msg == 320) return L"CB_GETEDITSEL";
	if (msg == 321) return L"CB_LIMITTEXT";
	if (msg == 322) return L"CB_SETEDITSEL";
	if (msg == 323) return L"CB_ADDSTRING";
	if (msg == 324) return L"CB_DELETESTRING";
	if (msg == 325) return L"CB_DIR";
	if (msg == 326) return L"CB_GETCOUNT";
	if (msg == 327) return L"CB_GETCURSEL";
	if (msg == 328) return L"CB_GETLBTEXT";
	if (msg == 329) return L"CB_GETLBTEXTLEN";
	if (msg == 330) return L"CB_INSERTSTRING";
	if (msg == 331) return L"CB_RESETCONTENT";
	if (msg == 332) return L"CB_FINDSTRING";
	if (msg == 333) return L"CB_SELECTSTRING";
	if (msg == 334) return L"CB_SETCURSEL";
	if (msg == 335) return L"CB_SHOWDROPDOWN";
	if (msg == 336) return L"CB_GETITEMDATA";
	if (msg == 337) return L"CB_SETITEMDATA";
	if (msg == 338) return L"CB_GETDROPPEDCONTROLRECT";
	if (msg == 339) return L"CB_SETITEMHEIGHT";
	if (msg == 340) return L"CB_GETITEMHEIGHT";
	if (msg == 341) return L"CB_SETEXTENDEDUI";
	if (msg == 342) return L"CB_GETEXTENDEDUI";
	if (msg == 343) return L"CB_GETDROPPEDSTATE";
	if (msg == 344) return L"CB_FINDSTRINGEXACT";
	if (msg == 345) return L"CB_SETLOCALE";
	if (msg == 346) return L"CB_GETLOCALE";
	if (msg == 347) return L"CB_GETTOPINDEX";
	if (msg == 348) return L"CB_SETTOPINDEX";
	if (msg == 349) return L"CB_GETHORIZONTALEXTENT";
	if (msg == 350) return L"CB_SETHORIZONTALEXTENT";
	if (msg == 351) return L"CB_GETDROPPEDWIDTH";
	if (msg == 352) return L"CB_SETDROPPEDWIDTH";
	if (msg == 353) return L"CB_INITSTORAGE";
	if (msg == 355) return L"CB_MULTIPLEADDSTRING";
	if (msg == 356) return L"CB_GETCOMBOBOXINFO";
	if (msg == 357) return L"CB_MSGMAX";
	if (msg == 512) return L"WM_MOUSEFIRST";
	if (msg == 512) return L"WM_MOUSEMOVE";
	if (msg == 513) return L"WM_LBUTTONDOWN";
	if (msg == 514) return L"WM_LBUTTONUP";
	if (msg == 515) return L"WM_LBUTTONDBLCLK";
	if (msg == 516) return L"WM_RBUTTONDOWN";
	if (msg == 517) return L"WM_RBUTTONUP";
	if (msg == 518) return L"WM_RBUTTONDBLCLK";
	if (msg == 519) return L"WM_MBUTTONDOWN";
	if (msg == 520) return L"WM_MBUTTONUP";
	if (msg == 521) return L"WM_MBUTTONDBLCLK";
	if (msg == 521) return L"WM_MOUSELAST";
	if (msg == 522) return L"WM_MOUSEWHEEL";
	if (msg == 523) return L"WM_XBUTTONDOWN";
	if (msg == 524) return L"WM_XBUTTONUP";
	if (msg == 525) return L"WM_XBUTTONDBLCLK";
	if (msg == 526) return L"WM_MOUSEHWHEEL";
	if (msg == 528) return L"WM_PARENTNOTIFY";
	if (msg == 529) return L"WM_ENTERMENULOOP";
	if (msg == 530) return L"WM_EXITMENULOOP";
	if (msg == 531) return L"WM_NEXTMENU";
	if (msg == 532) return L"WM_SIZING";
	if (msg == 533) return L"WM_CAPTURECHANGED";
	if (msg == 534) return L"WM_MOVING";
	if (msg == 536) return L"WM_POWERBROADCAST";
	if (msg == 537) return L"WM_DEVICECHANGE";
	if (msg == 544) return L"WM_MDICREATE";
	if (msg == 545) return L"WM_MDIDESTROY";
	if (msg == 546) return L"WM_MDIACTIVATE";
	if (msg == 547) return L"WM_MDIRESTORE";
	if (msg == 548) return L"WM_MDINEXT";
	if (msg == 549) return L"WM_MDIMAXIMIZE";
	if (msg == 550) return L"WM_MDITILE";
	if (msg == 551) return L"WM_MDICASCADE";
	if (msg == 552) return L"WM_MDIICONARRANGE";
	if (msg == 553) return L"WM_MDIGETACTIVE";
	if (msg == 560) return L"WM_MDISETMENU";
	if (msg == 561) return L"WM_ENTERSIZEMOVE";
	if (msg == 562) return L"WM_EXITSIZEMOVE";
	if (msg == 563) return L"WM_DROPFILES";
	if (msg == 564) return L"WM_MDIREFRESHMENU";
	if (msg == 640) return L"WM_IME_REPORT";
	if (msg == 641) return L"WM_IME_SETCONTEXT";
	if (msg == 642) return L"WM_IME_NOTIFY";
	if (msg == 643) return L"WM_IME_CONTROL";
	if (msg == 644) return L"WM_IME_COMPOSITIONFULL";
	if (msg == 645) return L"WM_IME_SELECT";
	if (msg == 646) return L"WM_IME_CHAR";
	if (msg == 648) return L"WM_IME_REQUEST";
	if (msg == 656) return L"WM_IMEKEYDOWN";
	if (msg == 656) return L"WM_IME_KEYDOWN";
	if (msg == 657) return L"WM_IMEKEYUP";
	if (msg == 657) return L"WM_IME_KEYUP";
	if (msg == 672) return L"WM_NCMOUSEHOVER";
	if (msg == 673) return L"WM_MOUSEHOVER";
	if (msg == 674) return L"WM_NCMOUSELEAVE";
	if (msg == 675) return L"WM_MOUSELEAVE";
	if (msg == 768) return L"WM_CUT";
	if (msg == 769) return L"WM_COPY";
	if (msg == 770) return L"WM_PASTE";
	if (msg == 771) return L"WM_CLEAR";
	if (msg == 772) return L"WM_UNDO";
	if (msg == 773) return L"WM_RENDERFORMAT";
	if (msg == 774) return L"WM_RENDERALLFORMATS";
	if (msg == 775) return L"WM_DESTROYCLIPBOARD";
	if (msg == 776) return L"WM_DRAWCLIPBOARD";
	if (msg == 777) return L"WM_PAINTCLIPBOARD";
	if (msg == 778) return L"WM_VSCROLLCLIPBOARD";
	if (msg == 779) return L"WM_SIZECLIPBOARD";
	if (msg == 780) return L"WM_ASKCBFORMATNAME";
	if (msg == 781) return L"WM_CHANGECBCHAIN";
	if (msg == 782) return L"WM_HSCROLLCLIPBOARD";
	if (msg == 783) return L"WM_QUERYNEWPALETTE";
	if (msg == 784) return L"WM_PALETTEISCHANGING";
	if (msg == 785) return L"WM_PALETTECHANGED";
	if (msg == 786) return L"WM_HOTKEY";
	if (msg == 791) return L"WM_PRINT";
	if (msg == 792) return L"WM_PRINTCLIENT";
	if (msg == 793) return L"WM_APPCOMMAND";
	if (msg == 799) return L"WM_DWMNCRENDERINGCHANGED";
	if (msg == 856) return L"WM_HANDHELDFIRST";
	if (msg == 863) return L"WM_HANDHELDLAST";
	if (msg == 864) return L"WM_AFXFIRST";
	if (msg == 895) return L"WM_AFXLAST";
	if (msg == 896) return L"WM_PENWINFIRST";
	if (msg == 897) return L"WM_RCRESULT";
	if (msg == 898) return L"WM_HOOKRCRESULT";
	if (msg == 899) return L"WM_GLOBALRCCHANGE";
	if (msg == 899) return L"WM_PENMISCINFO";
	if (msg == 900) return L"WM_SKB";
	if (msg == 901) return L"WM_HEDITCTL";
	if (msg == 901) return L"WM_PENCTL";
	if (msg == 902) return L"WM_PENMISC";
	if (msg == 903) return L"WM_CTLINIT";
	if (msg == 904) return L"WM_PENEVENT";
	if (msg == 911) return L"WM_PENWINLAST";
	if (msg == 1024) return L"DDM_SETFMT";
	if (msg == 1024) return L"DM_GETDEFID";
	if (msg == 1024) return L"NIN_SELECT";
	if (msg == 1024) return L"TBM_GETPOS";
	if (msg == 1024) return L"WM_PSD_PAGESETUPDLG";
	if (msg == 1024) return L"WM_USER";
	if (msg == 1025) return L"CBEM_INSERTITEMA";
	if (msg == 1025) return L"DDM_DRAW";
	if (msg == 1025) return L"DM_SETDEFID";
	if (msg == 1025) return L"HKM_SETHOTKEY";
	if (msg == 1025) return L"PBM_SETRANGE";
	if (msg == 1025) return L"RB_INSERTBANDA";
	if (msg == 1025) return L"SB_SETTEXTA";
	if (msg == 1025) return L"TB_ENABLEBUTTON";
	if (msg == 1025) return L"TBM_GETRANGEMIN";
	if (msg == 1025) return L"TTM_ACTIVATE";
	if (msg == 1025) return L"WM_CHOOSEFONT_GETLOGFONT";
	if (msg == 1025) return L"WM_PSD_FULLPAGERECT";
	if (msg == 1026) return L"CBEM_SETIMAGELIST";
	if (msg == 1026) return L"DDM_CLOSE";
	if (msg == 1026) return L"DM_REPOSITION";
	if (msg == 1026) return L"HKM_GETHOTKEY";
	if (msg == 1026) return L"PBM_SETPOS";
	if (msg == 1026) return L"RB_DELETEBAND";
	if (msg == 1026) return L"SB_GETTEXTA";
	if (msg == 1026) return L"TB_CHECKBUTTON";
	if (msg == 1026) return L"TBM_GETRANGEMAX";
	if (msg == 1026) return L"WM_PSD_MINMARGINRECT";
	if (msg == 1027) return L"CBEM_GETIMAGELIST";
	if (msg == 1027) return L"DDM_BEGIN";
	if (msg == 1027) return L"HKM_SETRULES";
	if (msg == 1027) return L"PBM_DELTAPOS";
	if (msg == 1027) return L"RB_GETBARINFO";
	if (msg == 1027) return L"SB_GETTEXTLENGTHA";
	if (msg == 1027) return L"TBM_GETTIC";
	if (msg == 1027) return L"TB_PRESSBUTTON";
	if (msg == 1027) return L"TTM_SETDELAYTIME";
	if (msg == 1027) return L"WM_PSD_MARGINRECT";
	if (msg == 1028) return L"CBEM_GETITEMA";
	if (msg == 1028) return L"DDM_END";
	if (msg == 1028) return L"PBM_SETSTEP";
	if (msg == 1028) return L"RB_SETBARINFO";
	if (msg == 1028) return L"SB_SETPARTS";
	if (msg == 1028) return L"TB_HIDEBUTTON";
	if (msg == 1028) return L"TBM_SETTIC";
	if (msg == 1028) return L"TTM_ADDTOOLA";
	if (msg == 1028) return L"WM_PSD_GREEKTEXTRECT";
	if (msg == 1029) return L"CBEM_SETITEMA";
	if (msg == 1029) return L"PBM_STEPIT";
	if (msg == 1029) return L"TB_INDETERMINATE";
	if (msg == 1029) return L"TBM_SETPOS";
	if (msg == 1029) return L"TTM_DELTOOLA";
	if (msg == 1029) return L"WM_PSD_ENVSTAMPRECT";
	if (msg == 1030) return L"CBEM_GETCOMBOCONTROL";
	if (msg == 1030) return L"PBM_SETRANGE32";
	if (msg == 1030) return L"RB_SETBANDINFOA";
	if (msg == 1030) return L"SB_GETPARTS";
	if (msg == 1030) return L"TB_MARKBUTTON";
	if (msg == 1030) return L"TBM_SETRANGE";
	if (msg == 1030) return L"TTM_NEWTOOLRECTA";
	if (msg == 1030) return L"WM_PSD_YAFULLPAGERECT";
	if (msg == 1031) return L"CBEM_GETEDITCONTROL";
	if (msg == 1031) return L"PBM_GETRANGE";
	if (msg == 1031) return L"RB_SETPARENT";
	if (msg == 1031) return L"SB_GETBORDERS";
	if (msg == 1031) return L"TBM_SETRANGEMIN";
	if (msg == 1031) return L"TTM_RELAYEVENT";
	if (msg == 1032) return L"CBEM_SETEXSTYLE";
	if (msg == 1032) return L"PBM_GETPOS";
	if (msg == 1032) return L"RB_HITTEST";
	if (msg == 1032) return L"SB_SETMINHEIGHT";
	if (msg == 1032) return L"TBM_SETRANGEMAX";
	if (msg == 1032) return L"TTM_GETTOOLINFOA";
	if (msg == 1033) return L"CBEM_GETEXSTYLE";
	if (msg == 1033) return L"CBEM_GETEXTENDEDSTYLE";
	if (msg == 1033) return L"PBM_SETBARCOLOR";
	if (msg == 1033) return L"RB_GETRECT";
	if (msg == 1033) return L"SB_SIMPLE";
	if (msg == 1033) return L"TB_ISBUTTONENABLED";
	if (msg == 1033) return L"TBM_CLEARTICS";
	if (msg == 1033) return L"TTM_SETTOOLINFOA";
	if (msg == 1034) return L"CBEM_HASEDITCHANGED";
	if (msg == 1034) return L"RB_INSERTBANDW";
	if (msg == 1034) return L"SB_GETRECT";
	if (msg == 1034) return L"TB_ISBUTTONCHECKED";
	if (msg == 1034) return L"TBM_SETSEL";
	if (msg == 1034) return L"TTM_HITTESTA";
	if (msg == 1034) return L"WIZ_QUERYNUMPAGES";
	if (msg == 1035) return L"CBEM_INSERTITEMW";
	if (msg == 1035) return L"RB_SETBANDINFOW";
	if (msg == 1035) return L"SB_SETTEXTW";
	if (msg == 1035) return L"TB_ISBUTTONPRESSED";
	if (msg == 1035) return L"TBM_SETSELSTART";
	if (msg == 1035) return L"TTM_GETTEXTA";
	if (msg == 1035) return L"WIZ_NEXT";
	if (msg == 1036) return L"CBEM_SETITEMW";
	if (msg == 1036) return L"RB_GETBANDCOUNT";
	if (msg == 1036) return L"SB_GETTEXTLENGTHW";
	if (msg == 1036) return L"TB_ISBUTTONHIDDEN";
	if (msg == 1036) return L"TBM_SETSELEND";
	if (msg == 1036) return L"TTM_UPDATETIPTEXTA";
	if (msg == 1036) return L"WIZ_PREV";
	if (msg == 1037) return L"CBEM_GETITEMW";
	if (msg == 1037) return L"RB_GETROWCOUNT";
	if (msg == 1037) return L"SB_GETTEXTW";
	if (msg == 1037) return L"TB_ISBUTTONINDETERMINATE";
	if (msg == 1037) return L"TTM_GETTOOLCOUNT";
	if (msg == 1038) return L"CBEM_SETEXTENDEDSTYLE";
	if (msg == 1038) return L"RB_GETROWHEIGHT";
	if (msg == 1038) return L"SB_ISSIMPLE";
	if (msg == 1038) return L"TB_ISBUTTONHIGHLIGHTED";
	if (msg == 1038) return L"TBM_GETPTICS";
	if (msg == 1038) return L"TTM_ENUMTOOLSA";
	if (msg == 1039) return L"SB_SETICON";
	if (msg == 1039) return L"TBM_GETTICPOS";
	if (msg == 1039) return L"TTM_GETCURRENTTOOLA";
	if (msg == 1040) return L"RB_IDTOINDEX";
	if (msg == 1040) return L"SB_SETTIPTEXTA";
	if (msg == 1040) return L"TBM_GETNUMTICS";
	if (msg == 1040) return L"TTM_WINDOWFROMPOINT";
	if (msg == 1041) return L"RB_GETTOOLTIPS";
	if (msg == 1041) return L"SB_SETTIPTEXTW";
	if (msg == 1041) return L"TBM_GETSELSTART";
	if (msg == 1041) return L"TB_SETSTATE";
	if (msg == 1041) return L"TTM_TRACKACTIVATE";
	if (msg == 1042) return L"RB_SETTOOLTIPS";
	if (msg == 1042) return L"SB_GETTIPTEXTA";
	if (msg == 1042) return L"TB_GETSTATE";
	if (msg == 1042) return L"TBM_GETSELEND";
	if (msg == 1042) return L"TTM_TRACKPOSITION";
	if (msg == 1043) return L"RB_SETBKCOLOR";
	if (msg == 1043) return L"SB_GETTIPTEXTW";
	if (msg == 1043) return L"TB_ADDBITMAP";
	if (msg == 1043) return L"TBM_CLEARSEL";
	if (msg == 1043) return L"TTM_SETTIPBKCOLOR";
	if (msg == 1044) return L"RB_GETBKCOLOR";
	if (msg == 1044) return L"SB_GETICON";
	if (msg == 1044) return L"TB_ADDBUTTONSA";
	if (msg == 1044) return L"TBM_SETTICFREQ";
	if (msg == 1044) return L"TTM_SETTIPTEXTCOLOR";
	if (msg == 1045) return L"RB_SETTEXTCOLOR";
	if (msg == 1045) return L"TB_INSERTBUTTONA";
	if (msg == 1045) return L"TBM_SETPAGESIZE";
	if (msg == 1045) return L"TTM_GETDELAYTIME";
	if (msg == 1046) return L"RB_GETTEXTCOLOR";
	if (msg == 1046) return L"TB_DELETEBUTTON";
	if (msg == 1046) return L"TBM_GETPAGESIZE";
	if (msg == 1046) return L"TTM_GETTIPBKCOLOR";
	if (msg == 1047) return L"RB_SIZETORECT";
	if (msg == 1047) return L"TB_GETBUTTON";
	if (msg == 1047) return L"TBM_SETLINESIZE";
	if (msg == 1047) return L"TTM_GETTIPTEXTCOLOR";
	if (msg == 1048) return L"RB_BEGINDRAG";
	if (msg == 1048) return L"TB_BUTTONCOUNT";
	if (msg == 1048) return L"TBM_GETLINESIZE";
	if (msg == 1048) return L"TTM_SETMAXTIPWIDTH";
	if (msg == 1049) return L"RB_ENDDRAG";
	if (msg == 1049) return L"TB_COMMANDTOINDEX";
	if (msg == 1049) return L"TBM_GETTHUMBRECT";
	if (msg == 1049) return L"TTM_GETMAXTIPWIDTH";
	if (msg == 1050) return L"RB_DRAGMOVE";
	if (msg == 1050) return L"TBM_GETCHANNELRECT";
	if (msg == 1050) return L"TB_SAVERESTOREA";
	if (msg == 1050) return L"TTM_SETMARGIN";
	if (msg == 1051) return L"RB_GETBARHEIGHT";
	if (msg == 1051) return L"TB_CUSTOMIZE";
	if (msg == 1051) return L"TBM_SETTHUMBLENGTH";
	if (msg == 1051) return L"TTM_GETMARGIN";
	if (msg == 1052) return L"RB_GETBANDINFOW";
	if (msg == 1052) return L"TB_ADDSTRINGA";
	if (msg == 1052) return L"TBM_GETTHUMBLENGTH";
	if (msg == 1052) return L"TTM_POP";
	if (msg == 1053) return L"RB_GETBANDINFOA";
	if (msg == 1053) return L"TB_GETITEMRECT";
	if (msg == 1053) return L"TBM_SETTOOLTIPS";
	if (msg == 1053) return L"TTM_UPDATE";
	if (msg == 1054) return L"RB_MINIMIZEBAND";
	if (msg == 1054) return L"TB_BUTTONSTRUCTSIZE";
	if (msg == 1054) return L"TBM_GETTOOLTIPS";
	if (msg == 1054) return L"TTM_GETBUBBLESIZE";
	if (msg == 1055) return L"RB_MAXIMIZEBAND";
	if (msg == 1055) return L"TBM_SETTIPSIDE";
	if (msg == 1055) return L"TB_SETBUTTONSIZE";
	if (msg == 1055) return L"TTM_ADJUSTRECT";
	if (msg == 1056) return L"TBM_SETBUDDY";
	if (msg == 1056) return L"TB_SETBITMAPSIZE";
	if (msg == 1056) return L"TTM_SETTITLEA";
	if (msg == 1057) return L"MSG_FTS_JUMP_VA";
	if (msg == 1057) return L"TB_AUTOSIZE";
	if (msg == 1057) return L"TBM_GETBUDDY";
	if (msg == 1057) return L"TTM_SETTITLEW";
	if (msg == 1058) return L"RB_GETBANDBORDERS";
	if (msg == 1059) return L"MSG_FTS_JUMP_QWORD";
	if (msg == 1059) return L"RB_SHOWBAND";
	if (msg == 1059) return L"TB_GETTOOLTIPS";
	if (msg == 1060) return L"MSG_REINDEX_REQUEST";
	if (msg == 1060) return L"TB_SETTOOLTIPS";
	if (msg == 1061) return L"MSG_FTS_WHERE_IS_IT";
	if (msg == 1061) return L"RB_SETPALETTE";
	if (msg == 1061) return L"TB_SETPARENT";
	if (msg == 1062) return L"RB_GETPALETTE";
	if (msg == 1063) return L"RB_MOVEBAND";
	if (msg == 1063) return L"TB_SETROWS";
	if (msg == 1064) return L"TB_GETROWS";
	if (msg == 1065) return L"TB_GETBITMAPFLAGS";
	if (msg == 1066) return L"TB_SETCMDID";
	if (msg == 1067) return L"RB_PUSHCHEVRON";
	if (msg == 1067) return L"TB_CHANGEBITMAP";
	if (msg == 1068) return L"TB_GETBITMAP";
	if (msg == 1069) return L"MSG_GET_DEFFONT";
	if (msg == 1069) return L"TB_GETBUTTONTEXTA";
	if (msg == 1070) return L"TB_REPLACEBITMAP";
	if (msg == 1071) return L"TB_SETINDENT";
	if (msg == 1072) return L"TB_SETIMAGELIST";
	if (msg == 1073) return L"TB_GETIMAGELIST";
	if (msg == 1074) return L"TB_LOADIMAGES";
	if (msg == 1074) return L"EM_CANPASTE";
	if (msg == 1074) return L"TTM_ADDTOOLW";
	if (msg == 1075) return L"EM_DISPLAYBAND";
	if (msg == 1075) return L"TB_GETRECT";
	if (msg == 1075) return L"TTM_DELTOOLW";
	if (msg == 1076) return L"EM_EXGETSEL";
	if (msg == 1076) return L"TB_SETHOTIMAGELIST";
	if (msg == 1076) return L"TTM_NEWTOOLRECTW";
	if (msg == 1077) return L"EM_EXLIMITTEXT";
	if (msg == 1077) return L"TB_GETHOTIMAGELIST";
	if (msg == 1077) return L"TTM_GETTOOLINFOW";
	if (msg == 1078) return L"EM_EXLINEFROMCHAR";
	if (msg == 1078) return L"TB_SETDISABLEDIMAGELIST";
	if (msg == 1078) return L"TTM_SETTOOLINFOW";
	if (msg == 1079) return L"EM_EXSETSEL";
	if (msg == 1079) return L"TB_GETDISABLEDIMAGELIST";
	if (msg == 1079) return L"TTM_HITTESTW";
	if (msg == 1080) return L"EM_FINDTEXT";
	if (msg == 1080) return L"TB_SETSTYLE";
	if (msg == 1080) return L"TTM_GETTEXTW";
	if (msg == 1081) return L"EM_FORMATRANGE";
	if (msg == 1081) return L"TB_GETSTYLE";
	if (msg == 1081) return L"TTM_UPDATETIPTEXTW";
	if (msg == 1082) return L"EM_GETCHARFORMAT";
	if (msg == 1082) return L"TB_GETBUTTONSIZE";
	if (msg == 1082) return L"TTM_ENUMTOOLSW";
	if (msg == 1083) return L"EM_GETEVENTMASK";
	if (msg == 1083) return L"TB_SETBUTTONWIDTH";
	if (msg == 1083) return L"TTM_GETCURRENTTOOLW";
	if (msg == 1084) return L"EM_GETOLEINTERFACE";
	if (msg == 1084) return L"TB_SETMAXTEXTROWS";
	if (msg == 1085) return L"EM_GETPARAFORMAT";
	if (msg == 1085) return L"TB_GETTEXTROWS";
	if (msg == 1086) return L"EM_GETSELTEXT";
	if (msg == 1086) return L"TB_GETOBJECT";
	if (msg == 1087) return L"EM_HIDESELECTION";
	if (msg == 1087) return L"TB_GETBUTTONINFOW";
	if (msg == 1088) return L"EM_PASTESPECIAL";
	if (msg == 1088) return L"TB_SETBUTTONINFOW";
	if (msg == 1089) return L"EM_REQUESTRESIZE";
	if (msg == 1089) return L"TB_GETBUTTONINFOA";
	if (msg == 1090) return L"EM_SELECTIONTYPE";
	if (msg == 1090) return L"TB_SETBUTTONINFOA";
	if (msg == 1091) return L"EM_SETBKGNDCOLOR";
	if (msg == 1091) return L"TB_INSERTBUTTONW";
	if (msg == 1092) return L"EM_SETCHARFORMAT";
	if (msg == 1092) return L"TB_ADDBUTTONSW";
	if (msg == 1093) return L"EM_SETEVENTMASK";
	if (msg == 1093) return L"TB_HITTEST";
	if (msg == 1094) return L"EM_SETOLECALLBACK";
	if (msg == 1094) return L"TB_SETDRAWTEXTFLAGS";
	if (msg == 1095) return L"EM_SETPARAFORMAT";
	if (msg == 1095) return L"TB_GETHOTITEM";
	if (msg == 1096) return L"EM_SETTARGETDEVICE";
	if (msg == 1096) return L"TB_SETHOTITEM";
	if (msg == 1097) return L"EM_STREAMIN";
	if (msg == 1097) return L"TB_SETANCHORHIGHLIGHT";
	if (msg == 1098) return L"EM_STREAMOUT";
	if (msg == 1098) return L"TB_GETANCHORHIGHLIGHT";
	if (msg == 1099) return L"EM_GETTEXTRANGE";
	if (msg == 1099) return L"TB_GETBUTTONTEXTW";
	if (msg == 1100) return L"EM_FINDWORDBREAK";
	if (msg == 1100) return L"TB_SAVERESTOREW";
	if (msg == 1101) return L"EM_SETOPTIONS";
	if (msg == 1101) return L"TB_ADDSTRINGW";
	if (msg == 1102) return L"EM_GETOPTIONS";
	if (msg == 1102) return L"TB_MAPACCELERATORA";
	if (msg == 1103) return L"EM_FINDTEXTEX";
	if (msg == 1103) return L"TB_GETINSERTMARK";
	if (msg == 1104) return L"EM_GETWORDBREAKPROCEX";
	if (msg == 1104) return L"TB_SETINSERTMARK";
	if (msg == 1105) return L"EM_SETWORDBREAKPROCEX";
	if (msg == 1105) return L"TB_INSERTMARKHITTEST";
	if (msg == 1106) return L"EM_SETUNDOLIMIT";
	if (msg == 1106) return L"TB_MOVEBUTTON";
	if (msg == 1107) return L"TB_GETMAXSIZE";
	if (msg == 1108) return L"EM_REDO";
	if (msg == 1108) return L"TB_SETEXTENDEDSTYLE";
	if (msg == 1109) return L"EM_CANREDO";
	if (msg == 1109) return L"TB_GETEXTENDEDSTYLE";
	if (msg == 1110) return L"EM_GETUNDONAME";
	if (msg == 1110) return L"TB_GETPADDING";
	if (msg == 1111) return L"EM_GETREDONAME";
	if (msg == 1111) return L"TB_SETPADDING";
	if (msg == 1112) return L"EM_STOPGROUPTYPING";
	if (msg == 1112) return L"TB_SETINSERTMARKCOLOR";
	if (msg == 1113) return L"EM_SETTEXTMODE";
	if (msg == 1113) return L"TB_GETINSERTMARKCOLOR";
	if (msg == 1114) return L"EM_GETTEXTMODE";
	if (msg == 1114) return L"TB_MAPACCELERATORW";
	if (msg == 1115) return L"EM_AUTOURLDETECT";
	if (msg == 1115) return L"TB_GETSTRINGW";
	if (msg == 1116) return L"EM_GETAUTOURLDETECT";
	if (msg == 1116) return L"TB_GETSTRINGA";
	if (msg == 1117) return L"EM_SETPALETTE";
	if (msg == 1118) return L"EM_GETTEXTEX";
	if (msg == 1119) return L"EM_GETTEXTLENGTHEX";
	if (msg == 1120) return L"EM_SHOWSCROLLBAR";
	if (msg == 1121) return L"EM_SETTEXTEX";
	if (msg == 1123) return L"TAPI_REPLY";
	if (msg == 1124) return L"ACM_OPENA";
	if (msg == 1124) return L"BFFM_SETSTATUSTEXTA";
	if (msg == 1124) return L"CDM_FIRST";
	if (msg == 1124) return L"CDM_GETSPEC";
	if (msg == 1124) return L"EM_SETPUNCTUATION";
	if (msg == 1124) return L"IPM_CLEARADDRESS";
	if (msg == 1124) return L"WM_CAP_UNICODE_START";
	if (msg == 1125) return L"ACM_PLAY";
	if (msg == 1125) return L"BFFM_ENABLEOK";
	if (msg == 1125) return L"CDM_GETFILEPATH";
	if (msg == 1125) return L"EM_GETPUNCTUATION";
	if (msg == 1125) return L"IPM_SETADDRESS";
	if (msg == 1125) return L"PSM_SETCURSEL";
	if (msg == 1125) return L"UDM_SETRANGE";
	if (msg == 1125) return L"WM_CHOOSEFONT_SETLOGFONT";
	if (msg == 1126) return L"ACM_STOP";
	if (msg == 1126) return L"BFFM_SETSELECTIONA";
	if (msg == 1126) return L"CDM_GETFOLDERPATH";
	if (msg == 1126) return L"EM_SETWORDWRAPMODE";
	if (msg == 1126) return L"IPM_GETADDRESS";
	if (msg == 1126) return L"PSM_REMOVEPAGE";
	if (msg == 1126) return L"UDM_GETRANGE";
	if (msg == 1126) return L"WM_CAP_SET_CALLBACK_ERRORW";
	if (msg == 1126) return L"WM_CHOOSEFONT_SETFLAGS";
	if (msg == 1127) return L"ACM_OPENW";
	if (msg == 1127) return L"BFFM_SETSELECTIONW";
	if (msg == 1127) return L"CDM_GETFOLDERIDLIST";
	if (msg == 1127) return L"EM_GETWORDWRAPMODE";
	if (msg == 1127) return L"IPM_SETRANGE";
	if (msg == 1127) return L"PSM_ADDPAGE";
	if (msg == 1127) return L"UDM_SETPOS";
	if (msg == 1127) return L"WM_CAP_SET_CALLBACK_STATUSW";
	if (msg == 1128) return L"BFFM_SETSTATUSTEXTW";
	if (msg == 1128) return L"CDM_SETCONTROLTEXT";
	if (msg == 1128) return L"EM_SETIMECOLOR";
	if (msg == 1128) return L"IPM_SETFOCUS";
	if (msg == 1128) return L"PSM_CHANGED";
	if (msg == 1128) return L"UDM_GETPOS";
	if (msg == 1129) return L"CDM_HIDECONTROL";
	if (msg == 1129) return L"EM_GETIMECOLOR";
	if (msg == 1129) return L"IPM_ISBLANK";
	if (msg == 1129) return L"PSM_RESTARTWINDOWS";
	if (msg == 1129) return L"UDM_SETBUDDY";
	if (msg == 1130) return L"CDM_SETDEFEXT";
	if (msg == 1130) return L"EM_SETIMEOPTIONS";
	if (msg == 1130) return L"PSM_REBOOTSYSTEM";
	if (msg == 1130) return L"UDM_GETBUDDY";
	if (msg == 1131) return L"EM_GETIMEOPTIONS";
	if (msg == 1131) return L"PSM_CANCELTOCLOSE";
	if (msg == 1131) return L"UDM_SETACCEL";
	if (msg == 1132) return L"EM_CONVPOSITION";
	if (msg == 1132) return L"EM_CONVPOSITION";
	if (msg == 1132) return L"PSM_QUERYSIBLINGS";
	if (msg == 1132) return L"UDM_GETACCEL";
	if (msg == 1133) return L"MCIWNDM_GETZOOM";
	if (msg == 1133) return L"PSM_UNCHANGED";
	if (msg == 1133) return L"UDM_SETBASE";
	if (msg == 1134) return L"PSM_APPLY";
	if (msg == 1134) return L"UDM_GETBASE";
	if (msg == 1135) return L"PSM_SETTITLEA";
	if (msg == 1135) return L"UDM_SETRANGE32";
	if (msg == 1136) return L"PSM_SETWIZBUTTONS";
	if (msg == 1136) return L"UDM_GETRANGE32";
	if (msg == 1136) return L"WM_CAP_DRIVER_GET_NAMEW";
	if (msg == 1137) return L"PSM_PRESSBUTTON";
	if (msg == 1137) return L"UDM_SETPOS32";
	if (msg == 1137) return L"WM_CAP_DRIVER_GET_VERSIONW";
	if (msg == 1138) return L"PSM_SETCURSELID";
	if (msg == 1138) return L"UDM_GETPOS32";
	if (msg == 1139) return L"PSM_SETFINISHTEXTA";
	if (msg == 1140) return L"PSM_GETTABCONTROL";
	if (msg == 1141) return L"PSM_ISDIALOGMESSAGE";
	if (msg == 1142) return L"MCIWNDM_REALIZE";
	if (msg == 1142) return L"PSM_GETCURRENTPAGEHWND";
	if (msg == 1143) return L"MCIWNDM_SETTIMEFORMATA";
	if (msg == 1143) return L"PSM_INSERTPAGE";
	if (msg == 1144) return L"EM_SETLANGOPTIONS";
	if (msg == 1144) return L"MCIWNDM_GETTIMEFORMATA";
	if (msg == 1144) return L"PSM_SETTITLEW";
	if (msg == 1144) return L"WM_CAP_FILE_SET_CAPTURE_FILEW";
	if (msg == 1145) return L"EM_GETLANGOPTIONS";
	if (msg == 1145) return L"MCIWNDM_VALIDATEMEDIA";
	if (msg == 1145) return L"PSM_SETFINISHTEXTW";
	if (msg == 1145) return L"WM_CAP_FILE_GET_CAPTURE_FILEW";
	if (msg == 1146) return L"EM_GETIMECOMPMODE";
	if (msg == 1147) return L"EM_FINDTEXTW";
	if (msg == 1147) return L"MCIWNDM_PLAYTO";
	if (msg == 1147) return L"WM_CAP_FILE_SAVEASW";
	if (msg == 1148) return L"EM_FINDTEXTEXW";
	if (msg == 1148) return L"MCIWNDM_GETFILENAMEA";
	if (msg == 1149) return L"EM_RECONVERSION";
	if (msg == 1149) return L"MCIWNDM_GETDEVICEA";
	if (msg == 1149) return L"PSM_SETHEADERTITLEA";
	if (msg == 1149) return L"WM_CAP_FILE_SAVEDIBW";
	if (msg == 1150) return L"EM_SETIMEMODEBIAS";
	if (msg == 1150) return L"MCIWNDM_GETPALETTE";
	if (msg == 1150) return L"PSM_SETHEADERTITLEW";
	if (msg == 1151) return L"EM_GETIMEMODEBIAS";
	if (msg == 1151) return L"MCIWNDM_SETPALETTE";
	if (msg == 1151) return L"PSM_SETHEADERSUBTITLEA";
	if (msg == 1152) return L"MCIWNDM_GETERRORA";
	if (msg == 1152) return L"PSM_SETHEADERSUBTITLEW";
	if (msg == 1153) return L"PSM_HWNDTOINDEX";
	if (msg == 1154) return L"PSM_INDEXTOHWND";
	if (msg == 1155) return L"MCIWNDM_SETINACTIVETIMER";
	if (msg == 1155) return L"PSM_PAGETOINDEX";
	if (msg == 1156) return L"PSM_INDEXTOPAGE";
	if (msg == 1157) return L"DL_BEGINDRAG";
	if (msg == 1157) return L"MCIWNDM_GETINACTIVETIMER";
	if (msg == 1157) return L"PSM_IDTOINDEX";
	if (msg == 1158) return L"DL_DRAGGING";
	if (msg == 1158) return L"PSM_INDEXTOID";
	if (msg == 1159) return L"DL_DROPPED";
	if (msg == 1159) return L"PSM_GETRESULT";
	if (msg == 1160) return L"DL_CANCELDRAG";
	if (msg == 1160) return L"PSM_RECALCPAGESIZES";
	if (msg == 1164) return L"MCIWNDM_GET_SOURCE";
	if (msg == 1165) return L"MCIWNDM_PUT_SOURCE";
	if (msg == 1166) return L"MCIWNDM_GET_DEST";
	if (msg == 1167) return L"MCIWNDM_PUT_DEST";
	if (msg == 1168) return L"MCIWNDM_CAN_PLAY";
	if (msg == 1169) return L"MCIWNDM_CAN_WINDOW";
	if (msg == 1170) return L"MCIWNDM_CAN_RECORD";
	if (msg == 1171) return L"MCIWNDM_CAN_SAVE";
	if (msg == 1172) return L"MCIWNDM_CAN_EJECT";
	if (msg == 1173) return L"MCIWNDM_CAN_CONFIG";
	if (msg == 1174) return L"IE_GETINK";
	if (msg == 1174) return L"IE_MSGFIRST";
	if (msg == 1174) return L"MCIWNDM_PALETTEKICK";
	if (msg == 1175) return L"IE_SETINK";
	if (msg == 1176) return L"IE_GETPENTIP";
	if (msg == 1177) return L"IE_SETPENTIP";
	if (msg == 1178) return L"IE_GETERASERTIP";
	if (msg == 1179) return L"IE_SETERASERTIP";
	if (msg == 1180) return L"IE_GETBKGND";
	if (msg == 1181) return L"IE_SETBKGND";
	if (msg == 1182) return L"IE_GETGRIDORIGIN";
	if (msg == 1183) return L"IE_SETGRIDORIGIN";
	if (msg == 1184) return L"IE_GETGRIDPEN";
	if (msg == 1185) return L"IE_SETGRIDPEN";
	if (msg == 1186) return L"IE_GETGRIDSIZE";
	if (msg == 1187) return L"IE_SETGRIDSIZE";
	if (msg == 1188) return L"IE_GETMODE";
	if (msg == 1189) return L"IE_SETMODE";
	if (msg == 1190) return L"IE_GETINKRECT";
	if (msg == 1190) return L"WM_CAP_SET_MCI_DEVICEW";
	if (msg == 1191) return L"WM_CAP_GET_MCI_DEVICEW";
	if (msg == 1204) return L"WM_CAP_PAL_OPENW";
	if (msg == 1205) return L"WM_CAP_PAL_SAVEW";
	if (msg == 1208) return L"IE_GETAPPDATA";
	if (msg == 1209) return L"IE_SETAPPDATA";
	if (msg == 1210) return L"IE_GETDRAWOPTS";
	if (msg == 1211) return L"IE_SETDRAWOPTS";
	if (msg == 1212) return L"IE_GETFORMAT";
	if (msg == 1213) return L"IE_SETFORMAT";
	if (msg == 1214) return L"IE_GETINKINPUT";
	if (msg == 1215) return L"IE_SETINKINPUT";
	if (msg == 1216) return L"IE_GETNOTIFY";
	if (msg == 1217) return L"IE_SETNOTIFY";
	if (msg == 1218) return L"IE_GETRECOG";
	if (msg == 1219) return L"IE_SETRECOG";
	if (msg == 1220) return L"IE_GETSECURITY";
	if (msg == 1221) return L"IE_SETSECURITY";
	if (msg == 1222) return L"IE_GETSEL";
	if (msg == 1223) return L"IE_SETSEL";
	if (msg == 1224) return L"CDM_LAST";
	if (msg == 1224) return L"EM_SETBIDIOPTIONS";
	if (msg == 1224) return L"IE_DOCOMMAND";
	if (msg == 1224) return L"MCIWNDM_NOTIFYMODE";
	if (msg == 1225) return L"EM_GETBIDIOPTIONS";
	if (msg == 1225) return L"IE_GETCOMMAND";
	if (msg == 1226) return L"EM_SETTYPOGRAPHYOPTIONS";
	if (msg == 1226) return L"IE_GETCOUNT";
	if (msg == 1227) return L"EM_GETTYPOGRAPHYOPTIONS";
	if (msg == 1227) return L"IE_GETGESTURE";
	if (msg == 1227) return L"MCIWNDM_NOTIFYMEDIA";
	if (msg == 1228) return L"EM_SETEDITSTYLE";
	if (msg == 1228) return L"IE_GETMENU";
	if (msg == 1229) return L"EM_GETEDITSTYLE";
	if (msg == 1229) return L"IE_GETPAINTDC";
	if (msg == 1229) return L"MCIWNDM_NOTIFYERROR";
	if (msg == 1230) return L"IE_GETPDEVENT";
	if (msg == 1231) return L"IE_GETSELCOUNT";
	if (msg == 1232) return L"IE_GETSELITEMS";
	if (msg == 1233) return L"IE_GETSTYLE";
	if (msg == 1243) return L"MCIWNDM_SETTIMEFORMATW";
	if (msg == 1244) return L"EM_OUTLINE";
	if (msg == 1244) return L"MCIWNDM_GETTIMEFORMATW";
	if (msg == 1245) return L"EM_GETSCROLLPOS";
	if (msg == 1246) return L"EM_SETSCROLLPOS";
	if (msg == 1246) return L"EM_SETSCROLLPOS";
	if (msg == 1247) return L"EM_SETFONTSIZE";
	if (msg == 1248) return L"EM_GETZOOM";
	if (msg == 1248) return L"MCIWNDM_GETFILENAMEW";
	if (msg == 1249) return L"EM_SETZOOM";
	if (msg == 1249) return L"MCIWNDM_GETDEVICEW";
	if (msg == 1250) return L"EM_GETVIEWKIND";
	if (msg == 1251) return L"EM_SETVIEWKIND";
	if (msg == 1252) return L"EM_GETPAGE";
	if (msg == 1252) return L"MCIWNDM_GETERRORW";
	if (msg == 1253) return L"EM_SETPAGE";
	if (msg == 1254) return L"EM_GETHYPHENATEINFO";
	if (msg == 1255) return L"EM_SETHYPHENATEINFO";
	if (msg == 1259) return L"EM_GETPAGEROTATE";
	if (msg == 1260) return L"EM_SETPAGEROTATE";
	if (msg == 1261) return L"EM_GETCTFMODEBIAS";
	if (msg == 1262) return L"EM_SETCTFMODEBIAS";
	if (msg == 1264) return L"EM_GETCTFOPENSTATUS";
	if (msg == 1265) return L"EM_SETCTFOPENSTATUS";
	if (msg == 1266) return L"EM_GETIMECOMPTEXT";
	if (msg == 1267) return L"EM_ISIME";
	if (msg == 1268) return L"EM_GETIMEPROPERTY";
	if (msg == 1293) return L"EM_GETQUERYRTFOBJ";
	if (msg == 1294) return L"EM_SETQUERYRTFOBJ";
	if (msg == 1536) return L"FM_GETFOCUS";
	if (msg == 1537) return L"FM_GETDRIVEINFOA";
	if (msg == 1538) return L"FM_GETSELCOUNT";
	if (msg == 1539) return L"FM_GETSELCOUNTLFN";
	if (msg == 1540) return L"FM_GETFILESELA";
	if (msg == 1541) return L"FM_GETFILESELLFNA";
	if (msg == 1542) return L"FM_REFRESH_WINDOWS";
	if (msg == 1543) return L"FM_RELOAD_EXTENSIONS";
	if (msg == 1553) return L"FM_GETDRIVEINFOW";
	if (msg == 1556) return L"FM_GETFILESELW";
	if (msg == 1557) return L"FM_GETFILESELLFNW";
	if (msg == 1625) return L"WLX_WM_SAS";
	if (msg == 2024) return L"SM_GETSELCOUNT";
	if (msg == 2024) return L"UM_GETSELCOUNT";
	if (msg == 2024) return L"WM_CPL_LAUNCH";
	if (msg == 2025) return L"SM_GETSERVERSELA";
	if (msg == 2025) return L"UM_GETUSERSELA";
	if (msg == 2025) return L"WM_CPL_LAUNCHED";
	if (msg == 2026) return L"SM_GETSERVERSELW";
	if (msg == 2026) return L"UM_GETUSERSELW";
	if (msg == 2027) return L"SM_GETCURFOCUSA";
	if (msg == 2027) return L"UM_GETGROUPSELA";
	if (msg == 2028) return L"SM_GETCURFOCUSW";
	if (msg == 2028) return L"UM_GETGROUPSELW";
	if (msg == 2029) return L"SM_GETOPTIONS";
	if (msg == 2029) return L"UM_GETCURFOCUSA";
	if (msg == 2030) return L"UM_GETCURFOCUSW";
	if (msg == 2031) return L"UM_GETOPTIONS";
	if (msg == 2032) return L"UM_GETOPTIONS2";
	if (msg == 4096) return L"LVM_FIRST";
	if (msg == 4096) return L"LVM_GETBKCOLOR";
	if (msg == 4097) return L"LVM_SETBKCOLOR";
	if (msg == 4098) return L"LVM_GETIMAGELIST";
	if (msg == 4099) return L"LVM_SETIMAGELIST";
	if (msg == 4100) return L"LVM_GETITEMCOUNT";
	if (msg == 4101) return L"LVM_GETITEMA";
	if (msg == 4102) return L"LVM_SETITEMA";
	if (msg == 4103) return L"LVM_INSERTITEMA";
	if (msg == 4104) return L"LVM_DELETEITEM";
	if (msg == 4105) return L"LVM_DELETEALLITEMS";
	if (msg == 4106) return L"LVM_GETCALLBACKMASK";
	if (msg == 4107) return L"LVM_SETCALLBACKMASK";
	if (msg == 4108) return L"LVM_GETNEXTITEM";
	if (msg == 4109) return L"LVM_FINDITEMA";
	if (msg == 4110) return L"LVM_GETITEMRECT";
	if (msg == 4111) return L"LVM_SETITEMPOSITION";
	if (msg == 4112) return L"LVM_GETITEMPOSITION";
	if (msg == 4113) return L"LVM_GETSTRINGWIDTHA";
	if (msg == 4114) return L"LVM_HITTEST";
	if (msg == 4115) return L"LVM_ENSUREVISIBLE";
	if (msg == 4116) return L"LVM_SCROLL";
	if (msg == 4117) return L"LVM_REDRAWITEMS";
	if (msg == 4118) return L"LVM_ARRANGE";
	if (msg == 4119) return L"LVM_EDITLABELA";
	if (msg == 4120) return L"LVM_GETEDITCONTROL";
	if (msg == 4121) return L"LVM_GETCOLUMNA";
	if (msg == 4122) return L"LVM_SETCOLUMNA";
	if (msg == 4123) return L"LVM_INSERTCOLUMNA";
	if (msg == 4124) return L"LVM_DELETECOLUMN";
	if (msg == 4125) return L"LVM_GETCOLUMNWIDTH";
	if (msg == 4126) return L"LVM_SETCOLUMNWIDTH";
	if (msg == 4127) return L"LVM_GETHEADER";
	if (msg == 4129) return L"LVM_CREATEDRAGIMAGE";
	if (msg == 4130) return L"LVM_GETVIEWRECT";
	if (msg == 4131) return L"LVM_GETTEXTCOLOR";
	if (msg == 4132) return L"LVM_SETTEXTCOLOR";
	if (msg == 4133) return L"LVM_GETTEXTBKCOLOR";
	if (msg == 4134) return L"LVM_SETTEXTBKCOLOR";
	if (msg == 4135) return L"LVM_GETTOPINDEX";
	if (msg == 4136) return L"LVM_GETCOUNTPERPAGE";
	if (msg == 4137) return L"LVM_GETORIGIN";
	if (msg == 4138) return L"LVM_UPDATE";
	if (msg == 4139) return L"LVM_SETITEMSTATE";
	if (msg == 4140) return L"LVM_GETITEMSTATE";
	if (msg == 4141) return L"LVM_GETITEMTEXTA";
	if (msg == 4142) return L"LVM_SETITEMTEXTA";
	if (msg == 4143) return L"LVM_SETITEMCOUNT";
	if (msg == 4144) return L"LVM_SORTITEMS";
	if (msg == 4145) return L"LVM_SETITEMPOSITION32";
	if (msg == 4146) return L"LVM_GETSELECTEDCOUNT";
	if (msg == 4147) return L"LVM_GETITEMSPACING";
	if (msg == 4148) return L"LVM_GETISEARCHSTRINGA";
	if (msg == 4149) return L"LVM_SETICONSPACING";
	if (msg == 4150) return L"LVM_SETEXTENDEDLISTVIEWSTYLE";
	if (msg == 4151) return L"LVM_GETEXTENDEDLISTVIEWSTYLE";
	if (msg == 4152) return L"LVM_GETSUBITEMRECT";
	if (msg == 4153) return L"LVM_SUBITEMHITTEST";
	if (msg == 4154) return L"LVM_SETCOLUMNORDERARRAY";
	if (msg == 4155) return L"LVM_GETCOLUMNORDERARRAY";
	if (msg == 4156) return L"LVM_SETHOTITEM";
	if (msg == 4157) return L"LVM_GETHOTITEM";
	if (msg == 4158) return L"LVM_SETHOTCURSOR";
	if (msg == 4159) return L"LVM_GETHOTCURSOR";
	if (msg == 4160) return L"LVM_APPROXIMATEVIEWRECT";
	if (msg == 4161) return L"LVM_SETWORKAREAS";
	if (msg == 4162) return L"LVM_GETSELECTIONMARK";
	if (msg == 4163) return L"LVM_SETSELECTIONMARK";
	if (msg == 4164) return L"LVM_SETBKIMAGEA";
	if (msg == 4165) return L"LVM_GETBKIMAGEA";
	if (msg == 4166) return L"LVM_GETWORKAREAS";
	if (msg == 4167) return L"LVM_SETHOVERTIME";
	if (msg == 4168) return L"LVM_GETHOVERTIME";
	if (msg == 4169) return L"LVM_GETNUMBEROFWORKAREAS";
	if (msg == 4170) return L"LVM_SETTOOLTIPS";
	if (msg == 4171) return L"LVM_GETITEMW";
	if (msg == 4172) return L"LVM_SETITEMW";
	if (msg == 4173) return L"LVM_INSERTITEMW";
	if (msg == 4174) return L"LVM_GETTOOLTIPS";
	if (msg == 4179) return L"LVM_FINDITEMW";
	if (msg == 4183) return L"LVM_GETSTRINGWIDTHW";
	if (msg == 4191) return L"LVM_GETCOLUMNW";
	if (msg == 4192) return L"LVM_SETCOLUMNW";
	if (msg == 4193) return L"LVM_INSERTCOLUMNW";
	if (msg == 4211) return L"LVM_GETITEMTEXTW";
	if (msg == 4212) return L"LVM_SETITEMTEXTW";
	if (msg == 4213) return L"LVM_GETISEARCHSTRINGW";
	if (msg == 4214) return L"LVM_EDITLABELW";
	if (msg == 4235) return L"LVM_GETBKIMAGEW";
	if (msg == 4236) return L"LVM_SETSELECTEDCOLUMN";
	if (msg == 4237) return L"LVM_SETTILEWIDTH";
	if (msg == 4238) return L"LVM_SETVIEW";
	if (msg == 4239) return L"LVM_GETVIEW";
	if (msg == 4241) return L"LVM_INSERTGROUP";
	if (msg == 4243) return L"LVM_SETGROUPINFO";
	if (msg == 4245) return L"LVM_GETGROUPINFO";
	if (msg == 4246) return L"LVM_REMOVEGROUP";
	if (msg == 4247) return L"LVM_MOVEGROUP";
	if (msg == 4250) return L"LVM_MOVEITEMTOGROUP";
	if (msg == 4251) return L"LVM_SETGROUPMETRICS";
	if (msg == 4252) return L"LVM_GETGROUPMETRICS";
	if (msg == 4253) return L"LVM_ENABLEGROUPVIEW";
	if (msg == 4254) return L"LVM_SORTGROUPS";
	if (msg == 4255) return L"LVM_INSERTGROUPSORTED";
	if (msg == 4256) return L"LVM_REMOVEALLGROUPS";
	if (msg == 4257) return L"LVM_HASGROUP";
	if (msg == 4258) return L"LVM_SETTILEVIEWINFO";
	if (msg == 4259) return L"LVM_GETTILEVIEWINFO";
	if (msg == 4260) return L"LVM_SETTILEINFO";
	if (msg == 4261) return L"LVM_GETTILEINFO";
	if (msg == 4262) return L"LVM_SETINSERTMARK";
	if (msg == 4263) return L"LVM_GETINSERTMARK";
	if (msg == 4264) return L"LVM_INSERTMARKHITTEST";
	if (msg == 4265) return L"LVM_GETINSERTMARKRECT";
	if (msg == 4266) return L"LVM_SETINSERTMARKCOLOR";
	if (msg == 4267) return L"LVM_GETINSERTMARKCOLOR";
	if (msg == 4269) return L"LVM_SETINFOTIP";
	if (msg == 4270) return L"LVM_GETSELECTEDCOLUMN";
	if (msg == 4271) return L"LVM_ISGROUPVIEWENABLED";
	if (msg == 4272) return L"LVM_GETOUTLINECOLOR";
	if (msg == 4273) return L"LVM_SETOUTLINECOLOR";
	if (msg == 4275) return L"LVM_CANCELEDITLABEL";
	if (msg == 4276) return L"LVM_MAPINDEXTOID";
	if (msg == 4277) return L"LVM_MAPIDTOINDEX";
	if (msg == 4278) return L"LVM_ISITEMVISIBLE";
	if (msg == 4300) return L"LVM_GETEMPTYTEXT";
	if (msg == 4301) return L"LVM_GETFOOTERRECT";
	if (msg == 4302) return L"LVM_GETFOOTERINFO";
	if (msg == 4303) return L"LVM_GETFOOTERITEMRECT";
	if (msg == 4304) return L"LVM_GETFOOTERITEM";
	if (msg == 4305) return L"LVM_GETITEMINDEXRECT";
	if (msg == 4306) return L"LVM_SETITEMINDEXSTATE";
	if (msg == 4307) return L"LVM_GETNEXTITEMINDEX";
	if (msg == 8192) return L"CCM_FIRST";
	if (msg == 8192) return L"OCM__BASE";
	if (msg == 8193) return L"CCM_SETBKCOLOR";
	if (msg == 8194) return L"CCM_SETCOLORSCHEME";
	if (msg == 8195) return L"CCM_GETCOLORSCHEME";
	if (msg == 8196) return L"CCM_GETDROPTARGET";
	if (msg == 8197) return L"CCM_SETUNICODEFORMAT";
	if (msg == 8197) return L"LVM_SETUNICODEFORMAT";
	if (msg == 8198) return L"CCM_GETUNICODEFORMAT";
	if (msg == 8198) return L"LVM_GETUNICODEFORMAT";
	if (msg == 8199) return L"CCM_SETVERSION";
	if (msg == 8200) return L"CCM_GETVERSION";
	if (msg == 8201) return L"CCM_SETNOTIFYWINDOW";
	if (msg == 8203) return L"CCM_SETWINDOWTHEME";
	if (msg == 8204) return L"CCM_DPISCALE";
	if (msg == 8217) return L"OCM_CTLCOLOR";
	if (msg == 8235) return L"OCM_DRAWITEM";
	if (msg == 8236) return L"OCM_MEASUREITEM";
	if (msg == 8237) return L"OCM_DELETEITEM";
	if (msg == 8238) return L"OCM_VKEYTOITEM";
	if (msg == 8239) return L"OCM_CHARTOITEM";
	if (msg == 8249) return L"OCM_COMPAREITEM";
	if (msg == 8270) return L"OCM_NOTIFY";
	if (msg == 8465) return L"OCM_COMMAND";
	if (msg == 8468) return L"OCM_HSCROLL";
	if (msg == 8469) return L"OCM_VSCROLL";
	if (msg == 8498) return L"OCM_CTLCOLORMSGBOX";
	if (msg == 8499) return L"OCM_CTLCOLOREDIT";
	if (msg == 8500) return L"OCM_CTLCOLORLISTBOX";
	if (msg == 8501) return L"OCM_CTLCOLORBTN";
	if (msg == 8502) return L"OCM_CTLCOLORDLG";
	if (msg == 8503) return L"OCM_CTLCOLORSCROLLBAR";
	if (msg == 8504) return L"OCM_CTLCOLORSTATIC";
	if (msg == 8704) return L"OCM_PARENTNOTIFY";
	if (msg == 8720) return L"OCM_PARENTNOTIFY";
	if (msg == 32768) return L"WM_APP";
	if (msg == 52429) return L"WM_RASDIALEVENT";
	return L"???";
}

LPCWSTR get_nm_code_name(UINT code) {
    if (code == NM_OUTOFMEMORY) return L"NM_OUTOFMEMORY";
    if (code == NM_CLICK) return L"NM_CLICK";
    if (code == NM_DBLCLK) return L"NM_DBLCLK";
    if (code == NM_RETURN) return L"NM_RETURN";
    if (code == NM_RCLICK) return L"NM_RCLICK";
    if (code == NM_RDBLCLK) return L"NM_RDBLCLK";
    if (code == NM_SETFOCUS) return L"NM_SETFOCUS";
    if (code == NM_KILLFOCUS) return L"NM_KILLFOCUS";
    if (code == NM_CUSTOMDRAW) return L"NM_CUSTOMDRAW";
    if (code == NM_HOVER) return L"NM_HOVER";
    if (code == NM_NCHITTEST) return L"NM_NCHITTEST";
    if (code == NM_KEYDOWN) return L"NM_KEYDOWN";
    if (code == NM_RELEASEDCAPTURE) return L"NM_RELEASEDCAPTURE";
    if (code == NM_SETCURSOR) return L"NM_SETCURSOR";
    if (code == NM_CHAR) return L"NM_CHAR";
    if (code == NM_TOOLTIPSCREATED) return L"NM_TOOLTIPSCREATED";
    if (code == NM_LDOWN) return L"NM_LDOWN";
    if (code == NM_RDOWN) return L"NM_RDOWN";
    if (code == NM_THEMECHANGED) return L"NM_THEMECHANGED";
    if (code == NM_FONTCHANGED) return L"NM_FONTCHANGED";
    if (code == NM_CUSTOMTEXT) return L"NM_CUSTOMTEXT";
    if (code == NM_TVSTATEIMAGECHANGING) return L"NM_TVSTATEIMAGECHANGING";
    return L"???";
}

void GetAllWindowsFromProcessID(DWORD dwProcessID, std::vector<HWND>& vhWnds)
{
    TCHAR buff[512];
#define DBG_HWND(x) \
        { \
            GetWindowText(x, buff, 512); \
            OutputDebugString(buff); \
            OutputDebugString(L" - "); \
            GetClassName(x, buff, 512); \
            OutputDebugString(buff); \
            OutputDebugString(L"\n"); \
        }


    // find all hWnds (vhWnds) associated with a process id (dwProcessID)
    HWND hCurWnd = NULL;
    do
    {
        hCurWnd = FindWindowEx(NULL, hCurWnd, NULL, NULL);
        if (hCurWnd != NULL)
        {
            DBG_HWND(hCurWnd);
            if (!StrCmpW(L"#32770", buff)) {
                OutputDebugString(L"");
            }
            DWORD curProcessID = 0;
            DWORD iii = GetWindowThreadProcessId(hCurWnd, &curProcessID);
            if (curProcessID == dwProcessID)
            {
                vhWnds.push_back(hCurWnd);  // add the found hCurWnd to the vector
                std::wstringstream ss;
                ss << L"Found hWnd " << hCurWnd << std::endl;
                OutputDebugString(ss.str().c_str());
            }
        }
    } while (hCurWnd != NULL);
}

void GetAllChildWindowsFromParent(HWND parent, std::vector<HWND>& vhWnds)
{
    TCHAR buff[512];
    DWORD tpid = 0;
    DWORD ownerTid = GetWindowThreadProcessId(parent, &tpid);
    ASSERT(ownerTid);

    // find all hWnds (vhWnds) associated with a process id (dwProcessID)
    HWND hCurWnd = NULL;
    do
    {
        hCurWnd = FindWindowEx(parent, hCurWnd, NULL, NULL);
        if (hCurWnd != NULL)
        {
            //DBG_HWND(hCurWnd);
            //if (!StrCmpW(L"#32770", buff)) {
            //    OutputDebugString(L"");
            //}
            DWORD curProcessID = 0;
            DWORD iii = GetWindowThreadProcessId(hCurWnd, &curProcessID);
            if (curProcessID == tpid)
            {
                vhWnds.push_back(hCurWnd);  // add the found hCurWnd to the vector
                //std::wstringstream ss;
                //ss << L"Found hWnd " << hCurWnd << std::endl;
                //OutputDebugString(ss.str().c_str());
            }
        }
    } while (hCurWnd != NULL);
}


const _cfg_type* load_config() {
    static BOOL config_loaded = FALSE;
    static _cfg_type _cfg;

    if (config_loaded) return &_cfg;
    config_loaded = TRUE;

    HMODULE hm = NULL;
    BOOL lr = GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (LPCTSTR)load_config, &hm);
    ASSERT(lr);
    ASSERT(hm);
    WCHAR path[MAX_PATH];
    GetModuleFileNameW(hm, path, MAX_PATH);
    CStringW inifn(path);
    inifn.Append(L".ini");
    OutputDebugString(L"INI filename: " + inifn + L"\n");

    if (!std::filesystem::exists(inifn.GetString())) {
        std::ofstream myfile;
        myfile.open(inifn.GetString());
        myfile << "menubar_textcolor = 213,213,213" << std::endl;
        myfile << "menubar_textcolor_disabled = 160,160,160" << std::endl;
        myfile << "menubar_bgcolor = 45,45,45" << std::endl;
        myfile << "menubaritem_bgcolor = 45,45,45" << std::endl;
        myfile << "menubaritem_bgcolor_hot = 65,65,65" << std::endl;
        myfile << "menubaritem_bgcolor_selected = 55,55,55" << std::endl;
        myfile.close();
    }

    inipp::Ini<char> ini;
    std::ifstream is(inifn.GetString());
    ini.parse(is);
    is.close();
    std::ostringstream oss;
    ini.generate(oss);
    OutputDebugStringA(oss.str().c_str());
    OutputDebugString(L"\n");
    OutputDebugStringA(ini.sections[""]["bkgd"].c_str());
    OutputDebugString(L"\n");

#define _PARSE_COLOR(x) \
    { \
        int r, g, b; \
        char comma; \
        std::stringstream ss(ini.sections[""][#x]); \
        ss >> r >> comma >> g >> comma >> b; \
        _cfg.x = RGB(r, g, b); \
    }

    _PARSE_COLOR(menubar_textcolor);
    _PARSE_COLOR(menubar_textcolor_disabled);

#define _PARSE_COLOR_BRUSH(x) \
    { \
        int r, g, b; \
        char comma; \
        std::stringstream ss(ini.sections[""][#x]); \
        ss >> r >> comma >> g >> comma >> b; \
        _cfg.x = CreateSolidBrush(RGB(r, g, b)); \
    }

    _PARSE_COLOR(menubar_bgcolor);
    _PARSE_COLOR(menubaritem_bgcolor);
    _PARSE_COLOR(menubaritem_bgcolor_hot);
    _PARSE_COLOR(menubaritem_bgcolor_selected);

    _cfg.menubar_bgbrush = CreateSolidBrush(_cfg.menubar_bgcolor);
    _cfg.menubaritem_bgbrush = CreateSolidBrush(_cfg.menubaritem_bgcolor);
    _cfg.menubaritem_bgbrush_hot = CreateSolidBrush(_cfg.menubaritem_bgcolor_hot);
    _cfg.menubaritem_bgbrush_selected = CreateSolidBrush(_cfg.menubaritem_bgcolor_selected);

    return &_cfg;
}

bool isClass(HWND hwnd, const TCHAR* classname) {
    TCHAR buf[512];
    GetClassName(hwnd, buf, 512);
    return wcsicmp(classname, buf) == 0;
}

bool classStartsWith(HWND hwnd, const TCHAR* classname) {
    TCHAR buf[512];
    GetClassName(hwnd, buf, 512);
    return wcsnicmp(classname, buf, wcslen(classname)) == 0;
}

bool isParentTitleStartingWith(HWND hwnd, const TCHAR* prefix) {
    HWND parent = GetParent(hwnd);
    if (!parent) return false;
    TCHAR buf[512];
    GetWindowText(hwnd, buf, 512);
    return wcsnicmp(prefix, buf, wcslen(prefix)) == 0;
}

void dbgMsg(HWND hWnd, UINT_PTR subclass, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message) { // https://wiki.winehq.org/List_Of_Windows_Messages
    case WM_GETTEXT:
    case WM_SETCURSOR: // 0x0020 32
    case WM_NCMOUSEMOVE: // 0x00a0		160
    case WM_NCHITTEST: // 0x0084		132
    case WM_MOUSEMOVE: // 0x0200 512
    case WM_NCMOUSELEAVE: // 0x02a2		674
    case WM_TIMER:
    case 2034:
        return;
    }

    static int dupe_counter = 0;
    static int last_message = -1;
    static HWND last_hwnd = NULL;
    static UINT_PTR last_subclass = -1;
    if (message == last_message && hWnd == last_hwnd) {
        dupe_counter++;
    }
    else {
        if (dupe_counter) {
            std::wstringstream str;
            WCHAR tmp[64];
            swprintf_s(tmp, 64, L"%p", last_hwnd);
            WCHAR tmp2[8];
            swprintf_s(tmp2, 8, L" 0x%04x", last_message);
            std::wstring s1 = std::format(L"{:%T}", std::chrono::system_clock::now());
            str << s1 << L" dbgMsg(" << tmp << L"," << last_subclass << L")" << L" Suppressed " << dupe_counter << " sequential messages of the same type" << tmp2 << L" " << get_message_name(last_message) << std::endl;
            OutputDebugString(str.str().c_str());
            dupe_counter = 0;
        }
        last_message = message;
        last_hwnd = hWnd;
        last_subclass = subclass;
    }
    if (dupe_counter == 0) {
        HWND parent = GetParent(hWnd);
        WCHAR _parent[64];
        swprintf_s(_parent, 64, L" (parent=%p)", parent);
        WCHAR tmp[64];
        swprintf_s(tmp, 64, L"%p", hWnd);
        WCHAR tmp2[8];
        swprintf_s(tmp2, 8, L" 0x%04x", message);

        WCHAR tmp_style[64];
        DWORD style = GetWindowLongPtr(hWnd, GWL_STYLE);
        swprintf_s(tmp_style, 64, L" (style=0x%08x)", style);

        TCHAR wtxt[512];
        TCHAR wcls[512];
        GetWindowText(hWnd, wtxt, 512);
        GetClassName(hWnd, wcls, 512);

        if (!wcscmp(wcls, L"REAPERwnd")) { // remove private data from debug output
            PWCHAR pos = wcsstr(wtxt, L" - Registered");
            if (pos) {
                *pos = L'\0';
            }
        }

        std::wstringstream str;
        str << L" dbgMsg(" << tmp << L"," << subclass << L") '" << wcls << L"'(" << wtxt << L") " << get_message_name(message) << tmp2 << L"(" << message << L"), " \
            << wParam << L", " << lParam << _parent << tmp_style << std::endl;
        OutputDebugString(str.str().c_str());

        if (message == WM_NOTIFY)
        {
            std::wstringstream str;
            const NMHDR* hdr = (LPNMHDR)lParam;
            DWORD style = GetWindowLongPtr(hdr->hwndFrom, GWL_STYLE);
            str << "    WM_NOTIFY: idFrom=" << hdr->idFrom << ", hwndFrom=" << hdr->hwndFrom
                << ", code=" << hdr->code << " " << get_nm_code_name(hdr->code) << ", style=" << style << std::endl;
            OutputDebugString(str.str().c_str());
        }
    }
}

void SendInputF11()
{
    INPUT inputs[2] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_F11;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = VK_F11;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    ASSERT(uSent == ARRAYSIZE(inputs));
}
