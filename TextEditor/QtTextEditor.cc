#include <QApplication>
#include <QTextEdit>
#include <QtGui>


class Notepad : public QWidget
{
   
public:
    Notepad();
         
private slots:
    void quit();

private:
    QTextEdit *textEdit;
    QPushButton *btnOk;
    
};

Notepad::Notepad()
{
    textEdit = new QTextEdit;
    btnOk = new QPushButton("Quit");

    connect(btnOk, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(btnOk);
    
    setLayout(layout);
    setWindowTitle("Better Notepad");

};

void Notepad::quit()
{
    qApp->quit();
}

int main(int argv, char **args)
{
    QApplication app(argv, args);
    Notepad note;
    note.resize(640,480);
    note.show();
    
    return app.exec();
}
