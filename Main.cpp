#include "Friends.h"
#include <iostream>
using namespace std;


class Display {
public:
	void DisplayFriends() {
		cout << "Hello please enter your friends\n";
	}

};





int main() {

	friends fri1;
	Display dis;

	string newName, newCity, newInterest;
	int newAge;

	dis.DisplayFriends();
	
	cin >> newName >> newCity >> newInterest >> newAge;
	
	fri1.setName(newName); 
	fri1.setCity(newName);
	fri1.setInterest(newInterest);
	fri1.setAge(newAge);
	
	cout << fri1.getName(), fri1.getCity(), fri1.getInterest(), fri1.getAge();
}