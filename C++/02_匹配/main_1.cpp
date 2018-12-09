#include <iostream>
#include <string>
#include <regex>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TRUE 1
#define FALSE 0


class Demo
{
public:

	Demo(string QQ);
	string QQ;

	bool CheckQQValid();
	string QQShow(void);
};


Demo::Demo(string QQ)
{
	this->QQ = QQ;
}

bool Demo::CheckQQValid()
{
	/* 替换规则： 将字符串中的叠词全部替换为单个词 */
	regex R1("1[358]\\d{9}");
	cout << regex_match(QQ, R1) << endl;
	return regex_match(QQ, R1);
}

string Demo::QQShow(void)
{
	return QQ;
}


int main(int argc, char** argv) 
{
	Demo* QQ = new Demo("15521326051");

	printf("\n\n QQ[%s] => %s \n\n", QQ->QQShow().c_str(), QQ->CheckQQValid());
	return 0;
}

