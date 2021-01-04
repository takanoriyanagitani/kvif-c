#include "kv_c_array.h"

typedef struct {
  uint8_t data[256];
} kv_c_array_u88_t;

static const char* KV_C_ARRAY_E_INVALID_CTX="Invalid context";
static const char* KV_C_ARRAY_E_INVALID_TGT="Invalid target";
static const char* KV_C_ARRAY_E_INVALID_ARG="Invalid argument";

const char* kv_c_array_gu33(const kv_ctx db, const uint8_t k, uint8_t* v){
  const kv_c_array_u88_t* o = db;
  if(NULL==o) return KV_C_ARRAY_E_INVALID_CTX;
  if(NULL==v) return KV_C_ARRAY_E_INVALID_TGT;
  *v = o->data[k];
  return NULL;
}

const char* kv_c_array_su33(kv_ctx db, uint8_t k, uint8_t v){
  kv_c_array_u88_t* o = db;
  if(NULL==o) return KV_C_ARRAY_E_INVALID_CTX;
  o->data[k] = v;
  return NULL;
}

kv_store kv_c_array_new_u88(){
  kv_store s;
  s.ctx = calloc(1, sizeof(kv_c_array_u88_t));
  s.gu33 = kv_c_array_gu33;
  return s;
}
void kv_c_array_del_u88(kv_store* store){
  free(store->ctx);
  store->ctx = NULL;
}
