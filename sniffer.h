#ifndef SNIFFER_H
#define SNIFFER_H

#include <QWidget>

namespace Ui {
class sniffer;
}

class sniffer : public QWidget
{
    Q_OBJECT

public:
    explicit sniffer(QWidget *parent = 0);
    ~sniffer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sniffer *ui;
};

#endif // SNIFFER_H
