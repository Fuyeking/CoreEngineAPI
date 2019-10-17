#ifndef _AI_H_
#define _AI_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
#include <iostream>
#include <string>
using namespace std;
class DLLIMPORT AssessIndicator
{
	public:
	AssessIndicator();
	virtual ~AssessIndicator(); 
		
	private :
		long id;
		string eName; // 指标中英文
		string cName; // 指标中文名

	    float lower; // 最小值
		string connector; // 连接符
		float upper; // 最大值
		string unit; // 单位
		string reference; // 参考值文字描述
		string description;// 描述
		string judgeClass; // 用于判断指标是否正常的Java类。如果为null，表示通过上下界来判断
		string sheetAnswer;// 问卷答案
	public:
		void setId(long id);
		long getId(void);
		void seteName(string& eName);
		string& geteName(void);
		void setcName(string& cName);
		string& getcName(void);
		void setConnector(string&Connector);
		string& getConnector(void);
		void setUpper(float upper);
		float getUpper(void);
		void setLower(float lower);
		float getLower(void);
		void setUnit(string& unit);
		string& getUnit(void);
		void setReference(string& reference);
		string& getReference();
		void setDescripition(string& descripition);
		string& getDescripition();
		void setJudgeClass(string& judgeClass);
		string& getJudgeClass();
		void setSheetAnswer(string& sheetAnswer);
		string& getSheetAnswer();
		 
};
DLLIMPORT int add (int a, int b);
#endif
