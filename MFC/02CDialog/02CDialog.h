
// 02CDialog.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy02CDialogApp: 
// �йش����ʵ�֣������ 02CDialog.cpp
//

class CMy02CDialogApp : public CWinApp
{
public:
	CMy02CDialogApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy02CDialogApp theApp;