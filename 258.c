/*
    Given two integer arrays nums1 and nums2, return an array of their intersection.
    Each element in the result must be unique and you may return the result in any order.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int nums1[] = {1, 2, 2, 1}, nums2[] = {2, 2};
    int index, lengthOfArray1, lengthOfArray2;

    lengthOfArray1 = sizeof(nums1) / sizeof(nums1[0]);

    printf("\nnums1[%d] = ", lengthOfArray1);
    for (index = 0; index < 4; index++)
    {
        printf("\t");
        printf("%d ", nums1[index]);
    }

    printf("\n");

    lengthOfArray2 = sizeof(nums2) / sizeof(nums2[0]);

    printf("nums2[%d] = ", lengthOfArray2);
    for (index = 0; index < 2; index++)
    {
        printf("\t");
        printf("%d ", nums2[index]);
    }

    printf("\n");

    for (index = 0; index < 4; index++)
    {
        if (nums1[index] == nums2[index])
        {
            printf("\nThe intersection value between nums1[%d] and nums2[%d] = %d\n\n", lengthOfArray1, lengthOfArray2, nums1[index]);
            break;
        }
    }

    getch();
}
