#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vmime" for configuration "Debug"
set_property(TARGET vmime APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(vmime PROPERTIES
  IMPORTED_LOCATION_DEBUG "/FJW/BookFlavor/Source/ThirdParty/vmime/lib/libvmime.so.1.0.0"
  IMPORTED_SONAME_DEBUG "libvmime.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS vmime )
list(APPEND _IMPORT_CHECK_FILES_FOR_vmime "/FJW/BookFlavor/Source/ThirdParty/vmime/lib/libvmime.so.1.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
