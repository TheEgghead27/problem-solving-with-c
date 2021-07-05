// name of an array is a pointer to the array first location
// array+x is equivalent to pointer of array[x], *(array+0) = array[0]
// integers and integer variables will work fine
// in function headers `int num[]` is the same as `int *num` but the first one implies its a full array with real values
// this also means you can use pointers instead of array names
for (i = 0; i < 100; i++)
    sum += num[i];
// is the same as
for (i = 0; i < 100; i++) {
    sum += *p;
    p++; // where p = num
    // this is illegal with num because num is constant for this location, but p is not
}
// func(arr[4], n); n being number to process
// lets you process n things from the *middle* of the array, 5 locations up to be precise

