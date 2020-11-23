#ifndef GMAP_H
#define GMAP_H

#include <QMainWindow>
#include <QMainWindow>
#include <QWidget>
#include <QWebEngineView>


QT_BEGIN_NAMESPACE
namespace Ui { class gmap; }
QT_END_NAMESPACE

class gmap : public QMainWindow
{
    Q_OBJECT

public:
    explicit gmap(QWidget *parent = nullptr);
    ~gmap();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::gmap *ui;
    QWebEngineView *m_view;
    QWebEnginePage *page;
};

#endif // GMAP_H

