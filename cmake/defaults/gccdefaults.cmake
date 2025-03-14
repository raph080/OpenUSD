#
# Copyright 2016 Pixar
#
# Licensed under the Apache License, Version 2.0 (the "Apache License")
# with the following modification; you may not use this file except in
# compliance with the Apache License and the following modification to it:
# Section 6. Trademarks. is deleted and replaced with:
#
# 6. Trademarks. This License does not grant permission to use the trade
#    names, trademarks, service marks, or product names of the Licensor
#    and its affiliates, except as required to comply with Section 4(c) of
#    the License and to reproduce the content of the NOTICE file.
#
# You may obtain a copy of the Apache License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the Apache License with the above modification is
# distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied. See the Apache License for the specific
# language governing permissions and limitations under the Apache License.
#

include(gccclangshareddefaults)

if (NOT CMAKE_CXX_COMPILER_VERSION VERSION_LESS 6)
    if (Boost_VERSION LESS 106200)
        # gcc-6 introduces a placement-new warning, which causes problems
        # in boost-1.61 or less, in the boost::function code.
        # boost-1.62 fixes the warning
        _disable_warning("placement-new")
    endif()
endif()

# gcc's maybe-uninitialized warning often generates false positives.
# We disable this warning globally rather than trying to chase them
# down as they occur.
#
# See https://gcc.gnu.org/bugzilla/buglist.cgi?quicksearch=maybe%20uninitialized&list_id=394666
_disable_warning("maybe-uninitialized")

set(_PXR_CXX_FLAGS "${_PXR_GCC_CLANG_SHARED_CXX_FLAGS}")
