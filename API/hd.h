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
	string value;		// 评估结果值
	string advice;		// 建议
	string adviceJudge;	// 每个建议的生成机制由一个实体类完成
	int    state;	 	// 前端显示颜色:0-正常颜色. -1-低于参考值,-2-过低, 1-高于参考值,2-过高
	bool dEnable;	// 前端是否需要展示
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
	
