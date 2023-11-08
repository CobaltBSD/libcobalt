#pragma once

#include <sys/types.h>
#include <stdint.h>

struct icdb;

struct icdb *icdb_new(uint32_t version, uint32_t nentries, uint32_t entrysize, uint32_t nkeys, const uint32_t *keysizes, const uint32_t *keyoffsets);
struct icdb *icdb_open(const char *name, int flags, uint32_t version);
int icdb_get(struct icdb *db, void *entry, uint32_t idx);
int icdb_lookup(struct icdb *db, int keynum, const void *key, void *entry, uint32_t *idxp);
int icdb_nentries(struct icdb *db);
const void *icdb_entries(struct icdb *db);
int icdb_update(struct icdb *db, const void *entry, int offset);
int icdb_add(struct icdb *db, const void *entry);
int icdb_rehash(struct icdb *db);
int icdb_save(struct icdb *db, int fd);
int icdb_close(struct icdb *db);
