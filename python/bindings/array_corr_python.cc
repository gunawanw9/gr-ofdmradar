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
/* BINDTOOL_HEADER_FILE(array_corr.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(aff40e51abe24012f39064c22de76ae4)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <ofdmradar/array_corr.h>
// pydoc.h is automatically generated in the build directory
#include <array_corr_pydoc.h>

void bind_array_corr(py::module &m)
{

    using array_corr = gr::ofdmradar::array_corr;


    py::class_<array_corr, gr::block, gr::basic_block, std::shared_ptr<array_corr>>(
        m, "array_corr", D(array_corr))

        .def(py::init(&array_corr::make),
             py::arg("array_size"),
             py::arg("samples"),
             D(array_corr, make))


        ;
}
