#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <cmocka.h>

#include "TestOperations.h"

static void test([[maybe_unused]] void **state) {
    assert_int_equal(2, 2);
}

static void testExampleOperation([[maybe_unused]] void **state) {
    assert_int_equal(2, returnValue());
}

int main() {
    const struct CMUnitTest UnitTests[] =
            {
                    cmocka_unit_test(test),
                    cmocka_unit_test(testExampleOperation),
            };

    return cmocka_run_group_tests(UnitTests, NULL, NULL);
}
