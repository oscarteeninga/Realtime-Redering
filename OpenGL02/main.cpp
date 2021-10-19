#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
//#include <QGLFormat>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setAttribute(Qt::AA_UseDesktopOpenGL);

//    QGLFormat glFormat;
//    glFormat.setVersion( 3, 3 );
//    glFormat.setProfile( QGLFormat::CoreProfile );
//    glFormat.setSampleBuffers( true );

    MainWindow w;
    w.show();

    return a.exec();
}
