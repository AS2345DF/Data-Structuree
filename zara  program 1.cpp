#include<iostream>
using namespace std;
class computer
{
	string keyboard, mouse, function;
	public:
	void getfeatures();
	void getfunction();
};
void computer::getfeatures(void)
{
	cout<<"Enter the features of computer :"<<endl;
	cin>>keyboard>>mouse;
	cout<<"keyboard :"<<keyboard<<endl;
	cout<<"mouse :"<<mouse<<endl;
};
void computer::getfunction(void)
{
	cout<<"enter the function of computer :"<<endl;
	cin>>function;
	cout<<"function :"<<function<<endl;
};
main()
{
	computer obj;
	obj.getfeatures();
	obj.getfunction();
	return 0;
}
