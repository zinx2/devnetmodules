#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "display_information.h"
#include "model.h"
#include "option.h"
#include "networker.h"
#include <QThread>

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    DisplayInfo dpInfo;
	Model *model = Model::getInstance();//new Model();
	Option opt; opt.setDs(false);

    NetWorker wk;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("di", &dpInfo);
	engine.rootContext()->setContextProperty("md", model);
    engine.rootContext()->setContextProperty("wk", &wk);
	engine.rootContext()->setContextProperty("opt", &opt);

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
