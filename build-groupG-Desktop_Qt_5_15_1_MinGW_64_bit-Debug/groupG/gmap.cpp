#include "gmap.h"
#include "ui_gmap.h"
#include <QMessageBox>

gmap::gmap(QWidget *parent) :
    QMainWindow(parent)
    , ui(new Ui::gmap)
    , m_view(new QWebEngineView(this))
{
    setCentralWidget(m_view);
    //ui->widget->m_view;
    page = m_view->page();

    /*
    connect(page, &QWebEnginePage::featurePermissionRequested,
            [this, page](const QUrl &securityOrigin, QWebEnginePage::Feature feature) {
        if (feature != QWebEnginePage::Geolocation)
            return;

        QMessageBox msgBox(this);
        msgBox.setText(tr("%1 wants to know your location").arg(securityOrigin.host()));
        msgBox.setInformativeText(tr("Do you want to send your current location to this website?"));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

        if (msgBox.exec() == QMessageBox::Yes) {
            page->setFeaturePermission(
                securityOrigin, feature, QWebEnginePage::PermissionGrantedByUser);
        } else {
            page->setFeaturePermission(
                securityOrigin, feature, QWebEnginePage::PermissionDeniedByUser);
        }
    });
*/
    page->load(QUrl(QStringLiteral("https://maps.google.com")));
}

void gmap::closeEvent(QCloseEvent *event) {
    setAttribute(Qt::WA_DeleteOnClose);
    QMainWindow::closeEvent(event);
}

gmap::~gmap()
{
    delete ui;
    m_view = nullptr;
    delete m_view;
    page = nullptr;
    delete page;
}
