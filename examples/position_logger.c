#include <stdio.h>
#include <stdlib.h>
#include <gps.h>

int main(void) {

//    printf("Open serial port.\n");
    gps_init(); // Open serial port

//    printf("Create structure.\n");
    loc_t data;

    while (1) {
        gps_location(&data);

        printf("Date: 20%02d-%02d-%02d %02d:%02d:%02d Lat:%lf lon:%lf Atl:%lf spd:%lf dir:%lf\n", 
		data.year, data.month, data.day, data.hour, data.minute, data.second, 
		data.latitude, data.longitude, data.altitude,
		data.speed, data.course);
    }

    return EXIT_SUCCESS;
}

