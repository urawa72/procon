#!/bin/sh

if [ $# -eq 0 ]; then
  echo "引数を指定してください"
  exit 1
fi

tasks=""
if [ $# -eq 2 ]; then
  tasks=$2
else
  tasks=$1
fi

base1="https://atcoder.jp/contests/"
base2="/tasks/"
url=$base1$1$base2$tasks

for i in a b c d
do
  mkdir -p $1"/"$i
  cd $1"/"$i
  # touch main.cpp
  # touch main.py
  echo $url"_"$i
  oj d $url"_"$i
  cd - > /dev/null
done

