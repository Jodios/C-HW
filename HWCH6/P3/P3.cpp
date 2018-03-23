#include <iostream>

class calculateVolume{
private://------------------------------------
	float length;
	float width;
	float height;
	float volume;
public://-------------------------------------
	calculateVolume();
	calculateVolume(float);
	calculateVolume(float, float);
	calculateVolume(float, float, float);
	void print();
};

calculateVolume::calculateVolume(){
	this-> length = 1.0;
	this-> width = 1.0;
	this-> height = 1.0;
	this-> volume = length * width * height;
}
calculateVolume::calculateVolume(float length){
	this->length = length;
	this-> width = 1.0;
	this-> height = 1.0;
	this-> volume = length * width * height;
}
calculateVolume::calculateVolume(float length, float width){
	this-> length = length;
	this-> width = width;
	this-> height = 1.0;
	this-> volume = length * width * height;
}
calculateVolume::calculateVolume(float length, float width, float height){
	this-> length = length;
	this-> width = width;
	this-> height = height;
	this-> volume = length * width * height;
}
void calculateVolume::print(){
	std::cout 
			<< "length = " << length << "\n"
			<< "width = " << width << "\n"
			<< "height = " << height << "\n"
			<< "volume = " << volume << "\n"
			<< "----------------------------"
	<< std::endl;
}

int main(){
	calculateVolume x, l(23), lw(23, 12), lwh(23, 12, 39);
	x.print();
	l.print();
	lw.print();
	lwh.print();

	return 0;
}