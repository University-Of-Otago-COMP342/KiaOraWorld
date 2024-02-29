#include <iostream>
#include "Image.h"

int main(int argc, char *argv[]) {
	//define an instance of Image
	Image ImageOne;

	ImageOne.setWidth(10);
	ImageOne.setHeight(5);
	
	//the text "ImageOne Width" << (combiined with) ImageOne.getWidth()
	std::cout << "ImageOne Width " << ImageOne.getWidth() << std::endl;
	std::cout << "ImageOne Height " << ImageOne.getHeight() << std::endl;

	 return 0;
}
