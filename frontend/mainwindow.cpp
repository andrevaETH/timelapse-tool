#include "frontend/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    // Setup UI
    ui->setupUi(this);
    this->setWindowTitle("TimeLapseTool");
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

    if(file_dialog->exec()) {
        QString input_folder = file_dialog->directory().absolutePath();
        QStringList input_folder_list = input_folder.split('/');

        ui->image_input_folder_label->setText(
                    input_folder_list[input_folder_list.size() -1]);

        this->input_file_handler = new FileHandler(input_folder);
    }

}

void MainWindow::on_image_output_folder_button_clicked() {
    /*
     * Read the Location of the output folder
     */
    QFileDialog *file_dialog = new QFileDialog(this);
    file_dialog->show();

    if(file_dialog->exec()) {
        QString output_folder = file_dialog->directory().absolutePath();
        QStringList output_folder_list = output_folder.split('/');

        ui->image_output_folder_label->setText(
                    output_folder_list[output_folder_list.size() - 1]);

        this->output_file_handler = new FileHandler(output_folder);
    }
}
