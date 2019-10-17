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
		string eName; // ָ����Ӣ��
		string cName; // ָ��������

	    float lower; // ��Сֵ
		string connector; // ���ӷ�
		float upper; // ���ֵ
		string unit; // ��λ
		string reference; // �ο�ֵ��������
		string description;// ����
		string judgeClass; // �����ж�ָ���Ƿ�������Java�ࡣ���Ϊnull����ʾͨ�����½����ж�
		string sheetAnswer;// �ʾ��
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
