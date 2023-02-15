#ifndef PROYECTO1_OLC2_HPP
#define PROYECTO1_OLC2_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Proyecto1_OLC2; }
QT_END_NAMESPACE

class Proyecto1_OLC2 : public QMainWindow
{
    Q_OBJECT

public:
    Proyecto1_OLC2(QWidget *parent = nullptr);
    ~Proyecto1_OLC2();

private:
    Ui::Proyecto1_OLC2 *ui;
};
#endif // PROYECTO1_OLC2_HPP
