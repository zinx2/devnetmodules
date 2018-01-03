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
	Model model;
	Option opt; opt.setDs(false);

    //qmlRegisterType<Concept>("concept", 1, 0, "Concept");
	
	QThread* q = new QThread();
	NetTask* nt = new NetTask();
	nt->moveToThread(q);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("di", &dpInfo);
	engine.rootContext()->setContextProperty("md", &model);
	engine.rootContext()->setContextProperty("opt", &opt);

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
