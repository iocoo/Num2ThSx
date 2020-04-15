SRCDIRS = src
all: COMPDIR
COMPDIR:
	@for subdir in ${SRCDIRS}; \
        do \
                cd $$subdir; \
                echo "Makeing $$subdir"; \
                make all; \
                echo "Done"; \
        done

clean:
	@for subdir in ${SRCDIRS}; \
        do \
                cd $$subdir; \
                echo "Cleanning $$subdir"; \
                make clean; \
                echo "Done"; \
        done
