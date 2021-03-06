#ifndef LIBPAM_MRUBY_H
#define LIBPAM_MRUBY_H

#include <mruby.h>
#include <mruby/compile.h>
#include <mruby/proc.h>

#include <stdio.h>

int pam_mruby_check(FILE *rbfile, const char *name);

#endif
