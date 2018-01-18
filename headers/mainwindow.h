#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>

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
    Ui::MainWindow *ui;
    void createFileHandler(QString filePath);
};

#endif // MAINWINDOW_H
