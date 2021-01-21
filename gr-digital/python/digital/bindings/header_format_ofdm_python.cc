/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(header_format_ofdm.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(498bdcfe4bd8bf2202fecec7e1fef6bf)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/header_format_ofdm.h>
// pydoc.h is automatically generated in the build directory
#include <header_format_ofdm_pydoc.h>

void bind_header_format_ofdm(py::module& m)
{

    using header_format_ofdm = ::gr::digital::header_format_ofdm;

    py::class_<header_format_ofdm,
               gr::digital::header_format_crc,
               std::shared_ptr<header_format_ofdm>>(
        m, "header_format_ofdm", D(header_format_ofdm))


        .def(py::init(&header_format_ofdm::make),
             py::arg("occupied_carriers"),
             py::arg("n_syms"),
             py::arg("len_key_name") = "packet_len",
             py::arg("frame_key_name") = "frame_len",
             py::arg("num_key_name") = "packet_num",
             py::arg("bits_per_header_sym") = 1,
             py::arg("bits_per_payload_sym") = 1,
             py::arg("scramble_header") = false,
             D(header_format_ofdm, make))
        .def_static("make",
                    &header_format_ofdm::make,
                    py::arg("occupied_carriers"),
                    py::arg("n_syms"),
                    py::arg("len_key_name") = "packet_len",
                    py::arg("frame_key_name") = "frame_len",
                    py::arg("num_key_name") = "packet_num",
                    py::arg("bits_per_header_sym") = 1,
                    py::arg("bits_per_payload_sym") = 1,
                    py::arg("scramble_header") = false,
                    D(header_format_ofdm, make))


        .def("format",
             &header_format_ofdm::format,
             py::arg("nbytes_in"),
             py::arg("input"),
             py::arg("output"),
             py::arg("info"),
             D(header_format_ofdm, format))
        .def("parse",
             &header_format_ofdm::parse,
             py::arg("nbits_in"),
             py::arg("input"),
             py::arg("info"),
             py::arg("nbits_processed"),
             D(header_format_ofdm, parse))


        .def("header_nbits",
             &header_format_ofdm::header_nbits,
             D(header_format_ofdm, header_nbits))


        ;
}
