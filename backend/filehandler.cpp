#include "backend/filehandler.h"

FileHandler::FileHandler(QString filePath) {
    /*
     * Constructor
     */
    this->filePath = QDir(filePath);
    this->collectAllFiles();
}

void FileHandler::collectAllFiles() {
    /*
     * Collect all files and store them in a list
     */
    this->fileList = this->filePath.entryList();
    if(this->fileList.empty()) {
        return;
    }

    // Filter the files

}
