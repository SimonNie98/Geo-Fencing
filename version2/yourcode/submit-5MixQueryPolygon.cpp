//
// Created by zhang on 18-12-4.
// Filled by Simon Nie on 18-12-13
//

#include "submit-5MixQueryPolygon.h"

void SetEnvironmentFromMixQueryPolygon() {
    points_set.clear();
}

void AddPointFromMixQueryPolygon(int id, double x, double y) {
    double a[2] = {x, y};
    pointTree = Insert(pointTree, a, id);
    points_set[id] = std::make_pair(x, y);
}

void DeletePointFromMixQueryPolygon(int id) {
    //std::cout<<"delte id"<<id<<std::endl;
    std::pair<double, double> tmp = points_set[id];
    double a[2] = {tmp.first, tmp.second};
    pointTree = Delete(pointTree, a, id);
    return;
}

std::vector<int> QueryPolygonFromMixQueryPolygon(int n, std::vector<std::pair<double, double> > &polygon) {
    hit_ids.clear();
    std::vector<int> point_ids;
    double a_minX = MX, a_minY = MX, a_maxX = MIN, a_maxY = MIN, tmpx, tmpy;
    for (int i = 0; i < n; i++) {
        tmpx = polygon[i].first;
        tmpy = polygon[i].second;
        a_minX = a_minX < tmpx ? a_minX : tmpx;
        a_minY = a_minY < tmpy ? a_minY : tmpy;
        a_maxX = a_maxX > tmpx ? a_maxX : tmpx;
        a_maxY = a_maxY > tmpy ? a_maxY : tmpy;
    }
    double a[2] = {a_minX, a_minY}, b[2] = {a_maxX, a_maxY};

    Search(pointTree, a, b);
    int nHits = hit_ids.size();
    for (int i = 0; i < nHits; i++) {
        int tmpId = hit_ids[i];
        std::pair<int, int> tmpPoint = points_set[tmpId];
        if(pointInPolygon(tmpPoint.first, tmpPoint.second, polygon))
        point_ids.push_back(tmpId);
    }
    return point_ids;
}
