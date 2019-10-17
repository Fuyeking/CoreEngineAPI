#include"ai.h"
AssessIndicator::AssessIndicator() 
{
	this->lower ==0;
	this->upper ==0;
}

AssessIndicator::~AssessIndicator() 
{

}
void AssessIndicator::setId(long id)
{
	this->id = id;
}
long AssessIndicator::getId(void)
{
	return this->id;
}

void AssessIndicator::seteName(string& eName)
{
	this->eName = eName;
}
string& AssessIndicator::geteName()
{
	return this->eName;
}
void AssessIndicator::setcName(string& cNname)
{
	this->cName = cName;
}
string& AssessIndicator::getcName()
{
	return this->cName;
}
void AssessIndicator::setConnector(string&Connector)
{
	this->connector = Connector;
} 
string& AssessIndicator::getConnector(void)
{
	return this->connector;
}

void AssessIndicator::setUpper(float upper)
{
	this->upper = upper;
}
float AssessIndicator::getUpper(void)
{
	return this->upper;
}
void AssessIndicator::setLower(float lower)
{
	this->lower = lower;
}
float AssessIndicator::getLower(void)
{
	return this->lower;
}
void AssessIndicator::setUnit(string& unit)
{
	this->unit = unit;
}
string& AssessIndicator::getUnit(void)
{
	return this->unit;
}
void AssessIndicator::setReference(string& reference)
{
	this->reference = reference;
}
string& AssessIndicator::getReference()
{
	return this->reference;
}
void AssessIndicator::setDescripition(string& descripition)
{
	this->description = descripition;
}
string& AssessIndicator::getDescripition()
{
	return this->description;
}
void AssessIndicator::setJudgeClass(string& judgeClass)
{
	this->judgeClass = judgeClass;
}
string& AssessIndicator::getJudgeClass()
{
	return this->judgeClass;
}
void AssessIndicator::setSheetAnswer(string& sheetAnswer)
{
	this->sheetAnswer = sheetAnswer;
}
string& AssessIndicator::getSheetAnswer()
{
	return this->sheetAnswer;
}
DLLIMPORT int add (int a, int b)
{
	return a+b;
}

