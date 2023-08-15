#include "benchmark.h"
#include <vector>

static void BM_AddOneToFirstArrayElement(benchmark::State& state) {
  // setup your code here

  for (auto _ : state) {
    // execute your code here
    for (int i = 1; i < state.range(0); i++) {
      for (int j = 1; j < i; j *= 2) {
        benchmark::DoNotOptimize(i);
        benchmark::DoNotOptimize(j);
      }
    }
  }
  state.SetComplexityN(state.range(0));
}

// Register the test
BENCHMARK(BM_AddOneToFirstArrayElement)->RangeMultiplier(10)->Range(1, 1000000)->Complexity()->Unit(benchmark::kNanosecond);

// Run the benchmark
BENCHMARK_MAIN();
