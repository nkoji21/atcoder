#!/bin/bash

set -e

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
RESET='\033[0m'

# Determine language
lang="go"
if [ -f ./language ]; then
  lang=$(cat ./language)
fi

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
    echo -e "${RED}❌ Invalid language in ./language: ${lang}${RESET}"
    exit 1
    ;;
esac

contest=""
if [ -f ./contest ]; then
  contest=$(cat ./contest)
fi

if [ -z "$contest" ]; then
  echo -ne "${BLUE}📝 Contest? ${RESET}"
  read contest
  echo "$contest" > ./contest
fi

echo -ne "${BLUE}📝 Problem? ${RESET}"
read problem

dir="_result/${contest}/${problem}"

echo -e "${BLUE}📁 Saving to ${dir}/main.${ext}${RESET}"
mkdir -p "$dir"
cp "main.${ext}" "$dir/main.${ext}"

echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${RESET}"
git add "$dir/main.${ext}"
git commit -m "${contest} ${problem}"
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${RESET}"

echo -e "${GREEN}🔄 Resetting main.${ext} from template${RESET}"
cp "_template/${lang}/main.${ext}" "./main.${ext}"

echo ""
echo -e "${GREEN}✅ Done: ${contest} ${problem}${RESET}"
