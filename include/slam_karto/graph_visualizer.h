/*
 * Copyright 2010 SRI International
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SLAM_KARTO_GRAPH_VISUALIZER_H
#define SLAM_KARTO_GRAPH_VISUALIZER_H

#include <string>
#include <boost/shared_ptr.hpp>

#include <open_karto/Mapper.h>
#include <visualization_msgs/MarkerArray.h>

namespace karto {

/*
 * Interface for graph visualizer plugins to be used in the slam_karto node.
 */
class GraphVisualizer
{
public:
  virtual void initialize(const boost::shared_ptr<karto::ScanSolver>& solver) = 0;
  virtual visualization_msgs::MarkerArray createVisualizationMarkers() = 0;
  inline void setFrameId(const std::string &frame_id) { map_frame_id_ = frame_id; }
protected:
  std::string map_frame_id_;
};

}; // namespace karto

#endif // SLAM_KARTO_GRAPH_VISUALIZER_H
