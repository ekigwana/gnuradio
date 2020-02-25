/* -*- c++ -*- */
/*
 * Copyright 2019 Analog Devices Inc.
 * Author: Travis Collins <travis.collins@analog.com>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_IIO_DDS_CONTROL_IMPL_H
#define INCLUDED_IIO_DDS_CONTROL_IMPL_H

#include <gnuradio/iio/dds_control.h>
#include <iio.h>
#include <pmt/pmt.h>

#include "device_source_impl.h"

namespace gr {
namespace iio {

class dds_control_impl : public dds_control
{
private:
    std::vector<int> d_enabled;
    std::vector<long> d_frequencies;
    std::vector<float> d_phases;
    std::vector<float> d_scales;
    std::string d_uri;

protected:
    struct iio_context* d_ctx;
    struct iio_device* d_dev;

public:
    dds_control_impl(const std::string& uri,
                     std::vector<int> enabled,
                     std::vector<long> frequencies,
                     std::vector<float> phases,
                     std::vector<float> scales);
    ~dds_control_impl();

    void set_dds_confg(std::vector<long> frequencies,
                       std::vector<float> phases,
                       std::vector<float> scales);

    // void write_attribute(pmt::pmt_t pdu);
};

} // namespace iio
} // namespace gr

#endif /* INCLUDED_IIO_DDS_CONTROL_IMPL_H */
