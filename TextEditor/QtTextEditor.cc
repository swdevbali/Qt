#include "QtTextEditor.h"

Notepad::Notepad()
{
    textEdit = new QTextEdit;
    btnOk = new QPushButton("Connect");

    QObject::connect(btnOk, SIGNAL(clicked()), this, SLOT(connectDatabase()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(btnOk);
    
    setLayout(layout);
    setWindowTitle("Better Notepad");

};

void Notepad::connectDatabase()
{
//    
     QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
     db.setHostName("localhost");
     db.setDatabaseName("distcentre");
     db.setUserName("root");
     db.setPassword("adminadmin");
     bool ok = db.open();
     if(ok)
     {
         qDebug() << "DB is connected";
     }else {
         qDebug() << "DB connection error";
         qApp->quit();
     }
};

int main(int argv, char **args)
{
    QApplication app(argv, args);
    Notepad note;
    note.resize(640,480);
    note.show();
    
    return app.exec();
}
