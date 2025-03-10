//
// Copyright 2023 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#ifndef PXR_USD_IMAGING_USD_IMAGING_DIRECT_MATERIAL_BINDING_SCHEMA_H
#define PXR_USD_IMAGING_USD_IMAGING_DIRECT_MATERIAL_BINDING_SCHEMA_H

/// \file

#include "pxr/usdImaging/usdImaging/api.h"

#include "pxr/imaging/hd/schema.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

// --(BEGIN CUSTOM CODE: Declares)--
// --(END CUSTOM CODE: Declares)--

#define USD_IMAGING_DIRECT_MATERIAL_BINDING_SCHEMA_TOKENS \
    (directMaterialBinding) \
    (materialPath) \
    (bindingStrength) \

TF_DECLARE_PUBLIC_TOKENS(UsdImagingDirectMaterialBindingSchemaTokens, USDIMAGING_API,
    USD_IMAGING_DIRECT_MATERIAL_BINDING_SCHEMA_TOKENS);

//-----------------------------------------------------------------------------


class UsdImagingDirectMaterialBindingSchema : public HdSchema
{
public:
    /// \name Schema retrieval
    /// @{

    UsdImagingDirectMaterialBindingSchema(HdContainerDataSourceHandle container)
      : HdSchema(container) {}

    /// Retrieves a container data source with the schema's default name token
    /// "directMaterialBinding" from the parent container and constructs a
    /// UsdImagingDirectMaterialBindingSchema instance.
    /// Because the requested container data source may not exist, the result
    /// should be checked with IsDefined() or a bool comparison before use.
    USDIMAGING_API
    static UsdImagingDirectMaterialBindingSchema GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer);

    /// @}

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

    /// \name Member accessor
    /// @{

    USDIMAGING_API
    HdPathDataSourceHandle GetMaterialPath() const;

    USDIMAGING_API
    HdTokenDataSourceHandle GetBindingStrength() const; 

    /// @}

    /// \name Schema location
    /// @{

    /// Returns a token where the container representing this schema is found in
    /// a container by default.
    USDIMAGING_API
    static const TfToken &GetSchemaToken();

    /// Returns an HdDataSourceLocator (relative to the prim-level data source)
    /// where the container representing this schema is found by default.
    USDIMAGING_API
    static const HdDataSourceLocator &GetDefaultLocator();

    /// @} 

    /// \name Schema construction
    /// @{

    /// \deprecated Use Builder instead.
    ///
    /// Builds a container data source which includes the provided child data
    /// sources. Parameters with nullptr values are excluded. This is a
    /// low-level interface. For cases in which it's desired to define
    /// the container with a sparse set of child fields, the Builder class
    /// is often more convenient and readable.
    USDIMAGING_API
    static HdContainerDataSourceHandle
    BuildRetained(
        const HdPathDataSourceHandle &materialPath,
        const HdTokenDataSourceHandle &bindingStrength
    );

    /// \class UsdImagingDirectMaterialBindingSchema::Builder
    /// 
    /// Utility class for setting sparse sets of child data source fields to be
    /// filled as arguments into BuildRetained. Because all setter methods
    /// return a reference to the instance, this can be used in the "builder
    /// pattern" form.
    class Builder
    {
    public:
        USDIMAGING_API
        Builder &SetMaterialPath(
            const HdPathDataSourceHandle &materialPath);
        USDIMAGING_API
        Builder &SetBindingStrength(
            const HdTokenDataSourceHandle &bindingStrength);

        /// Returns a container data source containing the members set thus far.
        USDIMAGING_API
        HdContainerDataSourceHandle Build();

    private:
        HdPathDataSourceHandle _materialPath;
        HdTokenDataSourceHandle _bindingStrength;

    };

    /// @}
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif