project('c_db', ['c'],default_options: ['warning_level=0','c_std=gnu99'],version: '0.0.1',
  subproject_dir: 'submodules/meson_deps/subprojects',
  )
cc = meson.get_compiler('c')
passh_program = find_program('passh', required : true)
pwd = meson.current_source_dir()
meson_deps_dir = join_paths(meson.current_source_dir(),'submodules/meson_deps')
inc = [
  include_directories(
    'db', '.',
  ),
  include_directories(
    'submodules/meson_deps/submodules','submodules/meson_deps','submodules/meson_deps/vendor',
    'submodules/meson_deps/submodules/fs.c',
    'submodules/meson_deps/submodules/c_ansi',
    'submodules/meson_deps/submodules/c_string_buffer/include',
    'submodules/meson_deps/submodules/c_stringfn/include',
  ),
]
#//////////////////////////////////////////////////////////////////////
subdir('submodules/meson_deps/meson/sqlite3')
subdir('submodules')
subdir('meson')
#//////////////////////////////////////////////////////////////////////
subdir('db')
subdir('db-test')
#//////////////////////////////////////////////////////////////////////
