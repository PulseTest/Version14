// TestDialog.cpp : implementation file
//

#include "stdafx.h"
#include "GitTest.h"
#include "TestDialog.h"


// CTestDialog dialog

IMPLEMENT_DYNAMIC(CTestDialog, CDialog)

CTestDialog::CTestDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDialog::IDD, pParent)
{

}

CTestDialog::~CTestDialog()
{
}

void CTestDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTestDialog, CDialog)
END_MESSAGE_MAP()


// CTestDialog message handlers
