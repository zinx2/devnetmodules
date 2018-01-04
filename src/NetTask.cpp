#include "nettask.h"
#include <QDebug>

#include <QNetworkReply>
#include <QSslError>
#include <QUrl>
#include <QAuthenticator>
#include "model.h"
#include <QThread>

NetTask::NetTask(QObject* parent) : QObject(parent)
{
	//		connect(&m_netManager, &QNetworkAccessManager::authenticationRequired, this, NetTask::requireAuth);
	//#ifndef QT_NO_SSL
	//		connect(&m_netManager, &QNetworkAccessManager::sslErrors, this, NetTask::errorSSl);
	//#endif
	m_model = Model::getInstance();
}
NetTask::~NetTask()
{
	delete m_model;
}

void NetTask::request(QString urlStr)
{
	QUrl url(urlStr);
	m_netReply = m_netManager.get(QNetworkRequest(url));
	
	connect(m_netReply, SIGNAL(finished()), this, SLOT(httpFinished()));
	connect(m_netReply, SIGNAL(readyRead()), this, SLOT(httpReadRead()));
	connect(m_netReply, SIGNAL(encrypted()), this, SLOT(httpEncrypted()));
	connect(m_netReply, SIGNAL(metaDataChanged()), this, SLOT(httpMetaDatachanged()));
	connect(m_netReply, SIGNAL(redirectAllowed()), this, SLOT(httpRedirectAllowed()));

	qDebug() << m_netReply->isFinished();
}