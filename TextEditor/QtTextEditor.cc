#include <QApplication>
#include <QTextEdit>
#include <QtGui>

int main(int argv, char **args)
{
    QApplication app(argv, args);
    QTextEdit *textEdit = new QTextEdit;
    QPushButton *btnOk = new QPushButton("OK");
    QObject::connect(btnOk, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(btnOk);
    
    QWidget window;
    window.setLayout(layout);
    window.show();
    
    return app.exec();
}
