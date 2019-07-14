#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>
#include <QFile>
#include <QImage>
#include <QDir>

#include "dirent.h"
#include "programvariables.h"


class FileHandler
{
public:
    FileHandler(QString filePath);
    void collectAllFiles();

private:
    QDir filePath;
    QStringList fileList;
};

#endif // FILEHANDLER_H
