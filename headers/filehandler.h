#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>
#include <QFile>
#include <QImage>

#include "dirent.h"


class FileHandler
{
public:
    FileHandler(QString filePath);
    void CollectAllFiles();

private:
    QString filePath;
    std::list<> fileList;
};

#endif // FILEHANDLER_H
