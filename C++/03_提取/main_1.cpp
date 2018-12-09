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
	regex R1("[a-z]{4,15}\\d*@cvte.com");
	smatch m;
	while(regex_search(QQ, m, R1))
	{
		for(auto x:m) cout << x << " ";
		cout << endl;
		QQ = m.suffix().str();
	}

	return 1;
}

string Demo::QQShow(void)
{
	return QQ;
}


int main(int argc, char** argv) 
{
	Demo* QQ = new Demo("112233zhangsan222@cvte.com4455");
	printf("\n\n QQ[%s] =>  \n\n", QQ->QQShow().c_str());
	QQ->CheckQQValid();

	return 0;
}

