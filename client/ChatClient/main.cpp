#include "mainwidget.h"

#include <QApplication>

#include "model/data.h"
#include "debug.h"

#include "loginwidget.h"

#include "model/datacenter.h"

FILE* output = nullptr;

void msgHandler(QtMsgType type, const QMessageLogContext& context, const QString& msg) {
    (void) type;
    (void) context;
    const QByteArray& log = msg.toUtf8();
    fprintf(output, "%s\n", log.constData());
    fflush(output);		// 确保数据落入硬盘
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#if DEPOLY
    output = fopen("./log.txt", "a");
    qInstallMessageHandler(msgHandler);
#endif

#if TEST_SKIP_LOGIN
    MainWidget* w = MainWidget::getInstance();
    w->show();
#else
    LoginWidget* loginWidget = new LoginWidget(nullptr);
    loginWidget->show();
#endif

#if TEST_NETWORK
    // network::NetClient netClient(nullptr);
    // netClient.ping();

    model::DataCenter* dataCenter = model::DataCenter::getInstance();
    dataCenter->ping();
#endif
    return a.exec();
}
