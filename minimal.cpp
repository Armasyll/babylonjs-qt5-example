#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtwebengineglobal.h>

int main(int argc, char *argv[]) {
    QCoreApplication::setOrganizationName("QtExamples");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts, true);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;


    QtWebEngine::initialize();

    engine.load(QUrl("minimalWindow.qml"));

    return app.exec();
}
