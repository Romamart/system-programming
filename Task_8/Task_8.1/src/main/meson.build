myproject_src = files(['main.cpp'])
thread_dep = dependency('threads')
executable('main',
    include_directories: src,
    sources: myproject_src,
    dependencies: [thread_dep],
    install: true
)
