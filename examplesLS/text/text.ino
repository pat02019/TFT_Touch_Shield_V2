/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor);
*/

#include <stdint.h>
#include <TFTv2LS.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;      // turn on the background light
    Tft.TFTinit();  // init TFT library
    
    Tft.drawChar('S',0,0,1,RED);                // draw char: 'S', (0, 0), size: 1, color: RED
    
    Tft.drawChar('E',10,10,2,BLUE);             // draw char: 'E', (10, 10), size: 2, color: BLUE
    
    Tft.drawChar('E',20,30,3,GREEN);            // draw char: 'E', (20, 30), size: 3, color: GREEN
    
    Tft.drawChar('E',30,60,4,YELLOW);           // draw char: 'E', (30, 60), size: 4, color: YELLOW
    
    Tft.drawChar('D',40,100,4,YELLOW);          // draw char: 'D', (40, 100), size: 4, color: YELLOW
    
    Tft.drawString("Hello",0,160,3,CYAN);       // draw string: "hello", (0, 160), size: 3, color: CYAN
    
    Tft.drawString("World!!",60,200,4,WHITE);    // draw string: "world!!", (80, 200), size: 4, color: WHITE
    

}

void loop()
{
  
}
