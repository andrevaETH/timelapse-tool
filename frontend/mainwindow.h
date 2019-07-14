#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>

#include "backend/filehandler.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_image_input_folder_button_clicked();
    void on_image_output_folder_button_clicked();

private:
    // Members
    Ui::MainWindow *ui;
    FileHandler *input_file_handler;
    FileHandler *output_file_handler;

};

#endif // MAINWINDOW_H
