// JMailDlg.cpp : implementation file
//

#include "stdafx.h"
#include "JMail.h"
#include "JMailDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJMailDlg dialog

CJMailDlg::CJMailDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJMailDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJMailDlg)
	strserver = _T("");
	strsubject = _T("");
	strrece = _T("");
	strfrom = _T("");
	strbody = _T("");
	stratt = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJMailDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJMailDlg)
	DDX_Text(pDX, IDC_SMTP, strserver);
	DDX_Text(pDX, IDC_EDSUBJECT, strsubject);
	DDX_Text(pDX, IDC_EDRECE, strrece);
	DDX_Text(pDX, IDC_EDFROM, strfrom);
	DDX_Text(pDX, IDC_EDBODY, strbody);
	DDX_Text(pDX, IDC_EDATT, stratt);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJMailDlg, CDialog)
	//{{AFX_MSG_MAP(CJMailDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnAdd)
	ON_BN_CLICKED(IDC_BUTTON2, OnBtsend)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJMailDlg message handlers

BOOL CJMailDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	GetDlgItem(IDC_SMTP)->SetWindowText("smtp.163.com");
	GetDlgItem(IDC_EDFROM)->SetWindowText("wwuhnwu@163.com");
	GetDlgItem(IDC_EDRECE)->SetWindowText("wwuhnwu@163.com");
	GetDlgItem(IDC_EDSUBJECT)->SetWindowText("website.rar");
	GetDlgItem(IDC_EDATT)->SetWindowText("C:\\Users\\wwuhnwu01\\Desktop\\website.rar");
	GetDlgItem(IDC_EDBODY)->SetWindowText("");
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJMailDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJMailDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJMailDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CJMailDlg::OnAdd() 
{
	CFileDialog file(true,"file",NULL,OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, "所有文件|*.*||",this);
	if(file.DoModal()==IDOK)
	{
		CString str;
		str=file.GetPathName();
		GetDlgItem(IDC_EDATT)->SetWindowText(str);
	}
}

void CJMailDlg::OnBtsend() 
{
	CString strserver;
	CString strrece;
	CString strsubject;
	CString strbody;
	CString stratt;
	CString strfrom;
	GetDlgItem(IDC_EDRECE)->GetWindowText(strrece);
	GetDlgItem(IDC_EDSUBJECT)->GetWindowText(strsubject);
	GetDlgItem(IDC_EDBODY)->GetWindowText(strbody);
	GetDlgItem(IDC_EDATT)->GetWindowText(stratt);
	GetDlgItem(IDC_SMTP)->GetWindowText(strserver);
	GetDlgItem(IDC_EDFROM)->GetWindowText(strfrom);
	if(strfrom.IsEmpty())
	{
		AfxMessageBox("请填写发信人地址");
		return;
	}
	if(strrece.IsEmpty())
	{
		AfxMessageBox("请填写收信人地址");
		return;
	}
	jmail::IMessagePtr jmsg;
	jmsg.CreateInstance(__uuidof(jmail::Message));
	jmsg->AddRecipient((LPCTSTR)strrece,"","");
	jmsg->Subject=(LPCTSTR)strsubject;
	jmsg->Body=(LPCTSTR)strbody;
	jmsg->From=(LPCTSTR)strfrom;
	jmsg->MailServerUserName = "wwuhnwu@163.com";
	jmsg->MailServerPassWord = "63695694Wu";//发送邮箱密码
	jmsg->AddCustomAttachment((_bstr_t)stratt,(_bstr_t)"jmail",VARIANT_FALSE);
	try{
		//jmsg->Send((LPCTSTR)strserver,VARIANT_FALSE);
		//jmsg->Send("smtp.163.com", VARIANT_FALSE);
		jmsg->Send(strserver.GetBuffer(0),VARIANT_FALSE);
	}
	catch(_com_error e)
	{
		CString strerr;
		strerr.Format("%s\r\n错误描述是%s",(LPCTSTR)e.ErrorMessage(),
			(LPCTSTR)e.Description());
		AfxMessageBox(strerr);
	}
	//AfxMessageBox("发送成功");
	//m_status = "sended successfully!";
	GetDlgItem(IDC_status)->SetWindowText("sended successfully!");

}
