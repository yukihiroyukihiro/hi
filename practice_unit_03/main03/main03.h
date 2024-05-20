#ifndef MAIN03_H
#define MAIN03_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class main03; }
QT_END_NAMESPACE

class main03 : public QMainWindow
{
    Q_OBJECT

public:
    friend class main03;    // 2.要加的
    main03(QWidget *parent = nullptr);
    ~main03();
    Ui::main03 *ui; //1.搬到public

private slots:
    void on_pushButton_clicked();

private:
//    Ui::main03 *ui; // 1.搬到public
};
#endif // MAIN03_H
