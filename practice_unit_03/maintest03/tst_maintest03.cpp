#include <QtTest>
#include <QCoreApplication>

#include "../main03/main03.h"  //8.要加的
#include "ui_main03.h"    //9.要加的

// add necessary includes here

class maintest03 : public QObject
{
    Q_OBJECT

public:
    maintest03();
    ~maintest03();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
//    void toUpper_data();
//    void toUpper();

private:
    main03 m_tool; //10.要加的
//    main03* m_tool = nullptr; //10.要加的
};

maintest03::maintest03()
{

}

maintest03::~maintest03()
{

}

void maintest03::initTestCase()
{

}

void maintest03::cleanupTestCase()
{

}

void maintest03::test_case1() //範例：按下button後，檢查lineedit內容為BBBB
{
    QTest::mouseClick(m_tool.ui->pushButton, Qt::LeftButton);   //11.要加的
    QCOMPARE(m_tool.ui->lineEdit->text(), "BBBB");
}

void maintest03::test_case2() //範例：在spinbox輸入20檢查是否為20
{
    QTest::keyClicks(m_tool.ui->spinBox, "20");
    // qDebug() << m_tool.ui->spinBox->value();
    QVERIFY(m_tool.ui->spinBox->text() == "20");
}

void maintest03::test_case3() //範例：擊點一次checkbox，檢查checkbox是為啟動狀態.
{
    QTest::mouseClick(m_tool.ui->checkBox, Qt::LeftButton);
    // qDebug() << m_tool.ui->checkBox->checkState();
    QVERIFY(m_tool.ui->checkBox->isChecked());
}

void maintest03::test_case4() //範例：檢查LABEL的內容是1234
{
    // qDebug() << m_tool.ui->label->text();
    QVERIFY(m_tool.ui->label->text() == "1234");
}




//void maintest03::toUpper()
//{
//    QFETCH(QString, string);
//    QFETCH(QString, result);

////    m_tool.ui->lineEdit->setText(string);
////    QCOMPARE(m_tool.ui->lineEdit->text(), "HELLO");
//      QCOMPARE(string.toUpper(), result);
////    QCOMPARE(string, result);
//}


//void maintest03::toUpper_data()
//{
//    QTest::addColumn<QString>("string");
//    QTest::addColumn<QString>("result");

//    QTest::newRow("all-lower") << "hello" << "HELLO";
//    QTest::newRow("mixed")     << "Hello" << "HELLO";
//    QTest::newRow("all-upper") << "HELLO" << "HELLO";
//}


QTEST_MAIN(maintest03)

#include "tst_maintest03.moc"
