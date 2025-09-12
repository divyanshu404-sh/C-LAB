// 4. If you run a 10 kilometer race in 43 minutes 30 seconds:
// • Find your average time per km.
// • Find your average speed in km/h.
// (Hint: speed = distance / time)

#include <stdio.h>

int main(){

    float s = 10.0;
    float t = (43.5/60);
    
    printf("Average time per kilometer is %f Hour\n",t/s);
    printf("Average speed is %f km/h\n",s/t);

    return 0;
}