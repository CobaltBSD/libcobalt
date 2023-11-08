#pragma once

#include <grp.h>

int gid_from_group(const char *name, gid_t *gid);
const char *group_from_gid(gid_t gid, int noname);
