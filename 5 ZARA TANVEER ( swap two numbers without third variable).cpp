// try to swap two numbers without third variable
 #include <iostream>  
using namespace std;  
int main()  
{  
int a=5, b=10;      
cout<<"Before swap a = "<<a<<endl;
cout<<"Before swap b = " <<b<<endl;  
a=a*b; //a=50 (5*10)    
b=a/b; //b=5 (50/10)    
a=a/b; //a=10 (50/5)    
cout<<"After swap a = "<<a<<endl;
cout<<"After swap b = "<<b<<endl;     
return 0;  
}  
