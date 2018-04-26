//PROBLEM
//rewrite the class Faculty using compositon instead of MI.
//Test by creating a second object, iinitializing it, and performing assignment

#include <iostream>
#include <string>

// class Person{
// 	std::string name;
// 	int age;
// public:
// 	Person(std::string n, int a) : name(n), age(a){}
// 	std::string getName(){return name;}
// 	std::string getAge(){return age;}
// };

// class Employee{
// 	bool fullTime;
// 	std::string dept;
// 	float wage;
// public:
// 	Employee(bool f, std::string d, float w) : fullTime(f), dept(d), wage(w){}
// 	bool getFullTime(){return fullTime;}
// 	std::string getDept(){return dept;}
// 	float getWage(){return wage;}

// };
class Faculty {
	std::string name;
	short age;
	bool fullTime;
	std::string dept;
	float wage;
	bool isTenured;
public:
	Faculty(std::string name, int age, bool fullTime, std::string dept, float wage, bool h) : 
	name(name), age(age), fullTime(fullTime), dept(dept), wage(wage), isTenured(h){}
	void printAll(){
		std::cout << "Name:\t\t" << name << "\tage: " << age;
		std::cout << "\t\tFull Time:" << fullTime << std::endl;
		std::cout << "Department:\t" << dept << "\twage: " << wage;
		std::cout << "\tHas tenure:" << isTenured << std::endl;;
	}
};


int main(){
	Faculty f("Socrates", 42, true, "Philosophy", 80000, false);
	f.printAll();
	return 0;
}