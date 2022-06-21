db_test_srcs = [
  'db-test.c',
]
db_include_dirs = [
  inc,
]
db_test_deps = [
  c_stringfn_dep,
  db_dep,
]

if get_option('enable-binaries')
  db_test_exec = executable('db-test',
      db_test_srcs,
     dependencies: db_test_deps,
     include_directories: db_include_dirs,
  )
endif
