#!/bin/bash

# Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[0;33m'
RESET='\033[0m'

echo -e "${GREEN}🔄 Initializing atcoder...${RESET}"

cp _template/main.go main.go
touch contest

echo -e "${GREEN}✅ Done: atcoder initialized${RESET}"
