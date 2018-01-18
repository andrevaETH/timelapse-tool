#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Setup UI
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_image_input_folder_button_clicked()
{
    // Open up a File Dialog
    QFileDialog *file_dialog = new QFileDialog(this);
    file_dialog->show();
    QString new_folder = file_dialog->directory().absolutePath();

    ui->image_input_folder_label->setText(new_folder);
}
