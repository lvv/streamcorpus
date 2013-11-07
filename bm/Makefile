filtername="test-name-strings.scf"
thrift_generated= \
	build/filternames_constants.cpp  \
	build/filternames_constants.h  \
	build/filternames_types.cpp  \
	build/filternames_types.h 

##########################################################

run:	filter
	cat ../test-data/john-smith-tagged-by-lingpipe-0-v0_2_0.sc | ./filter  > /tmp/filter.sc
	
CMakeLists.txt:   $(thrift_generated) 

build/Makefile:	CMakeLists.txt   $(thrift_generated) 
	cd build && cmake -DFILTERNAME=filtername .. 

build/filter: filter.cc build/Makefile  $(thrift_generated)
	rm -f filter
	cd build && make filter

filter:	build/filter
	ln -s build/filter filter

$(thrift_generated): filternames.thrift  build
	thrift  --out build --gen cpp  filternames.thrift

build:
	mkdir -p build 

clean:
	rm -rf build/
	rm -f filter
