#pragma once  
using namespace std;
#include<string>
class friends{
 
	string name;
 	string city;
	string interest;
	int age;
public:
	void setName(string Name) ;
	void setCity(string City) ;
	void setInterest(string Interest) ;
	void setAge(int Age) ;

	string getName() ;
	string getCity() ;
	string getInterest() ;
	int getAge() ;

};