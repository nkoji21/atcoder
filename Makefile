.PHONY: all sc sl sv run

all:
	@./shell/build.sh

sc: # set contest
	@./shell/setc.sh

sl: # set language
	@./shell/setlang.sh

sv: # solve
	@./shell/solve.sh

run:
	@./shell/run.sh
