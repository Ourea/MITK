MITK_CREATE_MODULE(
  INCLUDE_DIRS Algorithms DataManagement Interactions IO Rendering
  DEPENDS MitkSceneSerializationBase MitkLegacyGL MitkOverlays
  WARNINGS_AS_ERRORS
)

IF( BUILD_TESTING )
add_subdirectory(Testing)
ENDIF()
