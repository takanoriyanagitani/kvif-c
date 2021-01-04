#pragma once

#include <stdint.h>

typedef void* kv_ctx;

typedef struct {
  kv_ctx ctx;

  #include "kvif_u3.h"
  #include "kvif_i6.h"
} kv_store;
