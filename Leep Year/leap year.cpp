#include <iostream>
using namespace std;

void except(int num)
{
	if(num<1 || num>4000)
	{
		throw num;
	}
}
int main(void) 
{
	int num;
	int str;
	cout<<"연도를 입력하세요.";
	cin>>str;
	
	try
	{
	except(str);
	if(str % 4 == 0 && str % 100 != 0 || str % 400 == 0)
	{
		num = 1;
	}else 
	{
		num = 0;
	}
	cout<<num<<endl;
	}
	catch(int expn)
	{
		cout<<"연도는 "<<expn<<"이 될 수 없습니다."<<endl;
	}
	return 0;
}