#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
double overlapX_start = max(r1.x, r2.x);
double  overlapX_end = min(r1.x + r1.w, r2.x + r2.w);
double w_overlap = overlapX_end - overlapX_start;

double overlapY_start = min(r1.y, r2.y);
double overlapY_end = max(r1.y - r1.h, r2.y - r2.h);
double h_overlap = overlapY_start - overlapY_end;

if(w_overlap <= 0 || h_overlap <= 0){
	return 0;
} else{
	return w_overlap * h_overlap;
}


}
