# CMakeList.txt: data struct için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.
#
cmake_minimum_required (VERSION 3.8)

# Destekleniyorsa MSVC derleyicileri için Çalışırken Yeniden Yükleme aracını etkinleştirin.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("data struct")

# Kaynağı bu projenin yürütülebilir dosyasına ekleyin.
add_executable (CMakeTarget "data struct.cpp" "data struct.h" "graph/Graph.h" "graph/Graph.cpp" "linked list/Linked_list.h"  "binarytree/binary tree.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.
