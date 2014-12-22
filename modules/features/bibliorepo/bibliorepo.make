; Bibliorepo Makefile

api = 2
core = 7.x

projects[biblio][version]	= "7.x-1.x"
projects[biblio][subdir]	= "contrib"
projects[biblio][download][type]     = git
projects[biblio][download][revision] = c584ee17
projects[biblio][download][branch]   = 7.x-1.x
projects[biblio][patch][]   = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/biblio-typo_isset.patch

