#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QPushButton button1("Test");
    QPushButton button2("Other", &button1);

    button1.show();

    return app.exec();
}
