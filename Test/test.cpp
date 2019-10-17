#include <iostream>
#include "ai.h" 
#include "hd.h"
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a = 10;
	int b = 20;
	string value = "yeking";
	string ref = "yeking";
	HraDisplay ai;
	ai.setLower(10);
	ai.setUpper(15);
	ai.setValue(value);
	ai.setReference(ref);
	HraDisplay bi = gennerateState(ai); 
	cout << "字符串连接结果：" << ai.getState() << endl;
	return 0;
}
