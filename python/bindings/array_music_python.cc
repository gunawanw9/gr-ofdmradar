/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(array_music.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(842d2aa4fb3dd3d40e6f7fed1cb4f741)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <ofdmradar/array_music.h>
// pydoc.h is automatically generated in the build directory
#include <array_music_pydoc.h>

void bind_array_music(py::module &m)
{
    using array_music = gr::ofdmradar::array_music;

    py::class_<array_music, gr::sync_block, gr::block, gr::basic_block, std::shared_ptr<array_music>>(
        m, "array_music", D(array_music))
        .def(py::init(&array_music::make),
             py::arg("elements"),
             py::arg("output_resolution"),
             py::arg("targets"),
             D(array_music, make));
}
