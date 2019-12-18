/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.1-1904
 */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include "ad/map/match/LaneOccupiedRegion.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace map
 */
namespace map {
/*!
 * @brief namespace match
 *
 * Map matching
 */
namespace match {

/*!
 * \brief DataType LaneOccupiedRegionList
 */
using LaneOccupiedRegionList = std::vector<::ad::map::match::LaneOccupiedRegion>;

} // namespace match
} // namespace map
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_VECTOR_AD_MAP_MATCH_LANEOCCUPIEDREGION
#define GEN_GUARD_VECTOR_AD_MAP_MATCH_LANEOCCUPIEDREGION
namespace std {
/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value LaneOccupiedRegionList value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, vector<::ad::map::match::LaneOccupiedRegion> const &_value)
{
  os << "[";
  for (auto it = _value.begin(); it != _value.end(); it++)
  {
    if (it != _value.begin())
    {
      os << ",";
    }
    os << *it;
  }
  os << "]";
  return os;
}
} // namespace std

namespace std {
/*!
 * \brief overload of the std::to_string for LaneOccupiedRegionList
 */
inline std::string to_string(::ad::map::match::LaneOccupiedRegionList const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_VECTOR_AD_MAP_MATCH_LANEOCCUPIEDREGION