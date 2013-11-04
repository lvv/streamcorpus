run:	t
	cat ../test-data/john-smith-tagged-by-lingpipe-0-v0_2_0.sc | ./t  > /tmp/t.sc
	
build/Makefile:	CMakeLists.txt
	cd build && cmake .. 

build/t: t.cc build/Makefile 
	rm -f t
	cd build && make t

t:	build/t
	ln -s build/t t

clean:
	rm -f t
	cd build && make clean
