#pragma once
#include <QObject>
#include <QNetworkAccessManager>

class QNetworkReply;
class Model;
class NetTask : public QObject
{
	Q_OBJECT
      
public:
	explicit NetTask(QObject* parent = 0);
	void setModel(Model* m) { m_model = m; }

	public slots:
	void request(QString urlStr);
	void test();
	void title();
	void httpFinished();
	void httpReadRead();
	void httpEncrypted();
	void httpMetaDataChanged();
	void httpRedirectAllowed();

private:	
	Model* m_model = nullptr;
	int cnt = 0;

	QNetworkAccessManager m_netManager;
	QNetworkReply *m_netReply;
};