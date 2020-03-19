; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CJMailDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "JMail.h"

ClassCount=3
Class1=CJMailApp
Class2=CJMailDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_JMAIL_DIALOG

[CLS:CJMailApp]
Type=0
HeaderFile=JMail.h
ImplementationFile=JMail.cpp
Filter=N

[CLS:CJMailDlg]
Type=0
HeaderFile=JMailDlg.h
ImplementationFile=JMailDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_status

[CLS:CAboutDlg]
Type=0
HeaderFile=JMailDlg.h
ImplementationFile=JMailDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_JMAIL_DIALOG]
Type=1
Class=CJMailDlg
ControlCount=16
Control1=IDC_SMTP,edit,1350631552
Control2=IDC_EDFROM,edit,1350631552
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_EDRECE,edit,1350631552
Control5=IDC_EDSUBJECT,edit,1350631552
Control6=IDC_EDATT,edit,1350631552
Control7=IDC_EDBODY,edit,1350631552
Control8=IDC_BUTTON2,button,1342242816
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,static,1342308352
Control15=IDC_status,edit,1342242816
Control16=IDC_STATIC,static,1342308352

