// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#include <list>


struct point {
	int x, y;
};

int shortestPath(point p1, point p2)
{
	int dx = abs(p1.x - p2.x);

	int dy = abs(p1.y - p2.y);
	
	int dis = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p2.x, 2) * 1.0);
	
	cout << "Distance between the points"<<"(" << p1.x <<","<<p1.y << ") & (" << p2.x <<","<<p2.y << ") is " << dis <<endl ;
	

	return max(dx, dy);
	
//	return dis;
}
int coverPoints(point sequence[], int size)
{
	int stepCount = 0;

	for (int i = 0; i < size - 1; i++) {
	    
		stepCount += shortestPath(sequence[0],
								sequence[i + 1]);
								
	}
	
	

	return stepCount;
}

// Input
int main()
{

	point arr[] = { { 1,1}, { 3,2 }, { 5,1 }, { 1, 3 },{3,3} ,{5,2},{6,3},{2,5},{4,4},{5,6},{6,5}};

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << coverPoints(arr, n);
}
