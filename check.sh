#!/bin/bash
output=$(./main <<EOF
Alice
20
Bob
25
Carol
30
Dave
40
Eve
50
EOF
)

students=("Alice" "Bob" "Carol" "Dave" "Eve")

for s in "${students[@]}"; do
  if [[ "$output" != *"$s"* ]]; then
    echo "Missing: $s"
    exit 1
  fi
done

echo "All students found"
