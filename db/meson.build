db_srcs = [
  'db.c',
  'db-mgr.c',
]
db_inc_dirs = [
  inc,
]
db_deps = [
     cargs_dep,
     c_stringfn_dep,
     parson_dep,
     fs_dep,
     ansi_codes_dep, 
     bytes_dep,
     c_string_buffer_dep,
     sqlite3_dep
]

db_lib = library('db',
  db_srcs,
  install: false,
  dependencies: db_deps,
  include_directories: db_inc_dirs,
  c_args: [],
)

db_dep = declare_dependency(
  include_directories: db_inc_dirs,
  link_with: db_lib,
)
