#pragma once

#include <QObject>
#include <QThread>
#include "model.h"
#include "nettask.h"
class NetWorker : public QObject
{
	Q_OBJECT
public:
	NetWorker(Model* m, QObject *parent = NULL) : QObject(parent)
	{
		m_netTask = new NetTask(this);
		QThread* th = new QThread(this);
		m_netTask->moveToThread(th);
		m_netTask->setModel(m);
	}

	/*NetWorker* getInstance()
	{
		if (m_instance == nullptr)
			m_instance = new NetWorker();
		return m_instance;
	}*/
	
private:
	NetWorker* m_instance;
	NetTask* m_netTask;
};