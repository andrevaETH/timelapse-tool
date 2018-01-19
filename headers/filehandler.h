#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>

#include "dirent.h"


class FileHandler
{
public:
    FileHandler(QString filePath);
    void CollectAllFiles();

private:
    QString filePath;
    std::list<typename T> fileList;
};

#endif // FILEHANDLER_H
