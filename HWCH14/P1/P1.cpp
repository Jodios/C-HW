//PROBLEM
//rewrite the class Faculty using compositon instead of MI.
//Test by creating a second object, iinitializing it, and performing assignment

#include <iostream>
#include <string>

class Person{
	std::string name;
	short age;
public:
	Person(){}
	Person(std::string n, short a) : name(n), age(a){}
	std::string getName(){return name;}
	short getAge(){return age;}
};

class Employee{
	bool fullTime;
	std::string dept;
	float wage;
public:
	Employee(){}
	Employee(bool f, std::string d, float w) : fullTime(f), dept(d), wage(w){}
	Employee(const Employee& eRef){
		fullTime = eRef.fullTime;
		dept = eRef.dept;
		wage = eRef.wage;
	}
	bool getFullTime(){return fullTime;}
	std::string getDept(){return dept;}
	float getWage(){return wage;}

};

class Faculty {
	Employee e;
	Person p;
	bool isTenured;
public:
	Faculty(std::string name, short age, bool fullTime, std::string dept, float wage, bool h) : 
	isTenured(h),
	e(Employee(fullTime, dept, wage)),
	p(Person(name,age)){}

	Faculty(const Faculty& fRef){
		isTenured = fRef.isTenured;
		e = fRef.e;
		p = fRef.p;
	}
	void printAll(){
		std::cout << "Name:\t\t" << p.getName() << "\tage: " << p.getAge();
		std::cout << "\t\tFull Time:" << e.getFullTime() << std::endl;
		std::cout << "Department:\t" << e.getDept() << "\twage: " << e.getWage();
		std::cout << "\tHas tenure:" << isTenured << "\nAdress: " << this << "\n" << std::endl;
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