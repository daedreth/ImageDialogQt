#include <QApplication>
#include <QTextStream>
#include <QStringList>
#include <QFileInfo>
#include <imagedialogqt.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream out(stdout);
    QFileDialog* mpOpenDialog = new ImageDialogQt();

    mpOpenDialog->setAcceptMode(QFileDialog::AcceptOpen);
    mpOpenDialog->setFixedWidth(mpOpenDialog->width() + 300);
    int test = mpOpenDialog->exec();

    QString path = mpOpenDialog->selectedFiles().first();
    QFileInfo file(path);

    if(test != 0 && (file.exists() && file.isFile()))
    {
        out << path;
        out.flush();
    }

    std::exit(0);
    return a.exec();
}
