#include <QApplication>

#include "mainwindow.h"

using namespace s21;

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Viewer w;
  w.show();
  return a.exec();
}
