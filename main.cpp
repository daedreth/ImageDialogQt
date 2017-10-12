#include <QApplication>
#include <QTextStream>
#include <QStringList>
#include <unistd.h>
#include <imagedialogqt.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream out(stdout);
    QFileDialog* mpOpenDialog = new ImageDialogQt();
    mpOpenDialog->setAcceptMode(QFileDialog::AcceptOpen);
    mpOpenDialog->setFixedWidth(mpOpenDialog->width() + 300);
    mpOpenDialog->exec();

    QString path = mpOpenDialog->selectedFiles().first();

    out << path;
    out.flush();
    std::exit(0);

    return a.exec();
}
