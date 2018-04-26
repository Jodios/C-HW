//PROBLEM
//rewrite the class Faculty using compositon instead of MI.
//Test by creating a second object, iinitializing it, and performing assignment

#include <iostream>
#include <string>

class Person{
	std::string name;
	int age;
public:
	Person(std::string n, int a) : name(n), age(a){}
	std::string getName(){return name;}
	std::string getAge(){return age;}
};

class Employee{
	bool fullTime;
	std::string dept;
	float wage;
public:
	Employee(bool f, std::string d, float w) : fullTime(f), dept(d), wage(w){}
	bool getFullTime(){return fullTime;}
	std::string getDept(){return dept;}
	float getWage(){return wage;}

};

// class Faculty : public Person, public Employee{
// 	bool hasTenure;
// public:
// 	Faculty(std::string name, int age, bool fullTime, std::string dept, float wage, bool h) : Person(name, age), Employee(fullTime, dept, wage), hasTenure(h){}
// 	void printAll(){
// 		std::cout << "Name:\t\t" << getName() << "\tage: " << getAge();
// 		std::cout << "\t\tFull Time:" << getFullTime() << std::endl;
// 		std::cout << "Department:\t" << getDept() << "\twage: " << getWage();
// 		std::cout << "\tHas tenure:" << hasTenure() << std::endl;;
// 	}
// };
// 
class Faculty {
	
};


int main(){
	Faculty f("Socrates", 42, true, "Philosophy", 80000, false);
	f.printAll();
	return 0;
}