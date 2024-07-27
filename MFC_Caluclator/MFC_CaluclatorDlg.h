
// MFC_CaluclatorDlg.h: 头文件
//

#pragma once

enum Calculator_Flag {//枚举类型的运算符
	flag_add,
	flag_minus,
	flag_multiple,
	flag_divide,
	flag_square,
	flag_squareroot,
	flag_cube,
	flag_cuberoot,
	flag_npower,
	flag_kainfang,
	flag_HTD,
	flag_OTD,
	flag_BTD,
	flag_H,
	flag_O,
	flag_B,
	flag_jiecheng,
	flag_mod,
	flag_lnx,
	flag_lognx,
	flag_ex,
	flag_sinx,
	flag_cosx,
	flag_tanx,
	flag_Bin,//二进制
	flag_Hex,//十六进制
	flag_Oct,//八进制
	flag_OctToDec,
	flag_BinToDec,
	flag_HexToDec,
	//将所有运算类型用标志类型储存
};


// CMFCCaluclatorDlg 对话框
class CMFCCaluclatorDlg : public CDialogEx
{
// 构造
public:
	CMFCCaluclatorDlg(CWnd* pParent = nullptr);	// 标准构造函数
	CFont my_Font1;
	CFont my_Font;
	CFont my_Font2;
	CBrush my_brush;
	void SaveFirstNumber();//input first one
	void RunCalculator();//calculate
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_CALUCLATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CString mStr;//editing text1
	CString mStr1;//editing text2
	CString mStr2;
	CString mStr3;
	CString mStr4;
	CString mStr5;
	CString mStr6;
	CString mStr7;
	CString mStr8;
	CString mStr9;
	CString mStr10;
	CString mTempStr;
	double mNum1;
	double mNum2;
	Calculator_Flag m_Flag;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnEnChangeEdit12();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit11();
	CEdit out1;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnStnClickedStatic3();
	CStatic m_Static;
	CStatic m_static2;
};
