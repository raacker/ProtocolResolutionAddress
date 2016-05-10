#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// proxyDlg ��ȭ �����Դϴ�.

class proxyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(proxyDlg)

public:
	proxyDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~proxyDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CComboBox			device;
	CIPAddressCtrl		proxyIPAddr;
	CEdit				proxyEthAddr;
	unsigned char		proxyIPAddrString[4];
	CString				proxyMACAddr;;
	CString				selectedDevice;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};