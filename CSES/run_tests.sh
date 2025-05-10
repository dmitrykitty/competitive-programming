#!/usr/bin/env bash
set -euo pipefail

# # 1) Kompilacja
# echo "Kompiluję test.cpp → test"
# g++ -std=c++11 -O2 -Wall test.cpp -o test

# 2) Przygotowanie tymczasowego pliku
tmpfile="$(mktemp tmp.XXXXXX.out)"

# 3) Pętla po wszystkich testach
for infile in tests/*.in; do
  name="$(basename "$infile" .in)"
  expected="tests/${name}.out"

  # uruchomienie programu
  ./test < "$infile" > "$tmpfile"

  # wczytanie i dodanie brakującej nowej linii na końcu
  got="$(sed -e '$a\' "$tmpfile")"
  want="$(sed -e '$a\' "$expected")"

  if [ "$got" = "$want" ]; then
    echo "$name: OK"
  else
    echo "$name: FAIL"
    # pokaż różnice
    diff -u <(printf '%s' "$got") <(printf '%s' "$want") || true
  fi
done

# 4) Sprzątanie
rm -f "$tmpfile"
echo "Gotowe."