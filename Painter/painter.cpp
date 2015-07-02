#include "painter.h"

FILE* Painter::loadFile(char* filePath){
	FILE * pFile;
    pFile = fopen (filePath,"r");
      if (pFile!=NULL)
      {
          std::cout<<"File Open With Success! ";
      }
      return pFile;
}

void Painter::setQuantityOfSpecimes(int qtd){
    quantity = qtd;
}

double Painter::randBetween(int fMin, int fMax){
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

void Painter::setImageSizes(FILE* file){
   char* line;
   if (file == NULL){
    std::cout<<"Error Reading File... Terminating Aplication!"<<std::endl;
    exit(0);
   }
   else {
     fgets (line , 10000 , file);
     //file >> this->imgWidth >> this->imgHeight;
     fclose (file);
   }
}

std::vector<specie>* Painter::generateFirstFamily(){
    std::vector<specie> v;
    for(int i = 0; i < this->quantity; i++){
        specie aux;
        aux.a = randBetween(0,255);
        aux.b = randBetween(0,255);
        aux.g = randBetween(0,255);
        aux.r = randBetween(0,255);
        aux.x = randBetween(0,this->imgWidth);
        aux.y = randBetween(0,this->imgHeight);
        aux.radious = randBetween(0,this->imgWidth > this->imgHeight ? this->imgWidth : this->imgHeight);
        v.push_back(aux);
    }
    return &v;
}
