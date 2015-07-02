#include "painter.h"

using namespace std;

int main(int argc, char** argv){
	cout<<"Please Type in the file name: "<<endl;
	char *fileName;
	cin>>fileName;
	Painter p;
	FILE *f = p.loadFile(fileName);
	return 0;
}
