#pragma once

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    inline ~MainWindow() {}

private:
    QLabel* display_label = nullptr;
};
