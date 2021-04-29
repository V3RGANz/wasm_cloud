__attribute__((used)) int reduce_slices_function (const int* arrays, unsigned* lens, unsigned arrays_count) {
    int sum = 0;
    unsigned offset = 0;
    for (unsigned i = 0; i < arrays_count; i++) {
        for (unsigned j = 0; j < lens[i]; j++) {
            sum += arrays[offset];
            offset += 1;
        }
    }
    return sum;
}
