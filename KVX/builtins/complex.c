typedef float cxf_t __attribute((vector_size(2 * sizeof(float))));
typedef float cxfv2_t __attribute((vector_size(4 * sizeof(float))));
typedef float cxfv4_t __attribute((vector_size(8 * sizeof(float))));

cxf_t __attribute__((noinline)) faddwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_faddwp(a, b, "");
}

cxf_t __attribute__((noinline)) faddcwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_faddwp(a, b, ".c");
}

cxf_t __attribute__((noinline)) fsbfwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_fsbfwp(a, b, "");
}

cxf_t __attribute__((noinline)) fsbfcwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_fsbfwp(a, b, ".c");
}

cxf_t __attribute__((noinline)) fmulwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_fmulwc(a, b, "");
}

cxf_t __attribute__((noinline)) fmulcwc(cxf_t a, cxf_t b) {
  return __builtin_kvx_fmulwc(a, b, ".c");
}

cxf_t __attribute__((noinline)) fmulwc_rn(cxf_t a, cxf_t b) {
  return __builtin_kvx_fmulwc(a, b, ".rn");
}

cxf_t __attribute__((noinline)) fmulcwc_rn(cxf_t a, cxf_t b) {
  return __builtin_kvx_fmulwc(a, b,
                              ".c"
                              ".rn");
}

cxf_t __attribute__((noinline)) ffmawc(cxf_t a, cxf_t b, cxf_t c) {
  return __builtin_kvx_ffmawc(a, b, c, ".rn");
}

cxf_t __attribute__((noinline)) ffmcawc(cxf_t a, cxf_t b, cxf_t c) {
  return __builtin_kvx_ffmawc(a, b, c, ".c.rn");
}

cxf_t __attribute__((noinline)) ffmswc(cxf_t a, cxf_t b, cxf_t c) {
  return __builtin_kvx_ffmswc(a, b, c, ".rn");
}

cxf_t __attribute__((noinline)) ffmcswc(cxf_t a, cxf_t b, cxf_t c) {
  return __builtin_kvx_ffmswc(a, b, c, ".c.rn");
}

typedef double cxd_t __attribute((vector_size(2 * sizeof(double))));

cxd_t __attribute__((noinline)) fadddc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fadddp(a, b, "");
}

cxd_t __attribute__((noinline)) faddcdc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fadddp(a, b, ".c");
}

cxd_t __attribute__((noinline)) fsbfdc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fsbfdp(a, b, "");
}

cxd_t __attribute__((noinline)) fsbfcdc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fsbfdp(a, b, ".c");
}

cxd_t __attribute__((noinline)) fmuldc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fmuldc(a, b, "");
}

cxd_t __attribute__((noinline)) fmulcdc(cxd_t a, cxd_t b) {
  return __builtin_kvx_fmuldc(a, b, ".c");
}

cxd_t __attribute__((noinline)) fmuldc_rn(cxd_t a, cxd_t b) {
  return __builtin_kvx_fmuldc(a, b, ".rn");
}

cxd_t __attribute__((noinline)) fmulcdc_rn(cxd_t a, cxd_t b) {
  return __builtin_kvx_fmuldc(a, b,
                              ".c"
                              ".rn");
}

cxd_t __attribute__((noinline)) ffmadc(cxd_t a, cxd_t b, cxd_t c) {
  return __builtin_kvx_ffmadc(a, b, c, ".rn");
}

cxd_t __attribute__((noinline)) ffmcadc(cxd_t a, cxd_t b, cxd_t c) {
  return __builtin_kvx_ffmadc(a, b, c, ".c.rn");
}

cxd_t __attribute__((noinline)) ffmsdc(cxd_t a, cxd_t b, cxd_t c) {
  return __builtin_kvx_ffmsdc(a, b, c, ".rn");
}

cxd_t __attribute__((noinline)) ffmcsdc(cxd_t a, cxd_t b, cxd_t c) {
  return __builtin_kvx_ffmsdc(a, b, c, ".c.rn");
}

