#include "headers/filehandler.h"

FileHandler::FileHandler(QString filePath) {
    /*
     * Constructor
     */
    this->filePath = filePath;
    this->CollectAllFiles();
}

void FileHandler::CollectAllFiles() {
    /*
     * Collect all files and store them in a list
     */
    if(auto dir = opendir(this->filePath)) {
        while(auto f = readdir(dir)) {

        }

    }
}

