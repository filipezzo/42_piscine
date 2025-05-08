#!/bin/sh

git check-ignore $(find . -type f) | xargs -n1 basename

