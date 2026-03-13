///	Returns the total area and volume of a box
#include<stdio.h>
#include<stdlib.h>

typedef struct AV_PAIR{
	unsigned area;
	unsigned volume;
} area_vol_pair;

area_vol_pair getSize(unsigned width, unsigned height, unsigned depth)
{
	///unsigned vol = width*height*depth;
	///unsigned are = 2*(width*height + width*depth + height*depth);

	return (area_vol_pair){.area= 2*(width*height + width*depth + height*depth), .volume = width*height*depth};
}

int main(void)
{
	area_vol_pair p=getSize(2,3,4);

	printf("Area: %u\n",p.area);
	printf("Volume: %u\n",p.volume);

	///area_vol_pair p1 = (area_vol_pair){.area = 10, .volume = 20};
	///printf("%u; %u\n",p1.area,p1.volume);

}
