__attribute__((used)) void map_slice_function (const int* array, unsigned len, int* result, unsigned* result_len) {
    *result_len = 1;
    for (unsigned i = 0; i < len; i++) {
        *result += array[i];
    }
}
