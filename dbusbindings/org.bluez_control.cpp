/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p org.bluez_control.h:org.bluez_control.cpp org.bluez.control.xml org.bluez.Control
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "org.bluez_control.h"

/*
 * Implementation of interface class OrgBluezControlInterface
 */

OrgBluezControlInterface::OrgBluezControlInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgBluezControlInterface::~OrgBluezControlInterface()
{
}
