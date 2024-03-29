#ifndef DATASTRUCTUREPROJECT_SUBMIT_1ADDPOLYBEFOREQUERYPOINT_H
#define DATASTRUCTUREPROJECT_SUBMIT_1ADDPOLYBEFOREQUERYPOINT_H

#include <vector>
#include <iostream>
#include "RTree.h"
#include "Rectangle.h"
#include "JudgePoint.h"


void SetEnvironmentFromAddPolygonBeforeQueryPoint();

std::vector<int> QueryPointFromAddPolygonBeforeQueryPoint(double x, double y);

void AddPolygonFromAddPolygonBeforeQueryPoint(int id, int n, std::vector<std::pair<double, double> > &polygon);

#endif //DATASTRUCTUREPROJECT_SUBMIT_1ADDPOLYBEFOREQUERYPOINT_H
