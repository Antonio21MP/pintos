SRCDIR = ..

# Test programs to compile, and a list of sources for each.
# To add a new test, put its name on the PROGS list
# and then add a name_SRC line that lists its source files.
PROGS = cat cmp cp echo halt hex-dump ls mcat mcp mkdir pwd rm shell \
	bubsort insult lineup matmult recursor project child child_sort exercise1 consumer producer exercise2 reader writer philosopher

# Should work from project 2 onward.
cat_SRC = cat.c
cmp_SRC = cmp.c
cp_SRC = cp.c
echo_SRC = echo.c
halt_SRC = halt.c
hex-dump_SRC = hex-dump.c
insult_SRC = insult.c
lineup_SRC = lineup.c
ls_SRC = ls.c
recursor_SRC = recursor.c
rm_SRC = rm.c
project_SRC = project.c
child_SRC = child.c
child_sort_SRC = child_sort.c
exercise1_SRC = exercise1.c
consumer_SRC = consumer.c
producer_SRC = producer.c
exercise2_SRC = exercise2.c
reader_SRC = reader.c
writer_SRC = writer.c
exercise3_SRC = exercise3.c
philosopher_SRC = philosopher.c

# Should work in project 3; also in project 4 if VM is included.
bubsort_SRC = bubsort.c
matmult_SRC = matmult.c
mcat_SRC = mcat.c
mcp_SRC = mcp.c

# Should work in project 4.
mkdir_SRC = mkdir.c
pwd_SRC = pwd.c
shell_SRC = shell.c

include $(SRCDIR)/Make.config
include $(SRCDIR)/Makefile.userprog


remove:
	rm project && rm project.o && rm project.d
	rm child && rm child_sort && rm child_sort.d && rm child_sort.o
