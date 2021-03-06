/**
 * Copyright (C) 2014 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a notifications_dbus_adaptor -c NotificationsDBusAdaptor org.freedesktop.Notifications.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "notifications_dbus_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include "bubblemanager.h"

#include <DDesktopServices>

DUTIL_USE_NAMESPACE

/*
 * Implementation of adaptor class NotificationsDBusAdaptor
 */

NotificationsDBusAdaptor::NotificationsDBusAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NotificationsDBusAdaptor::~NotificationsDBusAdaptor()
{
    // destructor
}

void NotificationsDBusAdaptor::CloseNotification(uint in0)
{
    // handle method call org.freedesktop.Notifications.CloseNotification
    QMetaObject::invokeMethod(parent(), "CloseNotification", Q_ARG(uint, in0));
}

QStringList NotificationsDBusAdaptor::GetCapbilities()
{
    // handle method call org.freedesktop.Notifications.GetCapbilities
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "GetCapbilities", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

QString NotificationsDBusAdaptor::GetServerInformation(QString &out1, QString &out2, QString &out3)
{
    // handle method call org.freedesktop.Notifications.GetServerInformation
    return static_cast<BubbleManager*>(parent())->GetServerInformation(out1, out2, out3);
}

uint NotificationsDBusAdaptor::Notify(const QString &in0, uint in1, const QString &in2, const QString &in3, const QString &in4, const QStringList &in5, const QVariantMap &in6, int in7)
{
    DDesktopServices::playSystemSoundEffect(DDesktopServices::SSE_Notifications);

    // handle method call org.freedesktop.Notifications.Notify
    uint out0;
    QMetaObject::invokeMethod(parent(), "Notify", Q_RETURN_ARG(uint, out0), Q_ARG(QString, in0), Q_ARG(uint, in1), Q_ARG(QString, in2), Q_ARG(QString, in3), Q_ARG(QString, in4), Q_ARG(QStringList, in5), Q_ARG(QVariantMap, in6), Q_ARG(int, in7));
    return out0;
}

QString NotificationsDBusAdaptor::GetAllRecords()
{
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetAllRecords", Q_RETURN_ARG(QString, out0));
    return out0;
}

void NotificationsDBusAdaptor::RemoveRecord(const QString &id)
{
    QMetaObject::invokeMethod(parent(), "RemoveRecord", Q_ARG(QString, id));
}

void NotificationsDBusAdaptor::ClearRecords()
{
    QMetaObject::invokeMethod(parent(), "ClearRecords");
}

