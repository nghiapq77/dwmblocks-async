#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)                   \
    X("", "sb-internet", 10, 10)    \
    X("", "sb-bluetooth", 60, 9)    \
    X("", "sb-ram", 3, 8)           \
    X("", "sb-cpu", 3, 7)           \
    X("", "sb-mailbox", 0, 6)       \
    X("", "sb-lang", 0, 5)          \
    X("", "sb-sound", 0, 4)         \
    X("", "sb-battery", 30, 3)      \
    X("", "sb-clock", 60, 2)        \
    X("", "sb-tux", 0, 1)

#endif  // CONFIG_H
