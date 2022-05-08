PDFS = main.pdf

all: $(PDFS)

main.pdf: *.tex
	mkdir -p tmp
	ln -sf ${PWD}/images tmp
	TOPFILE=main.tex SECFILE=*.tex  make -f Makefile.work

#cv-rs.pdf: cv.pdf rs.pdf
#	pdftk cv.pdf rs.pdf cat output cv-rs.pdf
#%.pdf: %.tex
#	TOPFILE=$(patsubst %.pdf,%.tex,$@) make -f Makefile.work

.PHONY: clean clean-tmp preview print gzip gunzip tar ci

clean:
	rm -f $(PDFS) *.ps
	cd tmp ; rm -f *

clean-tmp:
	cd tmp ; rm -f *
