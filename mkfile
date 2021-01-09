</$objtype/mkfile

DIRS = basics \
		concurrency \
		flowcontrol \
		strings \
		moretypes \
		welcome \

all:
	for(i in $DIRS){
		cd $i
		mk all
		cd ..
	}

clean:
	for(i in $DIRS){
		cd $i
		mk clean
		cd ..
	}
