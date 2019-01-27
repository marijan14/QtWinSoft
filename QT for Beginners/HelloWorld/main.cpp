#include <QtWidgets/QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Hello World");
    button.setText("Hello World (Set)");
    button.setToolTip("A tooltip");
    button.show();

    QFont font("Courier");
    button.setFont(font);
    button.setIcon(QIcon::fromTheme("face-smile"));

    return app.exec();
}
