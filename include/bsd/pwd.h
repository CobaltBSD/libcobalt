#pragma once

#include <pwd.h>

int uid_from_user(const char *name, uid_t *uid);
const char *user_from_uid(uid_t uid, int noname);

