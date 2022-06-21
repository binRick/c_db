#include "db-test.h"
#include "db.h"

int res = -1;

void test_db_init(PalettesDB *db) {
    res = init_palettes_db(db);
    printf("db path:%s\n", db->Path);
    printf("db init res:%d\n", res);
}


void test_db_ids(PalettesDB *db) {
  printf("db path:%s\n", db->Path);
  res = db_list_ids(db);
  printf("db ids res:%d\n", res);
}



int main(int argc, char **argv) {
  char *rec = malloc(32);
  sprintf(rec,"%s","abc");
  PalettesDB *PDB = malloc(sizeof(PalettesDB));
  PDB->Path = strdup("etc/db-test1.sqlite");
  test_db_init(PDB);
  test_db_ids(PDB);
  //add_palettedb_if_not_exist(PDB,1000,rec);
  bool exists = db_typeid_exists(PDB,100);
  printf("exists :%d\n",exists);
  return(0);
}
