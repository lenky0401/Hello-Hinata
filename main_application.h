
#ifndef __MAIN_APPLICATION_H__
#define __MAIN_APPLICATION_H__

#include <QDeclarativeView>
#include <QApplication>
#include <QMouseEvent>
#include <QBoxLayout>
#include <QStackedWidget>

class MainApplication : public QApplication
{
    Q_OBJECT
public:
    MainApplication(int &argc, char **argv);
    virtual ~MainApplication();
    bool setup();
private:
    QDeclarativeView *m_view;
};

#endif // __MAIN_APPLICATION_H__
