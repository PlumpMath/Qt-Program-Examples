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
  QWidget window;
  window.setWindowTitle("Simple example");

  QWebView *view = new QWebView();

  view->resize(200,200);
  view->load(QUrl("http://www.filmsbykris.com"));
  view->show();

  return app.exec();
}

