project('c_db', ['c'],default_options: ['warning_level=0','c_std=gnu99'])
cc = meson.get_compiler('c')
pwd = meson.current_source_dir()
meson_deps_dir = join_paths(meson.current_source_dir(),'submodules/meson_deps')
inc = [
  include_directories(
  './db',
  'submodules/meson_deps',
  'submodules/meson_deps/vendor',
  'submodules/meson_deps/submodules',
  'submodules/meson_deps/submodules/fs.c',
  'submodules/meson_deps/submodules/c_ansi',
  )
]
#//////////////////////////////////////////////////////////////////////
subdir('submodules/meson_deps/meson/args')
subdir('submodules/meson_deps/meson/inc')
#//////////////////////////////////////////////////////////////////////
subdir('submodules/meson_deps/meson/deps/sqlite3')
subdir('submodules/meson_deps/meson/deps/cargs')
subdir('submodules/meson_deps/meson/deps/parson')
subdir('submodules/meson_deps/meson/deps/c_stringfn')
subdir('submodules/meson_deps/meson/deps/c_string_buffer')
subdir('submodules/meson_deps/meson/deps/c_fsio')
subdir('submodules/meson_deps/meson/deps/fs')
subdir('submodules/meson_deps/meson/deps/bytes')
subdir('submodules/meson_deps/meson/deps/greatest')
subdir('submodules/meson_deps/meson/deps/ansicodes')
#//////////////////////////////////////////////////////////////////////
subdir('db')
subdir('db-test')
#//////////////////////////////////////////////////////////////////////
