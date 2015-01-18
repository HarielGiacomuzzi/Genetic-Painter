#include <"painter.h">
#include <stdlib.h>
#include <stdio.h>
#include <iostream>



using namespace std;

int main(int argc, char** argv){
	cout<<"Please Type in the file name: "<<endl;
	ofstream file;
	cout<<loadFile("test.txt",&file)<<endl;
	return 0;
}

int painter::loadFile(char* filePath, ofstream* file){
	file->open(filePath);
	if(file->is_open()){
		return 1;
	}
	else{
		return -1;
	}
}
