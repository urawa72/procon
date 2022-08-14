.PHONY: create download help
.DEFAULT_GOAL := help

create: ## Create directories
	@for i in a b c d; do \
		url="https://atcoder.jp/contests/${ARG}/tasks"; \
		mkdir -p ./${arg}/$$i; \
		cd ./${arg}/$$i; \
		touch main.cpp; \
		echo $$url"_"$$i; \
		cd - > /dev/null; \
	done;

download: ## Download tasks
	@for i in a b c d; do \
		url="https://atcoder.jp/contests/${arg}/tasks"; \
		cd ./${arg}/$$i; \
		oj d $$url/${arg}_$$i; \
		cd - > /dev/null; \
	done;

help: ## Display this help screen
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) \
		| awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-20s\033[0m %s\n", $$1, $$2}'
