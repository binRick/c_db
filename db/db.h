#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
//////////////////////////////////////////////////////
#include "ansi-codes/ansi-codes.h"
#include "bytes/bytes.h"
#include "db/db-mgr.h"
#include "fs.h"
#include "parson.h"
#include "stringfn.h"
//////////////////////////////////////////////////////
#define PALETTEDB_MAX_HASH_BUCKETS    65535 * 256
//////////////////////////////////////////////////////
typedef struct PalettesDB PalettesDB;
struct PalettesDB {
  char      *Path;
  palettedb db;
};
//////////////////////////////////////////////////////
int palettesdb_list_ids(PalettesDB *DB);
int palettsdb_list_type_ids(PalettesDB *DB, palettedb_type TYPEID);
int palettesdb_count_ids(PalettesDB *DB);
int palettesdb_count_type_ids(PalettesDB *DB, palettedb_type TYPEID);
palettedb_id add_palettedb_if_not_exist(PalettesDB *DB, palettedb_type TYPEID, char *RECORD);
palettedb_id add_palettedb(PalettesDB *DB, palettedb_type TYPEID, char *RECORD);
int init_palettes_db(PalettesDB *);
bool db_typeid_exists(PalettesDB *, palettedb_type TYPEID);
unsigned long palettedb_hash(char *key, int length);
int db_list_ids(PalettesDB *DB);

//////////////////////////////////////////////////////
