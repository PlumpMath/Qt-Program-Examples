#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>

int main(int argc, char *argv[]) {

  int WIDTH = 250;
  int HEIGHT = 150;

  int screenWidth;
  int screenHeight;

  int x, y;

  QApplication app(argc, argv);

  QWidget window;

  QDesktopWidget *desktop = QApplication::desktop();

  screenWidth = desktop->width();
  screenHeight = desktop->height(); 

  x = (screenWidth - WIDTH) / 2;
  y = (screenHeight - HEIGHT) / 2;

  window.resize(WIDTH, HEIGHT);
  window.move( x, y );
  window.setWindowTitle("Center");
  window.show();

  return app.exec();
}
