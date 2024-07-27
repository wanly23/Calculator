
// MFC_CaluclatorDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFC_Caluclator.h"
#include "MFC_CaluclatorDlg.h"
#include "afxdialogex.h"
#include <string>
#define pi 3.1415926
#define radian pi/180 

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int BinOct(int n,int radix)
{
	int index = 1;
	int res = 0;
	int tmpres = 0;
	while (n != 0)
	{
		res = res + (n % radix) * index;
		n = n / radix;
		index *= 10;
	}
	return res;

}
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCCaluclatorDlg 对话框



CMFCCaluclatorDlg::CMFCCaluclatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFC_CALUCLATOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCaluclatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mStr);
	DDX_Text(pDX, IDC_EDIT3, mStr1);
	DDX_Text(pDX, IDC_EDIT4, mStr2);
	DDX_Text(pDX, IDC_EDIT5, mStr3);
	DDX_Text(pDX, IDC_EDIT6, mStr4);
	DDX_Text(pDX, IDC_EDIT7, mStr5);
	DDX_Text(pDX, IDC_EDIT8, mStr6);
	DDX_Text(pDX, IDC_EDIT9, mStr7);
	DDX_Text(pDX, IDC_EDIT10, mStr8);
	DDX_Text(pDX, IDC_EDIT11, mStr9);
	DDX_Text(pDX, IDC_EDIT12, mStr10);
	DDX_Control(pDX, IDC_EDIT1, out1);
	DDX_Control(pDX, IDC_STATIC1, m_Static);
	DDX_Control(pDX, IDC_STATIC2, m_static2);
}

BEGIN_MESSAGE_MAP(CMFCCaluclatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCCaluclatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCCaluclatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCCaluclatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCCaluclatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCCaluclatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCCaluclatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCCaluclatorDlg::OnBnClickedButton6)
	ON_EN_CHANGE(IDC_EDIT12, &CMFCCaluclatorDlg::OnEnChangeEdit12)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCCaluclatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCCaluclatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCCaluclatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCCaluclatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCCaluclatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCCaluclatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCCaluclatorDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCCaluclatorDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCCaluclatorDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCCaluclatorDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCCaluclatorDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCCaluclatorDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCCaluclatorDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFCCaluclatorDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CMFCCaluclatorDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFCCaluclatorDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON29, &CMFCCaluclatorDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFCCaluclatorDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON30, &CMFCCaluclatorDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CMFCCaluclatorDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CMFCCaluclatorDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CMFCCaluclatorDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON35, &CMFCCaluclatorDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON34, &CMFCCaluclatorDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON36, &CMFCCaluclatorDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CMFCCaluclatorDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CMFCCaluclatorDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CMFCCaluclatorDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON41, &CMFCCaluclatorDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON40, &CMFCCaluclatorDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON42, &CMFCCaluclatorDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CMFCCaluclatorDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CMFCCaluclatorDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &CMFCCaluclatorDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCCaluclatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCCaluclatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCCaluclatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCCaluclatorDlg::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCCaluclatorDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT4, &CMFCCaluclatorDlg::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT11, &CMFCCaluclatorDlg::OnEnChangeEdit11)
	ON_WM_CTLCOLOR()
	ON_STN_CLICKED(IDC_STATIC3, &CMFCCaluclatorDlg::OnStnClickedStatic3)
END_MESSAGE_MAP()


// CMFCCaluclatorDlg 消息处理程序

BOOL CMFCCaluclatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_MAXIMIZE);

	ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码

	my_Font.CreatePointFont(180, L"Arial");//创建字体和大小
	m_Static.SetFont(&my_Font);//第一个框内的字体
	my_Font1.CreatePointFont(100, L"Arial");//创建字体和大小
	m_static2.SetFont(&my_Font1);
	my_Font2.CreatePointFont(320, L"Arial");//创建字体和大小
	out1.SetFont(&my_Font);//第一个框内的字体
	//第一个框内的字体
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCCaluclatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCCaluclatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCCaluclatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCCaluclatorDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	m_Flag = flag_add;
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (!mStr.IsEmpty())
	{
		mStr = mStr.Left(mStr.GetLength() - 1);
	}
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr = L"";
	mStr1 = L"";
	mStr2 = L"";
	mStr3 = L"";
	mStr4 = L"";
	mStr5 = L"";
	mStr6 = L"";
	mStr7 = L"";
	mStr8 = L"";
	mStr9 = L"";
	mStr10 = L"";
	mNum1 = 0.0f;
	mNum2 = 0.0f;
	m_Flag = flag_add;
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_HexToDec;
}


void CMFCCaluclatorDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_Bin;
}


void CMFCCaluclatorDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_Hex;
}


void CMFCCaluclatorDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_BinToDec;
}


void CMFCCaluclatorDlg::OnEnChangeEdit12()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CMFCCaluclatorDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"B";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"C";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"D";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"E";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_jiecheng;
	RunCalculator();
}


void CMFCCaluclatorDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_mod;
	SaveFirstNumber();
}


void CMFCCaluclatorDlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"1";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"2";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton20()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"3";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton21()
{
	// TODO: 在此添加控件通知处理程序代码
	//UpdateData(TRUE);
	SaveFirstNumber();
	m_Flag = flag_add;
	//UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton23()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_lnx;
}


void CMFCCaluclatorDlg::OnBnClickedButton22()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_sinx;
	/*UpdateData(TRUE);
	mTempStr = _T("sin(") + mStr + _T(")=");
	mNum1 = _wtof(mStr);
	double f = sin(mNum1 * radian);
	if (f - (int)f <= 1e-5)
	{
		mStr.Format(L"%d", (int)f);
	}
	else
		mStr.Format(L"%f", f);
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mNum1 = f;
	mNum2 = 0.0f;
	UpdateData(FALSE);*/
}


void CMFCCaluclatorDlg::OnBnClickedButton24()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"4";
	UpdateData(FALSE);
}

int HexToDec(CString s)
{
	int index = 0;
	int res = 0;
	int len = s.GetLength();
	CString tmpstrr;
	int num = 0;
	while (len != 0)
	{
		tmpstrr = s.Right(1);
		if (tmpstrr == "0")
			num = 0;
		else if (tmpstrr == "1")
			num = 1;
		else if (tmpstrr == "2")
			num = 2;
		else if (tmpstrr == "3")
			num = 3;
		else if (tmpstrr == "4")
			num = 4;
		else if (tmpstrr == "5")
			num = 5;
		else if (tmpstrr == "6")
			num = 6;
		else if (tmpstrr == "7")
			num = 7;
		else if (tmpstrr == "8")
			num = 8;
		else if (tmpstrr == "9")
			num = 9;
		else if (tmpstrr == "A")
			num = 10;
		else if (tmpstrr == "B")
			num = 11;
		else if (tmpstrr == "C")
			num = 12;
		else if (tmpstrr == "D")
			num = 13;
		else if (tmpstrr == "E")
			num = 14;
		else if (tmpstrr == "F")
			num = 15;
		res = res + num * pow(16, index);
		index += 1;
		len -= 1;
		s = s.Left(len);
	}
	return res;
}
int BinOctToDec(CString s, int radix)
{
	int ans = 0;
	for (int i = 0; i < s.GetLength(); i++)
	{
		char t = s[i];
		if (t >= '0' && t <= '9') ans = ans * radix + t - '0';
		else ans = ans * radix + t - 'a' + 10;
	}
	return ans;
}
CString Hex(int n)
{
	CString f = _T("");
	int index = 0;
	int res = 0;
	while (n != 0)
	{
		index = n % 16;
		switch (index)
		{
		case 0:
			f = _T("0") + f;
			break;
		case 1:
			f = _T("1") + f;
			break;
		case 2:
			f = _T("2") + f;
			break;
		case 3:
			f = _T("3") + f;
			break;
		case 4:
			f = _T("4") + f;
			break;
		case 5:
			f = _T("5") + f;
			break;
		case 6:
			f = _T("6") + f;
			break;
		case 7:
			f = _T("7") + f;
			break;
		case 8:
			f = _T("8") + f;
			break;
		case 9:
			f = _T("9") + f;
			break;
		case 10:
			f = _T("A") + f;
			break;
		case 11:
			f = _T("B") + f;
			break;
		case 12:
			f = _T("C") + f;
			break;
		case 13:
			f = _T("D") + f;
			break;
		case 14:
			f = _T("E") + f;
			break;
		case 15:
			f = _T("F") + f;
			break;
		default:
			break;
		}
		n = n / 16;
	}
	return f;
}

void CMFCCaluclatorDlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"5";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton26()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"6";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton27()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstNumber();
	m_Flag = flag_minus;
}


void CMFCCaluclatorDlg::OnBnClickedButton29()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_lognx;
	SaveFirstNumber();
}


void CMFCCaluclatorDlg::OnBnClickedButton28()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_cosx;
}


void CMFCCaluclatorDlg::OnBnClickedButton30()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"7";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton31()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"8";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"9";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstNumber();
	m_Flag = flag_multiple;
}


void CMFCCaluclatorDlg::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_ex;
}


void CMFCCaluclatorDlg::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_tanx;
}


void CMFCCaluclatorDlg::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if (-1 == mStr.Find(L'.'))//found——return 1 notfound——return -1
	{
		mStr += L".";
	}
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"0";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	RunCalculator();
}


void CMFCCaluclatorDlg::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	SaveFirstNumber();
	m_Flag = flag_divide;
}


void CMFCCaluclatorDlg::OnBnClickedButton41()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_npower;
	SaveFirstNumber();
}


void CMFCCaluclatorDlg::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_kainfang;
	SaveFirstNumber();
}


void CMFCCaluclatorDlg::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_square;
}


void CMFCCaluclatorDlg::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_squareroot;
}


void CMFCCaluclatorDlg::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_cube;
}


void CMFCCaluclatorDlg::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_cuberoot;
}


void CMFCCaluclatorDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"A";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	mStr += L"F";
	UpdateData(FALSE);
}


void CMFCCaluclatorDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_Oct;
}


void CMFCCaluclatorDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	m_Flag = flag_OctToDec;
}


void CMFCCaluclatorDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CMFCCaluclatorDlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CMFCCaluclatorDlg::OnEnChangeEdit11()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CMFCCaluclatorDlg::SaveFirstNumber()
{
	UpdateData(TRUE);
	mNum1 = _wtof(mStr);
	mTempStr = mStr;
	mStr = L"";
	UpdateData(FALSE);
}
void CMFCCaluclatorDlg::RunCalculator()
{
	UpdateData(TRUE);
	mNum2 = _wtof(mStr);
	long double Getnumber = 0;//初始化
	int tmpnum = mNum2;
	switch (m_Flag) 
	{
	case flag_add:
		Getnumber = mNum1 + mNum2;
		mTempStr = mTempStr + L"+" + mStr + L"=";
		break;
	case flag_minus:
		Getnumber = mNum1 - mNum2;
		mTempStr = mTempStr + L"-" + mStr + L"=";
		break;
	case flag_multiple:
		Getnumber = mNum1 * mNum2;
		mTempStr = mTempStr + L"*" + mStr + L"=";
		break;
	case flag_divide:
		if (mNum2 == 0.0f)
		{
			Getnumber = mNum1;
			mTempStr = _T("被除数不可为零。");
		}
		else
		{
			Getnumber = mNum1 / mNum2;
			mTempStr = mTempStr + L"/" + mStr + L"=";
		}
		break;
	case flag_mod:
		Getnumber = (int)mNum1 % (int)mNum2;
		mTempStr = mTempStr + _T("%") + mStr + _T("=");
		break;
	case flag_npower:
		Getnumber = pow(mNum1, mNum2);
		mTempStr = mTempStr + L"^" + mStr + L"=";
		break;
	case flag_kainfang:
		Getnumber = pow(mNum1, 1 / mNum2);
		mTempStr = mStr + _T("√") + mTempStr + _T("=");
		break;
	case flag_cuberoot:
		Getnumber = pow(mNum2, 1.0 / 3);
		mTempStr = _T("3√") + mStr + _T("=");
		break;
	case flag_lognx:
		Getnumber = log(mNum2) / log(mNum1);
		mTempStr = _T("log") + mTempStr + _T("(") + mStr + _T(")") + _T("=");
		break;
	case flag_cube:
		Getnumber = pow(mNum2, 3);
		mTempStr = mStr + _T("^3=");
		break;
	case flag_squareroot:
		Getnumber = pow(mNum2, 1.0 / 2);
		mTempStr = _T("2√") + mStr + _T("=");
		break;
	case flag_square:
		Getnumber = pow(mNum2, 2);
		mTempStr = mStr + _T("^2=");
		break;
	case flag_jiecheng:
		while (tmpnum > 1)
		{
			tmpnum--;
			mNum2 *= tmpnum;
		}
		Getnumber = (int)mNum2;
		mTempStr = mStr + _T("!=");
		break;
	case flag_sinx:
		Getnumber = sin(mNum2 * radian);

		mTempStr = _T("sin(") + mStr + _T("°)=");
		break;
	case flag_cosx:
		Getnumber = cos(mNum2 * radian);
		mTempStr = _T("cos(") + mStr + _T("°)=");
		break;
	case flag_tanx:
		Getnumber = tan(mNum2 * radian);
		mTempStr = _T("tan(") + mStr + _T("°)=");
		break;
	case flag_lnx:
		Getnumber = log(mNum2);
		mTempStr = _T("ln(") + mStr + _T(")=");
		break;
	case flag_ex:
		Getnumber = pow(2.718281, mNum2);
		mTempStr = _T("e^(") + mStr + _T(")=");
		break;
	case flag_Hex:
		mTempStr = _T("Dec -> Hex :") + mStr + _T(" --> ");
		mStr = Hex((int)mNum2);
		break;
	case flag_Oct:
		mTempStr = _T("Dec -> Oct :") + mStr + _T(" --> ");
		Getnumber = BinOct((int)mNum2, 8);
		break;
	case flag_Bin:
		mTempStr = _T("Dec -> Bin :") + mStr + _T(" --> ");
		Getnumber = BinOct((int)mNum2, 2);
		break;
	case flag_BinToDec:
		mTempStr = _T("Bin -> Dec :") + mStr + _T(" --> ");
		Getnumber = BinOctToDec(mStr, 2);
		break;
	case flag_OctToDec:
		mTempStr = _T("Oct -> Dec :") + mStr + _T(" --> ");
		Getnumber = BinOctToDec(mStr, 8);
		break;
	case flag_HexToDec:
		mTempStr = _T("Hes -> Dec :") + mStr + _T(" --> ");
		Getnumber = HexToDec(mStr);
		break;
	default:
		break;
	}
	if (m_Flag != flag_Hex)
	{
		if (Getnumber < 2147483647 && Getnumber>-2147483647)
		{
			if (Getnumber - (int)Getnumber == 0)
			{
				mStr.Format(L"%d", (int)Getnumber);
			}
			else
			{
				mStr.Format(L"%f", Getnumber);
			}
		}
		else
		{
			mStr = _T("Value of result is too large to display.");
		}
	}
	mTempStr += mStr;
	mStr10 = mStr9;
	mStr9 = mStr8;
	mStr8 = mStr7;
	mStr7 = mStr6;
	mStr6 = mStr5;
	mStr5 = mStr4;
	mStr4 = mStr3;
	mStr3 = mStr2;
	mStr2 = mStr1;
	mStr1 = mTempStr;
	mNum1 = Getnumber;
	mNum2 = 0.0f;
	UpdateData(FALSE);
}

HBRUSH CMFCCaluclatorDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性
	if (pWnd->GetDlgCtrlID() == IDC_EDIT1)// IDC_Display为所选文本框ID
		
   {
		pDC->SetTextColor(RGB(90, 90, 90));//设置字体颜色
        //pDC->SetBkColor(RGB(0, 0, 0));//设置背景颜色
		pDC->SetBkMode(TRANSPARENT);//设置背景透明
	 }
	else if (pWnd->GetDlgCtrlID() == IDC_STATIC1)//如果是静态编辑框
	{
		pDC->SetTextColor(RGB(173,216,230));//修改字体的颜色
		pDC->SetBkMode(TRANSPARENT);//把字体的背景变成透明的
		//return my_brush;//返回背景色
	}

	else if (pWnd->GetDlgCtrlID() == IDC_STATIC2)//如果是静态编辑框
	{
		//pDC->SetTextColor(RGB(173, 216, 230));//修改字体的颜色
		pDC->SetTextColor(RGB(255, 0, 0));//修改字体的颜色
		pDC->SetBkMode(TRANSPARENT);//把字体的背景变成透明的
		//return my_brush;//返回背景色
	}
	
	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}


void CMFCCaluclatorDlg::OnStnClickedStatic3()
{
	// TODO: 在此添加控件通知处理程序代码
}
