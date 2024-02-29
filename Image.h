#pragma once

class Image {
//listing the methods and variables people are most likely to use first.
public:
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
private:
	int width;
	int height;
};

