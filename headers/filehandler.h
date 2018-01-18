#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QString>


class FileHandler
{
public:
    FileHandler(QString filePath);

private:
    QString filePath;
};

#endif // FILEHANDLER_H
