#define sizeX 16
#define sizeY 16


int XY(uint8_t x, uint8_t y) 
{
  int lednum;

  if (y%2 == 0){ //check for even y val
    lednum = (y* sizeX) + x ;
  }

  if (y%2 != 0){ //check for odd y val
  lednum = (y * sizeX) + (sizeX-(x+1)) ;
  }
  
  if (lednum >= NUMPIXELS){
    lednum = 0;
  }

  return lednum ;
}
