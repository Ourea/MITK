MITK_CREATE_MODULE(
  SUBPROJECTS MITK-Registration
  DEPENDS MitkCore
  PACKAGE_DEPENDS ITK|ITKRegistrationCommon
  EXPORT_DEFINE MITK_RIGIDREGISTRATION_EXPORT
)

add_subdirectory(Testing)
