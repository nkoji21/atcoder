.PHONY: sc sv run

sc: # set contest
	@./shell/setc.sh

sv: # solve
	@./shell/solve.sh

run:
	go run main.go
