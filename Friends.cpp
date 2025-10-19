#include "Friends.h"

void friends::setName(string Name) {
	name = Name;
}

void friends::setCity(string City) {
	city = City;
}

void friends::setInterest(string Interest) {
	interest = Interest;
}

void friends::setAge(int Age) {
	age = Age;
}



string friends::getName() {
	return name;
}

string friends::getCity() {
	return city;
}

string friends::getInterest() {
	return interest;
}

int friends::getAge() {
	return age;
}
