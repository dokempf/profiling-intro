**This is a "Hello World" example repository to explain Debugging with perf**

# Requirements

These instructions only work on Linux.

The following software is required:
* A C++ compiler
* CMake
* [perf](https://en.wikipedia.org/wiki/Perf_(Linux)) - Installation instructions for [Ubuntu](https://askubuntu.com/questions/50145/how-to-install-perf-monitoring-tool)
* [hotspot](https://github.com/KDAB/hotspot)

# Building and running

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ..
make
perf record --call-graph dward ./stdmap
hotspot
```

# License

This repository is licensed CC-0.
