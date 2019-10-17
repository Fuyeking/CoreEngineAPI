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
				if (low != 0 && upper != 0) // A< value < B 的模式
				{
					if (number < low) { // 低于最小值
						item.setState(-2);
					} else if (number >=upper) { // 高于最高值
						item.setState(-1);
					} else { // 两者之间：正常
						item.setState(0);
					}
				} else if (low == 0 && upper != 0) {// value > B 或者 value < B 的模式
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

			}else if (!item.getReference().empty()){// reference不为空， 参考值为字符串汉字
				if (item.getValue()== reference)// 和参考值相同，正常,主要针对参考值为有、无
				{
					item.setState(0);
				} else {// 异常
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
  	if (str[0] == '-')                          // 判断是否有负号
    	sign = 1;
 	for (int i = sign;i<str.size(); i++)                   // 判断小数点的个数，是多只能有一个
  	{
	    if (str[i] == '.')
	    {
	      if(++judgeDot>1)
	      {
	        return 1;
	      }
	    }
  	}
	for (int i = sign;i<=str.size(); i++)                   // 只能输入数字和小数点
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
 
