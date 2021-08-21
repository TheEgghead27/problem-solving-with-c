// Standard I/O Streams, Redirection, and Piping

/*
 * stdin is for input, from the keyboard or from a file
 * stdout is for output, to the monitor or to a file or the printer
 * stderr is for error output, also to the monitor
 *
 * app5 > prn   to redirect stdout to printer on DOS
 * a.out | lpr  to redirect stdout to printer on Unix
 *
 * app5 > a5.out        to redirect stdout to a file
 *
 * app5 < a5.dat        to redirect a file to stdin (relative or complete paths if needed)
 *
 * app5 < a5.dat > a5.out       to redirect a5.dat to stdin, then stdout to a5.out
 *
 * I/O redirections allows for easy file I/O, along with later analysis through a text editor or a tool like `less`
 * Test cases can also be simplified with I/O redirection
 *
 * Prompts can be excluded when only file input is expected
 *
 * Only stderr should appear on the screen if both other channels are redirected
 * If they are not, stdout shows on the screen, and stdin is echoed on the screen (you see it in your terminal)
 *
 * fprintf() is like printf(), but the first argument specifies the file to write to, like stdout or stderr
 * Prompts may be put in stderr to guarantee that the user sees it unless they really like messing with their pipes
 *
 * fprintf() is like printf(), but the first argument specifies the file to read from, like stdin or an opened text file
 *
 */