/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef MITKDIFFUSIONIOMIMETYPES_H
#define MITKDIFFUSIONIOMIMETYPES_H

#include "mitkCustomMimeType.h"
#include <MitkDiffusionIOExports.h>

#include <string>

namespace mitk {

class DiffusionIOMimeTypes
{
public:

  class MitkDiffusionIO_EXPORT DiffusionImageNrrdMimeType : public CustomMimeType
  {
  public:
    DiffusionImageNrrdMimeType();
    virtual bool AppliesTo(const std::string &path) const;
    virtual DiffusionImageNrrdMimeType* Clone() const;
  };

  class MitkDiffusionIO_EXPORT DiffusionImageNiftiMimeType : public CustomMimeType
  {
  public:
    DiffusionImageNiftiMimeType();
    virtual bool AppliesTo(const std::string &path) const;
    virtual DiffusionImageNiftiMimeType* Clone() const;
  };
  // Get all Diffusion Mime Types
  static std::vector<CustomMimeType*> Get();

  // ------------------------------ VTK formats ----------------------------------

  static CustomMimeType FIBERBUNDLE_MIMETYPE(); // fib

  static std::string FIBERBUNDLE_MIMETYPE_NAME();

  static std::string FIBERBUNDLE_MIMETYPE_DESCRIPTION();

  // ------------------------- Image formats (ITK based) --------------------------

  static DiffusionImageNrrdMimeType DWI_NRRD_MIMETYPE();
  static DiffusionImageNiftiMimeType DWI_NIFTI_MIMETYPE();
  static CustomMimeType DTI_MIMETYPE(); // dti, hdti
  static CustomMimeType QBI_MIMETYPE(); // qbi, hqbi

  static std::string DWI_NRRD_MIMETYPE_NAME();
  static std::string DWI_NIFTI_MIMETYPE_NAME();
  static std::string DTI_MIMETYPE_NAME();
  static std::string QBI_MIMETYPE_NAME();

  static std::string DWI_NRRD_MIMETYPE_DESCRIPTION();
  static std::string DWI_NIFTI_MIMETYPE_DESCRIPTION();
  static std::string DTI_MIMETYPE_DESCRIPTION();
  static std::string QBI_MIMETYPE_DESCRIPTION();

  // ------------------------------ MITK formats ----------------------------------

  static CustomMimeType CONNECTOMICS_MIMETYPE(); // cnf

  static std::string CONNECTOMICS_MIMETYPE_NAME();

  static std::string CONNECTOMICS_MIMETYPE_DESCRIPTION();

private:

  // purposely not implemented
  DiffusionIOMimeTypes();
  DiffusionIOMimeTypes(const DiffusionIOMimeTypes&);
};

}

#endif // MITKDIFFUSIONIOMIMETYPES_H
