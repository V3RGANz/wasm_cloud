__attribute__((used)) int array_summ (int* array, unsigned len) {
    int sum = 0;
    for (unsigned i = 0; i < len; i++) {
        sum += array[i];
    }
    return sum;
}
