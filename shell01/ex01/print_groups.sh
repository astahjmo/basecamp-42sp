#!/bin/sh

groups $FT_USER | sed -z "s/ /,/g;s/\n//;"
