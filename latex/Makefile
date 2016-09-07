LATEX := xelatex
#LATEX := pdflatex
TEXs := $(wildcard *.tex)
PDFs := $(patsubst %.tex, %.pdf, $(TEXs))
LIST := $(basename $(TEXs))

.PHONY : all

all : $(PDFs)

%.pdf : %.tex
	$(LATEX) $< 

.PHONY : clean

clean:
	for f in ${LIST} ""; do                  \
		[ -n "$$f" ] || continue;            \
		echo "cleanning stuff for $$f";      \
		rm -f "$$f.aux"; \
		rm -f "$$f.blg"; \
		rm -f "$$f.dvi"; \
		rm -f "$$f.brf"; \
		rm -f "$$f.log"; \
		rm -f "$$f.lof"; \
		rm -f "$$f.out"; \
		rm -f "$$f.toc"; \
		rm -f "$$f.lot"; \
		rm -f "$$f.nav"; \
		rm -f "$$f.snm"; \
		rm -f "$$f.synctex.gz"; \
	done

cleanall: clean
	echo "deleting pdf";                     \
	for f in ${LIST} ""; do                  \
		[ -n "$$f" ] || continue;            \
		rm -f "$$f.pdf"; \
	done
