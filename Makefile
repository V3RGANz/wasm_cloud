wasm_map.wat:
	emcc wasm_map.c -O3 -s STANDALONE_WASM -Wl,--import-memory --no-entry -o wasm_map.wat

wasm_reduce.wat:
	emcc wasm_reduce.c -O3 -s STANDALONE_WASM -Wl,--import-memory --no-entry -o wasm_reduce.wat

all: wasm_map.wat wasm_reduce.wat
	echo "all files generated"

clean:
	rm *.wasm
	rm *.wat