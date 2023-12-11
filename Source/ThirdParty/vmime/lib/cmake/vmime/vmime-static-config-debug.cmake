#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vmime-static" for configuration "Debug"
set_property(TARGET vmime-static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(vmime-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "/FJW/BookFlavor/Source/ThirdParty/vmime/lib/libvmime.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS vmime-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_vmime-static "/FJW/BookFlavor/Source/ThirdParty/vmime/lib/libvmime.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
