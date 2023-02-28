//x代表公鸡的数量，y代表母鸡的数量，z代表小鸡的数量
#include <stdio.h>

int main(void){
    int x, y, z;
    for(x = 0; x < 100; x++) 
    {
        for(y = 0; y < 100; y++) 
        {
            for(z = 0; z < 100; z++) 
            {   
                if((5*x + 3*y + z/3 == 100)&&(x+y+z ==100) && z % 3 == 0)
                {
                    printf("x = %d, y = %d, z = %d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}