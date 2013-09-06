#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QDebug>
#include <QSqlDatabase>
#include <QApplication>
#include <QTextEdit>
#include <QtGui>
#include <QMainWindow>

class Notepad : public QWidget
{
Q_OBJECT   
public:
    Notepad();
         
private slots:
    void connectDatabase();

private:
    QTextEdit *textEdit;
    QPushButton *btnOk;
    
};
#endif //NOTEPAD_H
