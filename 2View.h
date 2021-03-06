
// 2View.h: CMy2View 클래스의 인터페이스
//

#pragma once


class CMy2View : public CFormView
{
protected: // serialization에서만 만들어집니다.
	CMy2View();
	DECLARE_DYNCREATE(CMy2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY2_FORM };
#endif

// 특성입니다.
public:
	CMy2Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMy2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2View.cpp의 디버그 버전
inline CMy2Doc* CMy2View::GetDocument() const
   { return reinterpret_cast<CMy2Doc*>(m_pDocument); }
#endif

