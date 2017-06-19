include ../Makefile.kernel

do_the_thing:
	make clean
	make -j4
	make disk
	make run_programs

disk_and_programs:
	make disk
	make run_programs

disk:
	pintos-mkdisk build/run-programs.dsk --filesys-size=10
	
run_programs:
	pintos --qemu --disk=build/run-programs.dsk -- -f -q
	pintos --qemu --disk=build/run-programs.dsk -p ../examples/bubsort -a bubsort -- -q
	pintos --qemu --disk=build/run-programs.dsk -p ../examples/run-programs -a run-programs -- -q
	pintos --qemu --disk=build/run-programs.dsk -- run run-programs