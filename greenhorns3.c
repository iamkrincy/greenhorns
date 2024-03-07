#include <stdio.h>

main()
 {
 	
//to find the third angle of a right triangle if two other angles are given.
    
    int angle1, angle2, angle3;

    printf("Enter first angle= ");
    scanf("%d", &angle1);

    printf("Enter second angle= ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);
    printf("The third angle of the triangle is= %d degrees\n", angle3);
}