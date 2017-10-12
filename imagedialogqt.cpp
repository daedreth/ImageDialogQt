#include "imagedialogqt.h"
#include <QLabel>
#include <QGridLayout>

ImageDialogQt::ImageDialogQt
(QWidget* parent,
    const QString &cap,
    const QString &dir,
    const QString &filter
):
    QFileDialog(parent, cap, dir, filter)
{
    setObjectName("ImageDialogQt");
    QVBoxLayout* newBox = new QVBoxLayout();

    imagePrev = new QLabel(tr("Preview"), this);
    imagePrev->setFixedWidth(300);
    imagePrev->setObjectName("labelPreview");
    imagePrev->setAlignment(Qt::AlignCenter);
    newBox->addWidget(imagePrev);

    {
        QGridLayout *newLayout = (QGridLayout*)this->layout();
        newLayout->addLayout(newBox, 1, 3, 3, 1);
    }
    connect(this, SIGNAL(currentChanged(const QString&)), this, SLOT(OnCurrentChanged(const QString&)));
}

void ImageDialogQt::OnCurrentChanged(const QString &selectedFil)
{
    QPixmap pixmap = QPixmap(selectedFil);
    if (pixmap.isNull())
    {
        imagePrev->setText("No preview available!");
    }
    else
    {
        imagePrev->setPixmap(pixmap.scaled(imagePrev->width(), imagePrev->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
