/// C Operator Precedence Table
/*
 * Highest to Lowest                                                                                    Associativity
 * ()   []      ->      .                                                                               left to right
 * !    ~ (bit flip)    -       +       ++      --      *        &      type    sizeof  unaries         right to left
 * * (multiplication)   /       %                                                                       left to right
 * +    -                                                                                               left to right
 * <<   >> (bit shift)                                                                                  left to right
 * <    <=      >       >=                                                                              left to right
 * & (bitwise AND)                                                                                      left to right
 * ^ (bitwise XOR)                                                                                      left to right
 * | (bitwise OR)                                                                                       left to right
 * &&                                                                                                   left to right
 * ||                                                                                                   left to right
 * ?:   (inline conditional)                                                                            right to left
 * =    +=      -=      *=      /=%=    ^=      |=      <<==    >>==                                    right to left
 * ,                                                                                                    left to right
 */