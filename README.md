# FastQJoin
# Language: C++
# Input: TXT
# Output: PREFIX
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: fastq-join 1.3.1

PluMA plugin that uses fastq-join to join paired-end reads (Blankenberg et al, 2010).

The plugin accepts as input a TXT file of keyword-value pairs:
file1: First FASTQ file to join
file2: Second FASTQ file to join

The plugin will output three files, starting with the user specified output prefix.
prefixjoined is the FASTA file representing the joining of file1 and file2.

The plugin depends on the executable fastq-join being in the system PATH.
