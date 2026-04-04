#!/bin/bash

set -e

RED='\033[0;31m'
YELLOW='\033[0;33m'
RESET='\033[0m'

lang="go"
if [ -f ./language ]; then
  lang=$(cat ./language)
fi

case "$lang" in
  go)
    go run main.go
    ;;
  c)
    if [ ! -f ./main ]; then
      echo -e "${RED}❌ Binary not found. Run 'make' to build first.${RESET}"
      exit 1
    fi
    ./main
    ;;
  *)
    echo -e "${RED}❌ Invalid language in ./language: ${lang}${RESET}"
    exit 1
    ;;
esac
