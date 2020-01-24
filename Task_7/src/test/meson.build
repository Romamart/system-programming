gtest = dependency('gtest', main: true)
test(
    'myTests',
    executable(
        'Tests',
        sources: ['test_for_ln.cpp'],
        include_directories: src,
        dependencies: [gtest]
    )
)
myproject_src = files([
	'main.cpp'
])

executable(
	'myproject', # название исполняемого файла
	include_directories: src, # где ищутся заголовочные файлы
	sources: myproject_src, # список исходный файлов
	dependencies: [], # зависимости проекта (если имеются)
	install: true # устанавливать ли файл
)