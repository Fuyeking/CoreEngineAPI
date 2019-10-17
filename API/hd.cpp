#include <stdlib.h>
#include"hd.h"
HraDisplay::HraDisplay(void)
{
	this->state = 0;
	this->dEnable = false;
}

HraDisplay::~HraDisplay()
{

}
void HraDisplay::setValue(string&value)
{
	 this->value = value;
}
 
string& HraDisplay::getValue(void)
{
	return this->value;
}
void HraDisplay::setAdvice(string& advice)
{
	this->advice = advice;
}
string& HraDisplay::getAdvice(void)
{
	return this->advice;
}
void HraDisplay::setAdviceJudge(string& adviceJudge){
	this->adviceJudge = adviceJudge;
}

string& HraDisplay::getAdviceJudge(void)
{
	return this->adviceJudge;
}
void HraDisplay::setState(int state)
{
	this->state = state;
}
int HraDisplay::getState(void)
{
	return this->state;
} 
void HraDisplay::setedEnable(bool dEnable)
{
	this->dEnable = dEnable; 
}
bool HraDisplay::getdEnable(void)
{
	return this->dEnable; 
}
HraDisplay & gennerateState(HraDisplay& item)
{
	string reference;
	string value = item.getValue();
	reference = item.getReference();
	if(isFloat(value)==0)
	{
				float low	= item.getLower();
				float upper = item.getUpper();
				printf("value to string:%s",value.c_str());
				float number = atof(value.c_str()); 
				printf("%f\n",number);
				if (low != 0 && upper != 0) // A< value < B ��ģʽ
				{
					if (number < low) { // ������Сֵ
						item.setState(-2);
					} else if (number >=upper) { // �������ֵ
						item.setState(-1);
					} else { // ����֮�䣺����
						item.setState(0);
					}
				} else if (low == 0 && upper != 0) {// value > B ���� value < B ��ģʽ
					string op = item.getConnector();
					if (op =="<") {
						if (number < upper)
							item.setState(0);
						else {
							item.setState(-1);
						}
					}
					if (op == ">") {
						if (number > upper)
							item.setState(0);
						else {
							item.setState(-1);
						}
					}
					if (op == "<=") {
						if (number <= upper)
							item.setState(0);
						else {
							item.setState(-1);
						}
					}
					if (op ==">=") {
						if (number >= upper)
							item.setState(0);
						else {
							item.setState(-1);
						}
					}
				}

			}else if (!item.getReference().empty()){// reference��Ϊ�գ� �ο�ֵΪ�ַ�������
				if (item.getValue()== reference)// �Ͳο�ֵ��ͬ������,��Ҫ��Բο�ֵΪ�С���
				{
					item.setState(0);
				} else {// �쳣
					item.setState(-1);
				}
			} 
			printf("%d\n",item.getState());
			item.setReference(reference);
	return item;
}
bool isFloat(string str)
{
	int sign = 0;
  	int judgeDot = 0;
  	if (str[0] == '-')                          // �ж��Ƿ��и���
    	sign = 1;
 	for (int i = sign;i<str.size(); i++)                   // �ж�С����ĸ������Ƕ�ֻ����һ��
  	{
	    if (str[i] == '.')
	    {
	      if(++judgeDot>1)
	      {
	        return 1;
	      }
	    }
  	}
	for (int i = sign;i<=str.size(); i++)                   // ֻ���������ֺ�С����
	{
		if(!((str[i] >= '0' && str[i]<= '9') || str[i] == '.' || str[i] == '\0'))
	    {
	      return 2;
	    }
	}
  	return 0;
}

HraDisplay& generateReferenceValue(HraDisplay& item)
{
	
	return item;
}
 
