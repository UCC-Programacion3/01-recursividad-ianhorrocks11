#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
  if (size == 0)
    return 0;
  if (size == 1)
    return arr[size-1];
  return arr[size-1] + sumatoria(arr,size-1);
}