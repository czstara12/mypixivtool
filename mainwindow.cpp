#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qfiledialog.h>
#include <qstring.h>
#include <fstream>
#include <set>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_in1_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter("TXT (*.txt)");
    QStringList fileNames;
    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    this->ui->path1->setText(fileNames[0]);
}

void MainWindow::on_in2_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter("TXT (*.txt)");
    QStringList fileNames;
    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    this->ui->path2->setText(fileNames[0]);
}

void MainWindow::on_out_clicked()
{
    QFileDialog dialog(this);
    dialog.setNameFilter("TXT (*.txt)");
    QStringList fileNames;
    if (dialog.exec())
        fileNames = dialog.selectedFiles();
    this->ui->outPath->setText(fileNames[0]);
}

void MainWindow::on_run_clicked()
{
    using namespace std;
    ifstream fin1, fin2;
    ofstream fout;
    fin1.open(this->ui->path1->text().toStdString());
    fin2.open(this->ui->path2->text().toStdString());
    fout.open(this->ui->outPath->text().toStdString());
    if(!fin1||!fin2)
        return;
    string str;
    set<string> lib;
    while (fin1 >> str)
        lib.insert(str);
    while (fin2 >> str)
    {
        if (lib.find(str)==lib.end())
        {
            if(fout)
            fout << str << endl;
            this->ui->list->append(QString(str.c_str()));
        }
    }
    fin1.close();
    fin2.close();
    if(fout)
    fout.close();

}
