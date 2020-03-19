// JMailDlg.h : header file
//

#if !defined(AFX_JMAILDLG_H__98F294D2_14EC_4459_8BAA_D24B20210F9B__INCLUDED_)
#define AFX_JMAILDLG_H__98F294D2_14EC_4459_8BAA_D24B20210F9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJMailDlg dialog

class CJMailDlg : public CDialog
{
// Construction
public:
	CJMailDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJMailDlg)
	enum { IDD = IDD_JMAIL_DIALOG };
	CString	strserver;
	CString	strsubject;
	CString	strrece;
	CString	strfrom;
	CString	strbody;
	CString	stratt;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJMailDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJMailDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAdd();
	afx_msg void OnBtsend();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JMAILDLG_H__98F294D2_14EC_4459_8BAA_D24B20210F9B__INCLUDED_)
