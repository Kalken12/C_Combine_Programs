#include <stdio.h>
int perimeter(int ,int);
int area(int ,int);
void main()
{
	int width=5;
	int height=7;
	
	printf("Perimeter of rectangle=%d\n",perimeter(width,height));
	
	printf("Area of rectangle=%d",area(width,height));
}
int perimeter(int width, int height)
{
	int ans;
	ans = 2*(width+height);
	return ans;
}
int area(int width, int height)
{
	int ans;
	ans= width*height;
	return ans;
}
