#ifndef QSERIALWIDGET_H
#define QSERIALWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class QSerialWidget; }
QT_END_NAMESPACE



class QSerialWidget : public QWidget
{
    Q_OBJECT
   // QSerialPort *skySerialPort;

public:
    QSerialWidget(QWidget *parent = nullptr);
    ~QSerialWidget();


private:
    Ui::QSerialWidget *ui;
};
#endif // QSERIALWIDGET_H
