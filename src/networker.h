#pragma once

#include <QObject>
#include <QThread>
#include "model.h"
#include "nettask.h"

class QNetworkReply;
class NetWorker : public QObject
{
	Q_OBJECT
public:
	NetWorker(Model* m, QObject *parent = NULL);
	~NetWorker();

	public slots:
	void httpFinished();
	void httpReadRead();
	void httpEncrypted();
	void httpMetaDataChanged();
	void httpRedirectAllowed();
	
private:
	NetWorker* m_instance;
	NetTask* m_netTask;
	QNetworkReply* m_netReply;
	Model* m_model;
};