gtest = dependency('gtest', main: true)
test(
    'myTests',
    executable(
        'Tests',
        sources: ['FigurTest.cpp', 'PolynomialTest.cpp'],
        include_directories: src,
        dependencies: [gtest]
    )
)
