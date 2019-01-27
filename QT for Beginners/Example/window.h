#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
private:
    int m_counter;
    QPushButton *m_button;
signals:
    void counterReached();
public slots:
    void slotButtonClicked(bool checked);
};

#endif // WINDOW_H
