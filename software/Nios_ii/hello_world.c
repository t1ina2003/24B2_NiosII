
#include <stdio.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "alt_types.h"
#include "sys/alt_irq.h"
#include "unistd.h"

alt_u32 LED_Table[] = {~0x01,~0x02,~0x04,~0x08,~0x10,~0x20,~0x40,~0x80};

int main(void)
{
    alt_u8 i;
    printf("code Runing...");

    while(1){
        for(i=0;i<=7;i++){
            IOWR_ALTERA_AVALON_PIO_DATA(PIO_LED_BASE,LED_Table[i]);
            usleep(500000);
        }
    }
    return 0;
}
