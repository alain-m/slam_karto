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

#ifndef SLAM_KARTO_SPA_GRAPH_VISUALIZER_H
#define SLAM_KARTO_SPA_GRAPH_VISUALIZER_H

#include <boost/shared_ptr.hpp>

#include "slam_karto/graph_visualizer.h"
#include "slam_karto/spa_solver.h"

namespace karto_plugins {

/*
 * Graph visualizer plugin for the SPA solver
 */
class SPAGraphVisualizer : public karto::GraphVisualizer
{
 public:
  SPAGraphVisualizer();
  void initialize(const boost::shared_ptr<karto::ScanSolver>& solver);
  visualization_msgs::MarkerArray createVisualizationMarkers();
 private:
  int marker_count_;
  bool visualizer_initialized_;
  boost::shared_ptr<karto_plugins::SPASolver> solver_;
};

}; // namespace karto_plugins

#endif // SLAM_KARTO_SPA_GRAPH_VISUALIZER_H
