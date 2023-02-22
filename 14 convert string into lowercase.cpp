//convert string into lowercase
#include<iostream>
using namespace std;

int main()
{
	string upTxt;
	
	cout << "Enter the String to Convert into Lowercase  =  ";
	getline(cin, upTxt);
	
	for (int i = 0; i < upTxt.length(); i++)
  	{
  		upTxt[i] = tolower(upTxt[i]);
  	}
  	
	cout<< "\nThe Given String in Lowercase = " << upTxt;
		
 	return 0;
}
