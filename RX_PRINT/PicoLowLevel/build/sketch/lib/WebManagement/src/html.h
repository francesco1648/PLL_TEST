#line 1 "C:\\Users\\Titania\\Desktop\\isaac\\test\\test_pll_speed\\RX_PRINT\\PicoLowLevel\\lib\\WebManagement\\src\\html.h"
#ifndef html_h
#define html_h

inline const char* serverIndex PROGMEM = "<form method='POST' action='/update' enctype='multipart/form-data'>"
                            "<input type='file' name='update'>"
                            "<input type='submit' value='Update'>"
                          "</form>"
                          "<form method='POST' action='/config' enctype='multipart/form-data'>"
                            "<input type='file' name='config' accept=\".json\">"
                            "<input type='submit' value='Set config'>"
                          "</form>";

#endif 
