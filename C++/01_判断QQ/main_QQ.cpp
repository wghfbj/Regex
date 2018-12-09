#include <iostream>
#include <string.h>

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
	/* 判断规则： 首位不为0的6-12位长度的纯数字 */
	if(QQ[0] != '0')
	{
		int QQLen = QQ.size();
		if((QQLen > 6) && (QQLen < 12))
		{
			int index = 0;
			for(index =0; index < QQLen; index++)
			{
				if(!((QQ[index] >= '0') && (QQ[index] <= '9')))
				{
					break;
				}
			}
			if(index == QQLen)
			{
				return TRUE;
			}
		}
	}
	return FALSE;
}

string Demo::QQShow(void)
{
	return QQ;
}


int main(int argc, char** argv) 
{
	
	Demo* QQ = new Demo("23123123");
	printf("\n\n QQ[%s] = %d \n\n", QQ->QQShow().c_str(), (int)QQ->CheckQQValid());
	return 0;
}
