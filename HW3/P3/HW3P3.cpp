#include <iostream>
using namespace std;
class Hen {
	float bar;
	
public:
	Hen() { bar = 10; }
	class Nest {
		int foo;
		friend class Hen;
		
	public:
		class Egg {
			friend class Nest;
			friend class Hen;
			double baz;
		public:
			Egg() { baz = 42; }
			void display();
		};
		Nest() { foo = 350; }
		void display();
	};
	void display();
};
void Hen::display() {
	Nest n; Hen::Nest::Egg e;
	cout << "bar: " << bar
		<< " foo: " << n.foo
		<< " baz: " << e.baz
		<< " I'm Hen"
		<< endl;
}
void Hen::Nest::display() {
	Hen h; Egg e;
	cout << "bar: " << h.bar
		<< " foo: " << foo
		<< " baz: " << e.baz
		<< " I'm Nest"
		<< endl;
}
void Hen::Nest::Egg::display() {
	Hen h; Nest n;
	cout << "bar: " << h.bar
		<< " foo: " << n.foo
		<< " baz: " << baz
		<< " I'm Egg"
		<< endl;
}
int main() {
	Hen h;
	Hen::Nest n;
	Hen::Nest::Egg e;
	h.display();
	n.display();
	e.display();
	return 0;
}