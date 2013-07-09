#include <QDeclarativeView>
#include <QApplication>
#include <QDebug>
#include <QDir>
#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeView>
#include <QtDeclarative/QDeclarativeEngine>
#include <QtDeclarative/QDeclarativeComponent>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/QDeclarativeItem>
#include <QMetaObject>
#include <QDeclarativeContext>
#include <QDesktopWidget>
#include "main_application.h"

MainApplication::MainApplication(int &argc, char **argv)
    : QApplication(argc, argv), m_view(0)
{

}

bool MainApplication::setup()
{
    MainApplication::setApplicationName("Hello-Hinata");

    QDeclarativeView *view = new QDeclarativeView;
    view->setSource(QUrl::fromLocalFile("../main.qml"));
    view->rootContext()->setContextProperty("mainwindow", view);
    view->setStyleSheet("background:transparent;");
    view->setAttribute(Qt::WA_TranslucentBackground);
//    view->setWindowFlags(Qt::FramelessWindowHint);

    view->setWindowTitle("Hello-Hinata");
    view->setAutoFillBackground(false);
    view->setWindowOpacity(10);

    QObject::connect(view->engine(), SIGNAL(quit()), qApp, SLOT(quit()));
    view->rootContext()->setContextProperty("WindowControl",view);

    QDesktopWidget* desktop = QApplication::desktop();
    QSize size = view->sizeHint();
    int width = desktop->width();
    int height = desktop->height();
    int mw = size.width();
    int mh = size.height();
    int centerW = (width/2) - (mw/2);
    int centerH = (height/2) - (mh/2);
    view->move(centerW, centerH);

    view->show();

    return true;
}

MainApplication::~MainApplication()
{
    if (m_view) {
        delete m_view;
    }
}

