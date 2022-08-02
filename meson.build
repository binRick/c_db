project('c_db', ['c'],default_options: ['warning_level=0','c_std=gnu99'],version: '0.0.1',
  subproject_dir: 'submodules/c_deps/subprojects',
  )
cc = meson.get_compiler('c')
passh_program = find_program('passh', required : true)
pwd = meson.current_source_dir()
c_deps_dir = join_paths(meson.current_source_dir(),'submodules/c_deps')
inc = [
  include_directories(
    'db', '.',
  ),
  include_directories(
    'submodules/c_deps/submodules','submodules/c_deps','submodules/c_deps/vendor',
    'submodules/c_deps/submodules/fs.c',
    'submodules/c_deps/submodules/c_ansi',
    'submodules/c_deps/submodules/c_string_buffer/include',
    'submodules/c_deps/submodules/c_stringfn/include',
  ),
]
#//////////////////////////////////////////////////////////////////////
subdir('submodules/c_deps/meson/sqlite3')
subdir('submodules')
subdir('meson')
#//////////////////////////////////////////////////////////////////////
subdir('db')
subdir('db-test')
#//////////////////////////////////////////////////////////////////////
