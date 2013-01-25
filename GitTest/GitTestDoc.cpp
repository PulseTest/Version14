// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://msdn.microsoft.com/officeui.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// GitTestDoc.cpp : implementation of the CGitTestDoc class
//

#include "stdafx.h"
#include "GitTest.h"

#include "GitTestDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGitTestDoc

IMPLEMENT_DYNCREATE(CGitTestDoc, CDocument)

BEGIN_MESSAGE_MAP(CGitTestDoc, CDocument)
END_MESSAGE_MAP()


// CGitTestDoc construction/destruction

CGitTestDoc::CGitTestDoc()
{
	// TODO: add one-time construction code here

}

CGitTestDoc::~CGitTestDoc()
{
}

BOOL CGitTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CGitTestDoc serialization

void CGitTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CGitTestDoc diagnostics

#ifdef _DEBUG
void CGitTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGitTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGitTestDoc commands
