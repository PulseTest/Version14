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

// GitTestView.cpp : implementation of the CGitTestView class
//

#include "stdafx.h"
#include "GitTest.h"

#include "GitTestDoc.h"
#include "GitTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGitTestView

IMPLEMENT_DYNCREATE(CGitTestView, CView)

BEGIN_MESSAGE_MAP(CGitTestView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGitTestView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CGitTestView construction/destruction

CGitTestView::CGitTestView()
{
	// TODO: add construction code here

}

CGitTestView::~CGitTestView()
{
}

BOOL CGitTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CGitTestView drawing

void CGitTestView::OnDraw(CDC* /*pDC*/)
{
	CGitTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CGitTestView printing


void CGitTestView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CGitTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGitTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGitTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CGitTestView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGitTestView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CGitTestView diagnostics

#ifdef _DEBUG
void CGitTestView::AssertValid() const
{
	CView::AssertValid();
}

void CGitTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGitTestDoc* CGitTestView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGitTestDoc)));
	return (CGitTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CGitTestView message handlers
