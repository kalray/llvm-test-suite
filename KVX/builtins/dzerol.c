int main() {

#ifdef __kvxarch_kv3_1
  char *p = 0x0;
  __builtin_kvx_dzerol(p);
#elif __kvxarch_kv3_2
  // No dzerol for kv3-2.
#else
#error "architecture is undefined"
#endif

  return 0;
}
