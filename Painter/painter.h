//PAINTER.H
#ifndef PAINTER_H
#define PAINTER_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>

struct specie{
	double x;
	double y;
	double radious;
	double r;
	double g;
	double b;
	double a;
	};

class Painter{
	public:
	 FILE* loadFile(char* filePath);
	 void setQuantityOfSpecimes(int qtd);
    private:
     void setImageSizes(FILE* file);
     double randBetween(int min, int max);
     std::vector<specie>* generateFirstFamily();
    protected:
     int quantity = 0;
     int imgWidth = 0;
     int imgHeight = 0;

};



#endif
