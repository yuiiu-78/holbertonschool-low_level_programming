# Green Tech Efficiency Analysis

## Measurement Methodology

The experiments measured program execution time using the C `clock()` function and converted clock ticks into seconds using `CLOCKS_PER_SEC`. The baseline program was executed three consecutive times, and its recorded outputs were saved. The algorithm comparison program was also executed three times to observe the runtime of its two implementations. Finally, the controlled instrumentation experiment measured the total execution time and the time spent in three individual phases: building the dataset, processing the dataset, and reducing the results.

The baseline program processed 100,000,000 iterations. Its recorded execution times were 0.226196, 0.226896, and 0.227684 seconds. The average execution time was approximately 0.226925 seconds.

In the instrumentation experiment, the total measurement started before the three processing phases and ended after the reduction phase. Each phase was measured separately using start and end clock readings. This approach allowed the individual phase times to be compared with the overall runtime.

## Observed Performance Differences

The algorithm comparison showed a substantial difference in recorded execution times. The naive implementation took 2.759766, 2.742222, and 2.744839 seconds across three runs, giving an average of approximately 2.748942 seconds. The single-pass implementation took 0.000107, 0.000106, and 0.000106 seconds, averaging approximately 0.000106 seconds.

The measured naive runtime was approximately 25,852 times the single-pass runtime. The source code contains nested loops in the naive implementation, while the single-pass implementation traverses the dataset once. Their observed timings are consistent with the difference between quadratic and linear time complexity.

However, the two implementations returned different results: 625025000 for the naive implementation and 25000 for the single-pass implementation. Therefore, the recorded timings should not be treated as a perfectly controlled comparison of two implementations producing the same result.

The instrumentation experiment recorded a total runtime of 0.000737 seconds. Dataset construction took 0.000287 seconds, processing took 0.000308 seconds, and reduction took 0.000135 seconds. Processing was the longest measured phase, followed by dataset construction and reduction. The sum of the three phase times was 0.000730 seconds, slightly below the total because the total measurement also included small measurement and execution overheads.

## Relation Between Runtime and Energy Consumption

Execution time is relevant when discussing computational efficiency, but it is not a direct measurement of energy consumption. The experiments recorded CPU execution time, not electrical power or energy in joules. Consequently, the results show differences in runtime and help identify which operations take longer, but they do not establish how much energy each program consumed.

The shorter runtime of the single-pass implementation indicates that it completed its measured execution much faster. However, a precise energy comparison would require additional measurements of power or energy during execution.

## Limitations of the Experiment

The experiments have several limitations. First, each program was executed only three times, which provides a limited sample of runtime variation. Second, execution times may vary depending on the computing environment and system activity. Third, the algorithm comparison produced different result values, meaning the two implementations did not demonstrate identical computational outcomes. Finally, no direct power or energy measurements were collected.

## Practical Engineering Takeaway

The recorded results demonstrate the importance of measuring execution time and examining algorithm structure. The baseline runs were relatively consistent, while the algorithm comparison showed a large difference between the measured runtimes. The instrumentation experiment also identified processing as the longest of its three measured phases.

Engineers should measure both total runtime and individual phases to locate performance bottlenecks. They should also verify that compared implementations produce equivalent results. Runtime measurements are useful evidence for evaluating performance, but direct energy measurements are necessary before drawing conclusions about actual energy consumption.
