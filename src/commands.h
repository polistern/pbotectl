/*
 * commands.h: interfaces of available commands
 * Copyright (C) 2019-2022 polistern
 * 
 * This file is part of pbotectl.
 *
 * pbotectl is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * pbotectl is distributed in the hope that it will be useful,but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with pbotectl. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef PBOTECTL_COMMANDS_H
#define PBOTECTL_COMMANDS_H

#define DEFAULT_BUFFER_SIZE 8192

void make_request (const char *request, char *buffer);

int cmd_help (int argc, const char **argv, const char *prefix);
// cmd_version defined in version.h

int cmd_show (int argc, const char **argv, const char *prefix);
//int cmd_status (int argc, const char **argv, const char *prefix);

/// mail command
//int cmd_mail (int argc, const char **argv, const char *prefix);
//int cmd_task (int argc, const char **argv, const char *prefix);
//int cmd_alias (int argc, const char **argv, const char *prefix);

/// bote commands
int cmd_daemon (int argc, const char **argv, const char *prefix);
int cmd_identity (int argc, const char **argv, const char *prefix);
int cmd_node (int argc, const char **argv, const char *prefix);
int cmd_peer (int argc, const char **argv, const char *prefix);
int cmd_storage (int argc, const char **argv, const char *prefix);

#endif // PBOTECTL_COMMANDS_H
