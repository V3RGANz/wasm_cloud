wasm.wat:
	emcc wasm.c -O3 -s STANDALONE_WASM -Wl,--import-memory --no-entry -o wasm.wat