import ctypes

_sum = ctypes.CDLL('100-operations.so')
_sum.add.argtypes = (ctypes.c_int, ctypes.POINTER(ctypes.c_int))

def add(b):
    global _sum
    a = len(b)
    array_type = ctypes.c_int * a
    result = _sum.add(ctypes.c_int(a), array_type(*b))
    return int(result)
