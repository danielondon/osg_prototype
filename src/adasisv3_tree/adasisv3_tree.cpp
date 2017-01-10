#include <qapplication.h>
#include <qpushbutton.h>
#include "../dynamic_library/common.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	cout<<"AdasisV3 with OSG"<<endl;
	
	// Using Static Library
	cVisualizationHelper::foo();

	QApplication a(argc, argv);

	QPushButton hello("Hello world!", 0);
	hello.resize(100, 30);

	hello.show();
	return a.exec();
}