#!/bin/sh

TESTRUNNER_SRC=../../../../../demonstrator/Sources/testrunner/evcglue/scade

ls $TESTRUNNER_SRC
echo "--------------------------------------------"
echo "-   Updating git Scade source code...      -"
echo "--------------------------------------------"
git pull

echo "--------------------------------------------"
echo "-   Removing old code...                   -"
echo "--------------------------------------------"

cp $TESTRUNNER_SRC/scade.pro /tmp/
rm -rf $TESTRUNNER_SRC/*

echo "--------------------------------------------"
echo "-   Restoring scade.pro...                 -"
echo "--------------------------------------------"

cp /tmp/scade.pro $TESTRUNNER_SRC/scade.pro

echo "--------------------------------------------"
echo "-   Copying code...                        -"
echo "--------------------------------------------"

cp -vr KCG-ERSA/* $TESTRUNNER_SRC

echo "--------------------------------------------"
echo "-   Script done                            -"
echo "--------------------------------------------"