typedef double cxdv2_t __attribute((vector_size(4 * sizeof(double))));

cxdv2_t __attribute__((noinline)) fadddcp(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fadddq(a, b, "");
}

cxdv2_t __attribute__((noinline)) faddcdcp(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fadddq(a, b, ".c");
}

cxdv2_t __attribute__((noinline)) fsbfdcp(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fsbfdq(a, b, "");
}

cxdv2_t __attribute__((noinline)) fsbfcdcp(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fsbfdq(a, b, ".c");
}

cxdv2_t __attribute__((noinline)) fmuldcp_rn(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fmuldcp(a, b, ".rn");
}

cxdv2_t __attribute__((noinline)) fmulcdcp_rn(cxdv2_t a, cxdv2_t b) {
  return __builtin_kvx_fmuldcp(a, b,
                               ".c"
                               ".rn");
}

cxdv2_t __attribute__((noinline)) ffmadcp(cxdv2_t a, cxdv2_t b, cxdv2_t c) {
  return __builtin_kvx_ffmadcp(a, b, c, ".rn");
}

cxdv2_t __attribute__((noinline)) ffmcadcp(cxdv2_t a, cxdv2_t b, cxdv2_t c) {
  return __builtin_kvx_ffmadcp(a, b, c, ".c.rn");
}

cxdv2_t __attribute__((noinline)) ffmsdcp(cxdv2_t a, cxdv2_t b, cxdv2_t c) {
  return __builtin_kvx_ffmsdcp(a, b, c, ".rn");
}

cxdv2_t __attribute__((noinline)) ffmcsdcp(cxdv2_t a, cxdv2_t b, cxdv2_t c) {
  return __builtin_kvx_ffmsdcp(a, b, c, ".c.rn");
}

#include <stdio.h>

void test_cxf() {
  cxf_t ca = {1, 2};
  cxf_t cb = {3, 5};
  cxf_t cc = {100, 1000};
  cxf_t cr;
  cr = faddwc(ca, cb);
  printf("faddwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = faddcwc(ca, cb);
  printf("faddcwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = fsbfwc(ca, cb);
  printf("fsbfwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = fsbfcwc(ca, cb);
  printf("fsbfcwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = fmulwc(ca, cb);
  printf("fmulwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = fmulcwc(ca, cb);
  printf("fmulcwc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = ffmawc(ca, cb, cc);
  printf("ffmawc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cr = ffmcawc(ca, cb, cc);
  printf("ffmcawc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cc = -cc;
  cr = ffmswc(ca, cb, cc);
  printf("ffmswc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cr = ffmcswc(ca, cb, cc);
  printf("ffmcswc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
}

void test_cxd() {
  cxd_t ca = {1, 2};
  cxd_t cb = {3, 5};
  cxd_t cc = {100, 1000};
  cxd_t cr;
  cr = fadddc(ca, cb);
  printf("fadddc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = faddcdc(ca, cb);
  printf("faddcdc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = fsbfdc(ca, cb);
  printf("fsbfdc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = fsbfcdc(ca, cb);
  printf("fsbfcdc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = fmuldc(ca, cb);
  printf("fmuldc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1], cr[0],
         cr[1]);
  cr = fmulcdc(ca, cb);
  printf("fmulcdc({%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0], cb[1],
         cr[0], cr[1]);
  cr = ffmadc(ca, cb, cc);
  printf("ffmadc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cr = ffmcadc(ca, cb, cc);
  printf("ffmcadc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cc = -cc;
  cr = ffmsdc(ca, cb, cc);
  printf("ffmsdc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
  cr = ffmcsdc(ca, cb, cc);
  printf("ffmcsdc({%g,%g},{%g,%g},{%g,%g})={%g,%g}\n", ca[0], ca[1], cb[0],
         cb[1], cc[0], cc[1], cr[0], cr[1]);
}

int main() {
  test_cxf();
  test_cxd();
  return 0;
}
