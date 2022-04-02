#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <cmocka.h>

static void test([[maybe_unused]] void **state) {
    assert_int_equal(2, 2);
}

static void test2([[maybe_unused]] void **state) {
    assert_int_equal(2, 2);
}

int main() {
    const struct CMUnitTest IntegrationTests[] =
            {
                    cmocka_unit_test(test),
                    cmocka_unit_test(test2),
            };

    return cmocka_run_group_tests(IntegrationTests, NULL, NULL);
}
