// Compiler for PHP (aka KPHP)
// Copyright (c) 2020 LLC «V Kontakte»
// Distributed under the GPL v3 License, see LICENSE.notice.txt

#pragma once

#include "net/net-connections.h"
#include "net/net-msg.h"

int master_rpc_tl_execute(connection *c, int op, raw_message_t *raw);
