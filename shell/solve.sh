#!/bin/bash

set -e

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
RESET='\033[0m'

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

echo -e "${BLUE}📁 Saving to ${dir}/main.go${RESET}"
mkdir -p "$dir"
cp main.go "$dir/main.go"

echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${RESET}"
git add "$dir/main.go"
git commit -m "${contest} ${problem}"
echo -e "${YELLOW}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${RESET}"

echo -e "${GREEN}🔄 Resetting main.go from template${RESET}"
cp _template/main.go ./main.go

echo ""
echo -e "${GREEN}✅ Done: ${contest} ${problem}${RESET}"
