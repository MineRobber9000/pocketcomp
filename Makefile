LABELS:=`cat labels.txt`

disassemble: pocketc.bin gbdis
	./gbdis --base da80 --locations $(LABELS) < pocketc.bin > pocketc.asm
	python stripwhitespace.py pocketc.asm
	python replacementtool.py pocketc.asm replacements.txt

gbdis: gbdis.c
	./make_gbdis.sh
