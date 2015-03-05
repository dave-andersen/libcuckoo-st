LDFLAGS = -lpthread -L$(top_builddir)/libcuckoo -lcityhash
DEPS = $(top_builddir)/libcuckoo/libcityhash.la

noinst_PROGRAMS = test_insert_and_find.out test_iterator.out test_bracket_operator.out insert_throughput.out read_throughput.out
TESTS = test_insert_and_find.out test_iterator.out test_bracket_operator.out insert_throughput.out read_throughput.out

test_insert_and_find_out_SOURCES = test_insert_and_find.cc
test_iterator_out_SOURCES = test_iterator.cc
test_bracket_operator_out_SOURCES = test_bracket_operator.cc
insert_throughput_out_SOURCES = insert_throughput.cc
read_throughput_out_SOURCES = read_throughput.cc

AM_CPPFLAGS = -I$(top_srcdir)
