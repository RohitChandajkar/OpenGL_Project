#pragma once
#include <vector>
#include"Triangle.h"
using namespace std;

class Triangulation
{
public:
    Triangulation();
    ~Triangulation();

    vector<Triangle>& triangles(); //function to return list of triangles
    vector<Point3D>& uniquePoints();//function to return list of unique points
    vector<Point3D>& uniqueNormal();
    void printtriangles();

private:
    vector<Triangle> mTriangles;
    vector<Point3D> mUniquePoints;
    vector<Point3D>mUniqueNormal;

};