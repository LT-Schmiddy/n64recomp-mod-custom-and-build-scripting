#include "modding.h"
#include "recomputils.h"
#include "recompconfig.h"

RECOMP_IMPORT(".", int native_lib_test(const char* str));

// Patches a function in the base game that's used to check if the player should quickspin.
RECOMP_CALLBACK("*", recomp_on_init) void Python_Init(){
    int retVal = native_lib_test("String from mod code!");
    recomp_printf("'native_lib_test' returned %i\n", retVal);
}


