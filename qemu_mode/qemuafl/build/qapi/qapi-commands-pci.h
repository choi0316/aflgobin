/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_PCI_H
#define QAPI_COMMANDS_PCI_H

#include "qapi-types-pci.h"

PciInfoList *qmp_query_pci(Error **errp);
void qmp_marshal_query_pci(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_PCI_H */
