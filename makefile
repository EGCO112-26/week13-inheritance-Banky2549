compile:LL_test.cpp
	g++ LL_test.cpp LL.cpp NODE.cpp -o inh
	
run: inh
	./inh 012  3.0 pupha 120  3.1 ryan

clean: inh
	rm inh