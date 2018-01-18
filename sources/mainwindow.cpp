#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    // Setup UI
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_image_input_folder_button_clicked() {
    /*
     * Read the Location of the input folder
     */
    QFileDialog *file_dialog = new QFileDialog(this);
    file_dialog->show();
    QString new_folder = file_dialog->directory().absolutePath();
    QStringList new_folder_list = new_folder.split('/');


    ui->image_input_folder_label->setText(
                new_folder_list[new_folder_list.size() -1]);

    createFileHandler(new_folder);
}

void MainWindow::on_image_output_folder_button_clicked() {
    /*
     * Read the Location of the output folder
     */
    QFileDialog *file_dialog = new QFileDialog(this);
    file_dialog->show();
    QString output_folder = file_dialog->directory().absolutePath();

    if()

}
