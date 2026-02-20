/*You have to declare a structure named triangle. triangle_id, base and height are the members of this structure. Now you will have to take input of three triangles and find out which triangle has the maximum area using a function.
[Triangle Area = (base*height)/2]

Sample Input	Sample Output
1
5
8
2
4
6
3
3
4
 	Area of 1 = 20
 */
#include <stdio.h>

struct triangle {
    int triangle_id;
    float base;
    float height;
};

struct triangle maxAreaTriangle(struct triangle t[], int n)
{
    int i, maxIndex = 0;
    float maxArea = (t[0].base * t[0].height) / 2;

    for(i = 1; i < n; i++)
    {
        float area = (t[i].base * t[i].height) / 2;
        if(area > maxArea)
        {
            maxArea = area;
            maxIndex = i;
        }
    }

    return t[maxIndex];
}

int main()
{
    struct triangle t[3], maxT;
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].triangle_id);
        scanf("%f", &t[i].base);
        scanf("%f", &t[i].height);
    }

    maxT = maxAreaTriangle(t, 3);

    printf("Area of %d = %.0f\n",
           maxT.triangle_id,
           (maxT.base * maxT.height) / 2);

    return 0;
}
