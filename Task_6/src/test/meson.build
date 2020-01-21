gtest = dependency('gtest', main: true)
test(
    'myTests',
    executable(
        'Tests',
        sources: ['PolynomialTest.cpp'],
        include_directories: src,
        dependencies: [gtest]
    )
)
