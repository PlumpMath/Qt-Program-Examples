#include <qapplication.h>
#include <qpushbutton.h>


int main( int argc, char **argv )
{
  QApplication a( argc, argv );

  QPushButton hello( "Hello world!", 0 );
  hello.resize( 100, 30 );

  QObject::connect( &hello, SIGNAL(clicked()), &a, SLOT(quit()) );
  hello.show();
  return a.exec();
}
