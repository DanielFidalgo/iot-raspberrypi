#ifndef _DHTLIB
#define _DHTLIB
 

#ifdef __cplusplus
extern "C" {
#endif
       extern int InitDHT(int pinval);
       extern float getTemp();
       extern float getHumidity();
       extern int dht11_read_val();
#ifdef __cplusplus
}
#endif
 

#endif
 