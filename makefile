OBJ = merging-threads.o
CXX = g++


merging_sort: ${OBJ}
	$(CXX) -o $@ ${OBJ}

.o.cc:
	${CXX} -c $<


clean:
	-rm -f *.o merging_sort
