cmake_minimum_required(VERSION 3.4)

aux_source_directory(. CSS_PARSER_SRC)
file(GLOB CSS_PARSER_HEADER ./css/*.h)

add_executable(css_parser ${CSS_PARSER_SRC})