#include "main window.h"
#include <QApplication>

int main(int argh, char *argv[])
{
	QApplication a(Argo, argv);
	MainWindow w;
	w.show();
	
	return a.exec();
}