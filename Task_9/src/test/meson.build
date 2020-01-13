gtest = dependency('gtest', main:true)
all_files = [
             'Task_3_test',
             'Task_4_test',
             'Task_5_test_1',
             'Task_5_test_2',
             'Task_10_test',
            ]
foreach name : all_files
    src_file = name + '.cpp'
    test(name ,executable(name,
                    sources: src_file,
                    include_directories: src,
                dependencies: [gtest]
        )
    )
endforeach