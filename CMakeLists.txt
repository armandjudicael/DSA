cmake_minimum_required(VERSION 3.24)
project(DSA C)
set(CMAKE_C_STANDARD 11)
add_executable(DSA main.c sourceFile/substraction.c header/substraction.h sourceFile/BasicMatrixOperation.c header/BasicMatrixOperation.h sourceFile/MatrixScalarMultiplication.c header/MatrixScalarMultiplication.h sourceFile/MatrixAddition.c header/MatrixAddition.h sourceFile/MatrixMultiplication.c header/MatrixMultiplication.h)
