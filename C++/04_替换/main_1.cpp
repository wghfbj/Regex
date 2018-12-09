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

	bool CheckQQValid(string &result);
	string QQShow(void);
};


Demo::Demo(string QQ)
{
	this->QQ = QQ;
}

bool Demo::CheckQQValid(string &result)
{
	/* 替换规则： 将字符串中的叠词全部替换为单个词 */
	regex R1("(.)\\1");
	regex_replace(back_inserter(result), QQ.begin(), QQ.end(), R1, "$1");
	return 1;
}

string Demo::QQShow(void)
{
	return QQ;
}


int main(int argc, char** argv) 
{
	Demo* QQ = new Demo("100110011001");
	string result;
	QQ->CheckQQValid(result);

	printf("\n\n QQ[%s] => %s \n\n", QQ->QQShow().c_str(), result.c_str());
	return 0;
}

