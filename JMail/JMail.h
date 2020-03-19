// JMail.h : main header file for the JMAIL application
//

#if !defined(AFX_JMAIL_H__728ACAA1_C018_4E77_BC38_4412E79F777B__INCLUDED_)
#define AFX_JMAIL_H__728ACAA1_C018_4E77_BC38_4412E79F777B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJMailApp:
// See JMail.cpp for the implementation of this class
//

class CJMailApp : public CWinApp
{
public:
	CJMailApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJMailApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJMailApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JMAIL_H__728ACAA1_C018_4E77_BC38_4412E79F777B__INCLUDED_)
