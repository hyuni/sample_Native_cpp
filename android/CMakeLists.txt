cmake_minimum_required(VERSION 3.4.1)

# 카운터 라이브러리를 정적 라이브러리로 생성
add_library(counter_static STATIC
            src/main/cpp/counter.cpp)

# JNI 래퍼를 공유 라이브러리로 생성
add_library(counter SHARED
            src/main/cpp/counter_jni.cpp)

# 정적 라이브러리를 공유 라이브러리에 링크
target_link_libraries(counter counter_static)

# 헤더 파일 포함 경로 설정
target_include_directories(counter_static PUBLIC 
                          ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp)
target_include_directories(counter PUBLIC 
                          ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp)
