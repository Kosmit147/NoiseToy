#include "main_window.hpp"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), display_label(new QLabel)
{
    setCentralWidget(display_label);
}
