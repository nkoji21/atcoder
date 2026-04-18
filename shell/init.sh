#!/bin/bash

# Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
RESET='\033[0m'

echo -e "${GREEN}🔄 Initializing atcoder...${RESET}"

echo -ne "${BLUE}📝 Select language (go/c/cpp): ${RESET}"
read lang

case "$lang" in
  go)
    ext="go"
    ;;
  c)
    ext="c"
    ;;
  cpp)
    ext="cpp"
    ;;
  *)
    echo -e "${RED}❌ Invalid language: ${lang}${RESET}"
    echo -e "${YELLOW}⚠️  Available: go, c, cpp${RESET}"
    exit 1
    ;;
esac

echo "$lang" > language
cp "_template/${lang}/main.${ext}" "./main.${ext}"
touch contest

echo -e "${GREEN}✅ Done: atcoder initialized (${lang})${RESET}"
