#include <QtGui/QApplication>
#include "jaymainwidget.h"
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    JayMainWidget w;
    w.show();
 //it is just a test
    return a.exec();
}
