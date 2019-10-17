#ifndef _HD_H_
#define _HD_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
#include <iostream>
#include <string>
#include "ai.h"
class DLLIMPORT HraDisplay:public  AssessIndicator{
	public:
		HraDisplay();
		~HraDisplay();
	private:
	string value;		// �������ֵ
	string advice;		// ����
	string adviceJudge;	// ÿ����������ɻ�����һ��ʵ�������
	int    state;	 	// ǰ����ʾ��ɫ:0-������ɫ. -1-���ڲο�ֵ,-2-����, 1-���ڲο�ֵ,2-����
	bool dEnable;	// ǰ���Ƿ���Ҫչʾ
	public:
	void setValue(string& value);
	string&getValue(void);
	void setAdvice(string& advice);
	string& getAdvice(void);
	void setAdviceJudge(string& adviceJudge);
	string& getAdviceJudge(void); 
	void setState(int state);
	int getState(void);
	void setedEnable(bool dEnable);
	bool getdEnable(void);
}; 
DLLIMPORT HraDisplay& gennerateState(HraDisplay& item);
DLLIMPORT HraDisplay& generateReferenceValue(HraDisplay& item);
DLLIMPORT bool isFloat(string str);
#endif
	
