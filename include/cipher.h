#ifndef CIPHER_H
#define CIPHER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

char *usage_str = "Usage: ./cipher [-h] [-s | -t] [-e | -d] INPUT_FILE OUTPUT_FILE [n]\n\
-s\tSubstitution cipher\n\t\t-e\t    Encrypt using the substitution cipher.\n\t\t-d\t    Decrypt \
using the substitution cipher.\n\t\tINPUT_FILE  This can be any file on the file system or '*' \
which specifies stdin.\n\t\tOUTPUT_FILE This can be any file on the system or '*' which specifies \
stdout.\n\t\tn\t    The amount of position to shift by. This is optional. Defaults to 320.\n\n-t\tTutnese Translation\n\t\t\
-e\t    Encode into tutnese\n\t\t-d\t    Decode from tutnese.\n\t\tINPUT_FILE  This can be any file on the file \
system or '*' which specifies stdin\n\t\tOUTPUT_FILE This can be any file on the system or '*' which specifies \
stdout.\n\n-h\tDisplay this help menu.";

#endif