int main() {

#ifdef __kvxarch_kv3_1
  unsigned int i;
  char p[64] __attribute__((aligned((64))));
  memset(p, 1, sizeof(p));
  __builtin_kvx_dzerol(p);
  for (i = 0; i < sizeof(p); i++) {
    if (p[i] != 0)
      return -1;
  }
#elif __kvxarch_kv3_2
  // No dzerol for kv3-2.
#else
#error "architecture is undefined"
#endif

  return 0;
}
