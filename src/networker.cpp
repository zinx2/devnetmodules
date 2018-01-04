#include "networker.h"
#include <QNetworkReply>

NetWorker::NetWorker(Model* m, QObject *parent) : QObject(parent)
{
	m_netTask = new NetTask(this);
	QThread* th = new QThread(this);
	m_netTask->moveToThread(th);
	m_model = Model::getInstance();
}
NetWorker::~NetWorker()
{
	delete m_model;
}

void NetWorker::httpFinished()
{
	m_model->setError("Error ..");
}

void NetWorker::httpReadRead()
{
	m_model->setError("Ready read.");
}
void NetWorker::httpEncrypted()
{
	m_model->setError("Ready read.");
}

void NetWorker::httpMetaDataChanged()
{
	m_model->setError("Ready read.");
}
void NetWorker::httpRedirectAllowed()
{
	m_model->setError("Ready read.");
}