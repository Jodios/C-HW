//re-write the class Faculty using inheritance instead of MI: The base (parent) class for Faculty should be Employee
//because it has more code and the memberes of Person should be added manually
//Write explicit constructors, including the copy-constructor!
//Test by creating a second object, initializing it, and performing assignment 

#include <iostream>
#include <string>


class Employee{
protected:
	std::string name;
	short age;
	bool fullTime;
	std::string dept;
	float wage;
public:
	Employee(bool f, std::string d, float w, std::string n, short a) : name(n), age(a), fullTime(f), dept(d), wage(w){}
	bool getFullTime(){return fullTime;}
	std::string getDept(){return dept;}
	float getWage(){return wage;}

};

class Faculty : public Employee {
	bool hasTenure;
public:
	Faculty(std::string name, int age, bool fullTime, std::string dept, float wage, bool h):
	Employee(fullTime, dept, wage, name, age),
	hasTenure(h){}

	void printAll(){
		std::cout << "Name:\t\t" << name << "\tage: " << age;
		std::cout << "\t\tFull Time:" << getFullTime() << std::endl;
		std::cout << "Department:\t" << getDept() << "\twage: " << getWage();
		std::cout << "\tHas tenure:" << hasTenure << "\nAdress: " << this << "\n" << std::endl;;
	}																				   
};

int main(){
	Faculty f("Socrates", 42, true, "Philosophy", 80000, false);
	Faculty f2("Nessy", 350, true, "Girl Scout", 3.50, false);
	std::cout << "Before assignment" << std::endl;
	f2.printAll();
	f2 = f;
	f.printAll();
	f2.printAll();
	return 0;
}