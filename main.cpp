#include "Point.h"
#include <iostream>
#include <vector>
#include <random>
#include <math.h>
#include <string>
using namespace std;

double dist1(Point a, Point b){
  return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}
double dist2(Point a, Point b){
    return fabs(a.x - b.x) + fabs(a.y - b.y);
}
string min_dist1(std::vector<Point> v){
  double c_min_dist = 2.0;
  string locations = "";
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v.size(); j++){
      if(i!=j){
        double dst = dist1(v[i], v[j]);
        if(dst < c_min_dist){
          c_min_dist = dst;
          locations = "("+to_string(v[i].x)+","+to_string(v[i].y)+") ("+to_string(v[j].x)+","+to_string(v[j].y)+")";
        }
      }
    }
  }
  cout << c_min_dist << "\n";
  return locations;
}
string min_dist2(std::vector<Point> v){
  double c_min_dist = 2.0;
  string locations = "";
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v.size(); j++){
      if(i!=j){
        double dst = dist2(v[i], v[j]);
        if(dst < c_min_dist){
          c_min_dist = dst;
          locations = "("+to_string(v[i].x)+","+to_string(v[i].y)+") ("+to_string(v[j].x)+","+to_string(v[j].y)+")";
        }
      }
    }
  }
  cout << c_min_dist << "\n";
  return locations;
}


int main() {
  
  int n = 50000;
  for(int i = 0; i < 50; i++){
    srand(i);
    vector<Point> v(n);
    cout << "Norm: " << min_dist1(v)<<"\n";
    cout << "Altr: " << min_dist2(v)<<"\n";
  }
  return 0;
}