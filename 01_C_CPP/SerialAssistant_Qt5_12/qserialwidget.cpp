#include "qserialwidget.h"
#include "ui_qserialwidget.h"

QSerialWidget::QSerialWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QSerialWidget)
{
    ui->setupUi(this);
    //下面通过代码更新界面
}

QSerialWidget::~QSerialWidget()
{
    delete ui;
}

