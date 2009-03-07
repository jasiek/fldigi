// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef confdialog_h
#define confdialog_h
#include <FL/Fl.H>
#include "globals.h"
#include "modem.h"
#include "configuration.h"
extern Fl_Double_Window *dlgConfig; 
void set_qrz_buttons(Fl_Button* b);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *tabsConfigure;
#include <FL/Fl_Group.H>
extern Fl_Group *tabOperator;
extern Fl_Input2 *inpMyCallsign;
extern Fl_Input2 *inpMyName;
extern Fl_Input2 *inpMyQth;
extern Fl_Input2 *inpMyLocator;
extern Fl_Input2 *inpMyAntenna;
extern Fl_Group *tabUI;
extern Fl_Tabs *tabsUI;
extern Fl_Group *tabUserInterface;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btnShowTooltips;
extern Fl_Check_Button *chkMenuIcons;
#include <FL/Fl_Choice.H>
extern Fl_Choice *mnuScheme;
extern Fl_Check_Button *btnRXClicks;
extern Fl_Check_Button *btnRXTooltips;
extern Fl_Check_Button *btnNagMe;
extern Fl_Check_Button *btnClearOnSave;
extern Fl_Check_Button *btnAutoFillQSO;
extern Fl_Check_Button *btnCallUpperCase;
extern Fl_Input2 *inpMyPower;
extern Fl_Group *tabWfallRestart;
#include <FL/Fl_Counter.H>
extern Fl_Counter *cntrWfwidth;
extern Fl_Counter *cntrWfheight;
extern Fl_Check_Button *btnDockedScope;
extern Fl_Check_Button *btnDockedRigControl;
extern Fl_Check_Button *btnCheckButtons;
extern Fl_Group *tabContest;
#include <FL/Fl_Box.H>
extern Fl_Box *lblSend;
extern Fl_Input2 *inpSend1;
extern Fl_Check_Button *btn599;
extern Fl_Check_Button *btnCutNbrs;
extern Fl_Check_Button *btnUseLeadingZeros;
#include <FL/Fl_Value_Input.H>
extern Fl_Value_Input *nbrContestStart;
extern Fl_Value_Input *nbrContestDigits;
#include <FL/Fl_Button.H>
extern Fl_Button *btnResetSerNbr;
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *btnDupCheckOn;
extern Fl_Check_Button *btnDupBand;
extern Fl_Check_Button *btnDupMode;
extern Fl_Check_Button *btnDupState;
extern Fl_Check_Button *btnDupXchg1;
extern Fl_Check_Button *btnDupTimeSpan;
extern Fl_Value_Input *nbrTimeSpan;
extern Fl_Group *tabWaterfall;
extern Fl_Tabs *tabsWaterfall;
#include "colorbox.h"
extern colorbox *WF_Palette;
extern Fl_Button *btnColor[9];
extern Fl_Button *btnLoadPalette;
extern Fl_Button *btnSavePalette;
extern Fl_Check_Button *btnUseCursorLines;
#include <FL/Fl_Color_Chooser.H>
extern Fl_Button *btnCursorBWcolor;
extern Fl_Check_Button *btnUseCursorCenterLine;
extern Fl_Button *btnCursorCenterLineColor;
extern Fl_Check_Button *btnUseBWTracks;
extern Fl_Button *btnBwTracksColor;
extern Fl_Check_Button *chkShowAudioScale;
extern Fl_Button *btnWaterfallFont;
extern Fl_Check_Button *btnViewXmtSignal;
#include <FL/Fl_Value_Slider.H>
extern Fl_Value_Slider *valTxMonitorLevel;
extern Fl_Counter *cntLowFreqCutoff;
extern Fl_Counter *valLatency;
extern Fl_Check_Button *btnWFaveraging;
extern Fl_Choice *mnuFFTPrefilter;
extern Fl_Check_Button *btnWaterfallHistoryDefault;
extern Fl_Check_Button *btnWaterfallQSY;
extern Fl_Check_Button *btnWaterfallClickInsert;
extern Fl_Input2 *inpWaterfallClickText;
extern Fl_Choice *mnuWaterfallWheelAction;
extern Fl_Group *tabModems;
extern Fl_Tabs *tabsModems;
extern Fl_Group *tabCW;
extern Fl_Tabs *tabsCW;
extern Fl_Value_Slider *sldrCWbandwidth;
extern Fl_Check_Button *btnCWrcvTrack;
extern Fl_Counter *cntCWrange;
#include <FL/Fl_Value_Output.H>
extern Fl_Value_Output *valCWrcvWPM;
#include <FL/Fl_Progress.H>
extern Fl_Progress *prgsCWrcvWPM;
extern Fl_Value_Slider *sldrCWxmtWPM;
extern Fl_Counter *cntCWdefWPM;
extern Fl_Counter *cntCWlowerlimit;
extern Fl_Counter *cntCWupperlimit;
extern Fl_Counter *cntCWweight;
extern Fl_Counter *cntCWdash2dot;
extern Fl_Counter *cntCWrisetime;
extern Fl_Check_Button *btnQSK;
extern Fl_Counter *cntPreTiming;
extern Fl_Counter *cntPostTiming;
extern Fl_Check_Button *btnQSKadjust;
extern char szTestChar[];
extern Fl_Choice *mnuTestChar;
extern Fl_Group *tabDomEX;
extern Fl_Input2 *txtSecondary;
extern Fl_Check_Button *valDominoEX_FILTER;
extern Fl_Counter *valDominoEX_BW;
extern Fl_Check_Button *chkDominoEX_FEC;
extern Fl_Value_Slider *valDomCWI;
extern Fl_Counter *valDominoEX_PATHS;
extern Fl_Group *tabFeld;
#include "fontdef.h"
extern Fl_Choice *selHellFont;
extern Fl_Check_Button *btnBlackboard;
#include <FL/Fl_Spinner.H>
extern Fl_Spinner *valHellXmtWidth;
extern Fl_Check_Button *btnHellRcvWidth;
extern Fl_Choice *mnuHellPulse;
extern Fl_Value_Slider *sldrHellBW;
extern Fl_Check_Button *btnFeldHellIdle;
extern Fl_Check_Button *btnHellXmtWidth;
extern Fl_Group *tabMT63;
extern Fl_Check_Button *btnmt63_interleave;
extern Fl_Check_Button *btnMT63_8bit;
extern Fl_Group *tabOlivia;
extern Fl_Choice *mnuOlivia_Bandwidth;
extern Fl_Choice *mnuOlivia_Tones;
extern Fl_Counter *cntOlivia_smargin;
extern Fl_Counter *cntOlivia_sinteg;
extern Fl_Check_Button *btnOlivia_8bit;
extern Fl_Group *tabPSK;
extern Fl_Tabs *tabsPSK;
extern Fl_Counter *cntSearchRange;
extern Fl_Counter *cntACQsn;
extern Fl_Choice *mnuPSKStatusTimeout;
extern Fl_Check_Button *btnPSKmailSweetSpot;
extern Fl_Counter *cntServerOffset;
extern Fl_Check_Button *btnMarquee;
extern Fl_Spinner *cntChannels;
extern Fl_Spinner *cntStartFrequency;
extern Fl_Spinner *cntTimeout;
extern Fl_Choice *mnuViewerLabel;
extern Fl_Group *tabRTTY;
extern Fl_Choice *selShift;
extern Fl_Choice *selBaud;
extern Fl_Choice *selBits;
extern Fl_Choice *selParity;
extern Fl_Choice *selStopBits;
extern Fl_Check_Button *btnAUTOCRLF;
extern Fl_Check_Button *btnCRCRLF;
extern Fl_Counter *cntrAUTOCRLF;
extern Fl_Check_Button *chkUOSrx;
extern Fl_Check_Button *chkUOStx;
extern Fl_Check_Button *btnPreferXhairScope;
extern Fl_Check_Button *chkPseudoFSK;
extern Fl_Choice *mnuRTTYAFCSpeed;
extern Fl_Check_Button *chkXagc;
extern Fl_Value_Slider *sldrRTTYbandwidth;
extern Fl_Group *tabTHOR;
extern Fl_Input2 *txtTHORSecondary;
extern Fl_Check_Button *valTHOR_FILTER;
extern Fl_Counter *valTHOR_BW;
extern Fl_Check_Button *valTHOR_SOFT;
extern Fl_Value_Slider *valThorCWI;
extern Fl_Counter *valTHOR_PATHS;
extern Fl_Group *tabRig;
extern Fl_Tabs *tabsRig;
#include <FL/Fl_Round_Button.H>
extern Fl_Group *grpHWPTT;
#include <FL/Fl_Input_Choice.H>
extern Fl_Input_Choice *inpTTYdev;
extern Fl_Round_Button *btnRTSptt;
extern Fl_Round_Button *btnRTSplusV;
extern Fl_Round_Button *btnDTRptt;
extern Fl_Round_Button *btnDTRplusV;
extern Fl_Button *btnInitHWPTT;
extern Fl_Check_Button *btnPTTrightchannel;
extern Fl_Check_Button *chkUSERIGCAT;
extern Fl_Group *grpRigCAT;
#include <FL/Fl_Output.H>
extern Fl_Output *txtXmlRigFilename;
extern Fl_Button *btnSelectRigXmlFile;
extern Fl_Input_Choice *inpXmlRigDevice;
extern Fl_Choice *mnuXmlRigBaudrate;
extern Fl_Counter *cntRigCatRetries;
extern Fl_Counter *cntRigCatTimeout;
extern Fl_Counter *cntRigCatWait;
extern Fl_Button *btnInitRIGCAT;
extern Fl_Check_Button *btnRigCatEcho;
extern Fl_Group *grpRigCATPTT;
extern Fl_Round_Button *btnRigCatRTSptt;
extern Fl_Round_Button *btnRigCatDTRptt;
extern Fl_Check_Button *btnRigCatRTSplus;
extern Fl_Check_Button *btnRigCatDTRplus;
extern Fl_Check_Button *chkRigCatRTSCTSflow;
extern Fl_Round_Button *btnPTT[6];
extern Fl_Check_Button *chkUSEHAMLIB;
extern Fl_Group *grpHamlib;
extern Fl_ComboBox *cboHamlibRig;
extern Fl_Input_Choice *inpRIGdev;
extern Fl_Choice *mnuBaudRate;
extern Fl_Counter *cntHamlibtRetries;
extern Fl_Counter *cntHamlibTimeout;
extern Fl_Counter *cntHamlibWait;
extern Fl_Input2 *inpHamlibConfig;
extern Fl_Button *btnInitHAMLIB;
extern Fl_Group *grpHamlibPTT;
extern Fl_Check_Button *btnHamlibDTRplus;
extern Fl_Check_Button *chkHamlibRTSplus;
extern Fl_Check_Button *chkHamlibRTSCTSflow;
extern Fl_Check_Button *chkHamlibXONXOFFflow;
extern Fl_Group *grpMemmap;
extern Fl_Check_Button *chkUSEMEMMAP;
extern Fl_Button *btnInitMEMMAP;
extern Fl_Group *grpXMLRPC;
extern Fl_Check_Button *chkUSEXMLRPC;
extern Fl_Button *btnInitXMLRPC;
extern Fl_Group *tabSoundCard;
extern Fl_Tabs *tabsSoundCard;
extern Fl_Group *tabAudio;
extern Fl_Group *AudioOSS;
extern Fl_Input_Choice *menuOSSDev;
extern Fl_Group *AudioPort;
extern Fl_Choice *menuPortInDev;
extern Fl_Choice *menuPortOutDev;
extern Fl_Group *AudioPulse;
extern Fl_Input2 *inpPulseServer;
extern Fl_Group *AudioNull;
extern Fl_Round_Button *btnAudioIO[4];
extern Fl_Group *tabAudioOpt;
extern Fl_Group *AudioSampleRate;
extern Fl_Choice *menuInSampleRate;
#include <FL/fl_ask.H>
extern Fl_Choice *menuSampleConverter;
extern Fl_Choice *menuOutSampleRate;
extern Fl_Spinner *cntRxRateCorr;
extern Fl_Spinner *cntTxRateCorr;
extern Fl_Spinner *cntTxOffset;
extern Fl_Group *tabMixer;
extern void resetMixerControls();
extern Fl_Check_Button *btnMixer;
extern Fl_Input_Choice *menuMix;
extern Fl_Light_Button *btnMicIn;
extern void setMixerInput(int);
extern Fl_Light_Button *btnLineIn;
extern void setPCMvolume(double);
extern Fl_Value_Slider *valPCMvolume;
extern Fl_Group *tabID;
extern Fl_Check_Button *btnsendid;
extern Fl_Check_Button *btnsendvideotext;
extern Fl_Input2 *valVideotext;
extern Fl_Check_Button *chkID_SMALL;
extern Fl_Value_Slider *sldrVideowidth;
extern Fl_Group *sld;
extern Fl_Check_Button *btnCWID;
extern Fl_Value_Slider *sldrCWIDwpm;
extern Fl_Check_Button *chkTransmitRSid;
extern Fl_Check_Button *chkRSidWideSearch;
extern Fl_Group *tabMisc;
extern Fl_Tabs *tabsMisc;
extern Fl_Group *tabSweetSpot;
extern Fl_Value_Input *valCWsweetspot;
extern Fl_Value_Input *valRTTYsweetspot;
extern Fl_Value_Input *valPSKsweetspot;
extern Fl_Check_Button *btnStartAtSweetSpot;
extern Fl_Group *tabSpot;
extern Fl_Check_Button *btnPSKRepAuto;
extern Fl_Check_Button *btnPSKRepLog;
extern Fl_Check_Button *btnPSKRepQRG;
extern Fl_Input2 *inpPSKRepHost;
extern Fl_Input2 *inpPSKRepPort;
extern Fl_Button *btnPSKRepInit;
extern Fl_Box *boxPSKRepMsg;
extern Fl_Group *tabMacros;
extern Fl_Check_Button *btnUseLastMacro;
extern Fl_Check_Button *btnDisplayMacroFilename;
extern Fl_Group *tabCPUspeed;
extern Fl_Check_Button *chkSlowCpu;
extern Fl_Group *tabFileExtraction;
extern Fl_Check_Button *chkAutoExtract;
#include "rx_extract.h"
extern Fl_Check_Button *chkRxStream;
#include "speak.h"
extern Fl_Group *tabQRZ;
extern Fl_Round_Button *btnQRZcdrom;
extern Fl_Input2 *txtQRZpathname;
extern Fl_Round_Button *btnQRZsub;
extern Fl_Round_Button *btnHamcall;
extern Fl_Input2 *inpQRZusername;
extern Fl_Input2 *inpQRZuserpassword;
extern Fl_Button *btnQRZpasswordShow;
extern Fl_Round_Button *btnQRZonline;
extern Fl_Round_Button *btnQRZnotavailable;
extern Fl_Round_Button *btnHAMCALLonline;
extern Fl_Button *btnSaveConfig;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *btnCloseConfig;
Fl_Double_Window* ConfigureDialog();
void openConfig();
void closeDialog();
void createConfig();
#endif
