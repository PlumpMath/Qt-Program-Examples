#include <QApplication>
#include <QWidget>
#include <QtWebKit/QWebView>

//sudo apt install libqtwebkit-dev
//qmake -project
//add this line to the new *.pro file 'QT += webkit'
//run: qmake && make

int main(int argc, char **argv)
{
  QApplication app(argc, argv);

  QWebView *view = new QWebView();

  view->setWindowTitle("Films By Kris");

  view->resize(1920,1080);
  view->load(QUrl("http://www.filmsbykris.com"));
  view->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
  view->show();

  return app.exec();
}

