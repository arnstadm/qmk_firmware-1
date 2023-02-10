#include "quantum.h"

#ifdef VIA_ENABLE

enum via_indicator_value {
    id_enable_enter = 1,
    id_enable_spacebar
};

//struct to save configs
typedef struct {
    bool enter_enable:1;
    bool spacebar_enable:1;
} via_config;


// function declaration
void indicator_config_set_value( uint8_t *data );
void indicator_config_get_value( uint8_t *data );
void _set_color(HSV *color, uint8_t *data);
void _get_color(HSV *color, uint8_t *data);

#endif
