/*You have to declare a structure named triangle. triangle_id, base and height are the members of this structure. Now you will have to take input of three triangles and find out the area of each triangle.
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
Area of 2 = 12
Area of 3 = 6

*/

#include <stdio.h>


struct Triangle {
    int triangle_id;
    float base;
    float height;
};


float triangle_area(struct Triangle t) {
    return (t.base * t.height) / 2;
}

int main() {
    struct Triangle triangles[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter Triangle ID: ");
        scanf("%d", &triangles[i].triangle_id);
        printf("Enter base of triangle %d: ", triangles[i].triangle_id);
        scanf("%f", &triangles[i].base);
        printf("Enter height of triangle %d: ", triangles[i].triangle_id);
        scanf("%f", &triangles[i].height);
    }


    for (int i = 0; i < 3; i++) {
        printf("Area of %d = %.0f\n", triangles[i].triangle_id, triangle_area(triangles[i]));
    }

    return 0;
}
