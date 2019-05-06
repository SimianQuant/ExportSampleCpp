#include "Generated.h"
#include <benchmark/benchmark.h>

static void BM_Generated(benchmark::State &state) {
  double x = 1.4;
  double yMin = 1.0;
  double yMax = 2.0;
  int cnt = 1000;
  double incr = (yMax - yMin) / cnt;

  for (auto _ : state) {
    double y = yMin;
    simianquant::ext::GeneratedResult res(0, 0, 0);
    while (y < yMax) {
      benchmark::DoNotOptimize(res = simianquant::ext::Generated::apply(x, y));
      benchmark::ClobberMemory();
      y += incr;
    }
  }
}

BENCHMARK(BM_Generated);

BENCHMARK_MAIN();