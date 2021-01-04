#include "kvif.h"

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#include <string.h>

kv_store kv_c_array_new_u88(void);
void     kv_c_array_del_u88(kv_store* db);

const char* kv_c_array_strerror(int error);
