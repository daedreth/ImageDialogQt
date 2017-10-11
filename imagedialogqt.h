#ifndef IMAGEDIALOGQT_H
#define IMAGEDIALOGQT_H

#include <QFileDialog>
#include <QLabel>

class ImageDialogQt : public QFileDialog
{
    Q_OBJECT
public:
    explicit ImageDialogQt
    (
        QWidget* parent = 0,
        const QString &cap = QString(),
        const QString &dir = QString(),
        const QString &filter = QString()
    );

protected slots:
    void OnCurrentChanged(const QString &selectedFil);

protected:
    QLabel* imagePrev;

};

#endif // IMAGEDIALOGQT_H
