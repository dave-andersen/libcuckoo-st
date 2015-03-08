libcuckoo
=========

This is a quick hack derivative of libcuckoo that strips out
the concurrency support.  I wanted an easy-to-use cuckoo table
for C++ purposes, and this is it.  It's not a shining example
of how to do things.  This code may disappear or change with no
notice.  If we make it real, it'll show up in the 'efficient'
repository.  A happier solution would be to templatize libcuckoo
to the extent that none of this is necessary.  Hope to get there
soon.

Please see the original libcuckoo for more information:
https://github.com/efficient/libcuckoo

Authors: Manu Goyal, Bin Fan, Xiaozhou Li, David G. Andersen, and Michael Kaminsky

Requirements
================

This library has been tested on Mac OSX >= 10.8 and Ubuntu >= 12.04.

It compiles with clang++ >= 3.1 and g++ >= 4.6.3, however we strongly
suggest using the latest versions of both compilers, as they have
greatly improved support for atomic operations. Building the library
requires the autotools.

Building
==========

    $ autoreconf -fis
    $ ./configure
    $ make
    $ make install

Usage
==========

To build a program with the hash table, include
``libcuckoo/cuckoohash_map.hh`` into your source file. If you want to
use CityHash, which we recommend, we have provided a wrapper
compatible with the ``std::hash`` type around it in the
``libcuckoo/city_hasher.hh`` file. If compiling with CityHash, add the
``-lcityhash`` flag. You must also enable C++11 features on your
compiler. Compiling the file ``examples/count_freq.cpp`` with g++
might look like this:

    $ g++ -std=c++11 examples/count_freq.cpp -lcityhash

The
[examples directory](https://github.com/efficient/libcuckoo/tree/master/examples)
contains some simple demonstrations of some of the basic features of
the hash table.

**Note**: While the STL supports ``operator[]`` for accessing keys in
  the map, we instead have a ``cuckoohash_map::find`` method, which
  resembles the ``unordered_map::at`` method. Consult
  [the documentation](http://efficient.github.io/libcuckoo/classcuckoohash__map.html#addc0721a99193e0af53b34e2170fd6b5)
  for more information.

Tests
==========

The
[tests directory](https://github.com/efficient/libcuckoo/tree/master/tests)
directory contains a number of tests and benchmarks of the hash table,
which also serve as useful examples of how to use the table's various
features. The entire test suite can be built by ``cd tests`` and then
``make all`` and run
with the ``make check`` command. The test executables, which have the
suffix ``.out``, can be run individually as well.

Issue Report
============

To let us know your questions or issues, we recommend you
[report an issue](https://github.com/efficient/libcuckoo/issues) on
github. You can also email us at
[libcuckoo-dev@googlegroups.com](mailto:libcuckoo-dev@googlegroups.com).

Licence
===========
Copyright (C) 2013, Carnegie Mellon University and Intel Corporation

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

---------------------------

CityHash (lib/city.h, lib/city.cc) is Copyright (c) Google, Inc. and
has its own license, as detailed in the source files.
