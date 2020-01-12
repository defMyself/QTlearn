#include "dialog.h"
#include <QApplication>
int main(int argv, char *argv[])
{
	QApplication a(argc, argv);
	Dialog w;
	w.show();
	return a.exec();
}