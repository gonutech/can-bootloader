#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

extern "C" {
#include "../../boot_arg.h"
}

void reboot(uint8_t arg)
{
    mock().actualCall("reboot").withIntParameter("arg", arg);
}
