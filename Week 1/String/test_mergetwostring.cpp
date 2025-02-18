#include <iostream>
#include <cassert>
#include "mergetwostring.cpp"

void testMergeAlternately() {
    Solution solution;

    // Test case 1: Both strings are of equal length
    assert(solution.mergeAlternately("abc", "def") == "adbcef");

    // Test case 2: First string is longer than the second
    assert(solution.mergeAlternately("abcd", "ef") == "aebfcdd");

    // Test case 3: Second string is longer than the first
    assert(solution.mergeAlternately("ab", "cdef") == "acbdef");

    // Test case 4: One of the strings is empty
    assert(solution.mergeAlternately("", "xyz") == "xyz");
    assert(solution.mergeAlternately("abc", "") == "abc");

    // Test case 5: Both strings are empty
    assert(solution.mergeAlternately("", "") == "");

    // Test case 6: Strings with special characters
    assert(solution.mergeAlternately("a!c", "b@d") == "a!b@cd");

    // Test case 7: Strings with numbers
    assert(solution.mergeAlternately("123", "456") == "142536");

    cout << "All test cases passed!" << endl;
}

int main() {
    testMergeAlternately();
    return 0;
}
