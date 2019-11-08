/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *path1;
    QPushButton *in1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *path2;
    QPushButton *in2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *outPath;
    QPushButton *out;
    QPushButton *run;
    QTextEdit *list;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(484, 412);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(300, 200));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        path1 = new QLineEdit(centralWidget);
        path1->setObjectName(QString::fromUtf8("path1"));
        path1->setCursor(QCursor(Qt::IBeamCursor));

        horizontalLayout->addWidget(path1);

        in1 = new QPushButton(centralWidget);
        in1->setObjectName(QString::fromUtf8("in1"));

        horizontalLayout->addWidget(in1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        path2 = new QLineEdit(centralWidget);
        path2->setObjectName(QString::fromUtf8("path2"));

        horizontalLayout_2->addWidget(path2);

        in2 = new QPushButton(centralWidget);
        in2->setObjectName(QString::fromUtf8("in2"));

        horizontalLayout_2->addWidget(in2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        outPath = new QLineEdit(centralWidget);
        outPath->setObjectName(QString::fromUtf8("outPath"));

        horizontalLayout_3->addWidget(outPath);

        out = new QPushButton(centralWidget);
        out->setObjectName(QString::fromUtf8("out"));

        horizontalLayout_3->addWidget(out);


        verticalLayout->addLayout(horizontalLayout_3);

        run = new QPushButton(centralWidget);
        run->setObjectName(QString::fromUtf8("run"));

        verticalLayout->addWidget(run);

        list = new QTextEdit(centralWidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        list->setAcceptDrops(true);

        verticalLayout->addWidget(list);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 484, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "oldFile", nullptr));
        in1->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "newFile", nullptr));
        in2->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "outFile", nullptr));
        out->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        run->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
