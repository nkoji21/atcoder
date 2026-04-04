#!/bin/bash

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RESET='\033[0m'

lang="go"
if [ -f ./language ]; then
  lang=$(cat ./language)
fi

case "$lang" in
  go)
    echo -e "${YELLOW}ℹ️  Go is interpreted, nothing to build. Use 'make run' to execute.${RESET}"
    ;;
  c)
    gcc main.c -o main
    echo -e "${GREEN}✅ Built: main${RESET}"
    ;;
  *)
    echo -e "${RED}❌ Invalid language in ./language: ${lang}${RESET}"
    exit 1
    ;;
esac
