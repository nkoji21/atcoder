#!/bin/bash

set -e

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
RESET='\033[0m'

if [ ! -f ./contest ]; then
  echo -e "${RED}❌ Error: contest file not found${RESET}"
  exit 1
fi

contest=$(cat ./contest)

if [ -z "$contest" ]; then
  echo -e "${RED}❌ Error: contest file is empty${RESET}"
  exit 1
fi

echo -ne "${BLUE}📝 Problem? ${RESET}"
read problem

dir="_result/${contest}/${problem}"

echo -e "${BLUE}📁 Saving to ${dir}/main.go${RESET}"
mkdir -p "$dir"
cp main.go "$dir/main.go"

echo -e "${YELLOW}📝 Committing...${RESET}"
git add "$dir/main.go"
git commit -m "${contest} ${problem}" --quiet

echo -e "${GREEN}🔄 Resetting main.go from template${RESET}"
cp _template/main.go ./main.go

echo ""
echo -e "${GREEN}✅ Done: ${contest} ${problem}${RESET}"
