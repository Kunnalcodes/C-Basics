#include <stdio.h>
int main()
{
    int i,j,k;
    int arr[2] [3] [2]={{{2,3}, {5,6}, {8,7}}, {{4,9}, {2,3}, {5,6}}};
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<2;k++)
            {
                printf("arr[%d][%d][%d]=%d\t",i,j,k,arr[i][j][k]);
            }
            

        }

    }
    return 0;
}
