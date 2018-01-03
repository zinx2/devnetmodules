#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "display_information.h"
#include "model.h"
#include "option.h"
#include "nettask.h"

#include <QThread>

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    DisplayInfo dpInfo;
	Model *model = new Model();
	Option opt; opt.setDs(false);

    //qmlRegisterType<Concept>("concept", 1, 0, "Concept");
	//QTimer* m_timer = new QTimer(this);
	QThread* q = new QThread();
	NetTask* nt = new NetTask();
	nt->setModel(model);
	nt->setTimer();
	nt->moveToThread(q);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("di", &dpInfo);
	engine.rootContext()->setContextProperty("md", model);
	engine.rootContext()->setContextProperty("opt", &opt);

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
