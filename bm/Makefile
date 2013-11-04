thrift_generated= \
	build/filternames_constants.cpp  \
	build/filternames_constants.h  \
	build/filternames_types.cpp  \
	build/filternames_types.h 
##########################################################

run:	t
	cat ../test-data/john-smith-tagged-by-lingpipe-0-v0_2_0.sc | ./t  > /tmp/t.sc
	
build/Makefile:	CMakeLists.txt
	mkdir -p build && cd build && cmake .. 

build/t: t.cc build/Makefile  $(thrift_generated)
	rm -f t
	cd build && make t

t:	build/t
	ln -s build/t t

$(thrift_generated): filternames.thrift
	thrift  --out build --gen cpp  filternames.thrift

clean:
	rm -f t
	cd build && make clean
