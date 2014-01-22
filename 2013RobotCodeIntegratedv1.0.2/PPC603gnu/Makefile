# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/2013RobotCodeIntegratedv1.0.2



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousFeederCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousFeederCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousGroup.o : $(PRJ_ROOT_DIR)/Commands/AutonomousGroup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousServoDrop.o : $(PRJ_ROOT_DIR)/Commands/AutonomousServoDrop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousShootCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousShootCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousTopFeeder.o : $(PRJ_ROOT_DIR)/Commands/AutonomousTopFeeder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DefaultServoCommand.o : $(PRJ_ROOT_DIR)/Commands/DefaultServoCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DriveCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ExampleCommand.o : $(PRJ_ROOT_DIR)/Commands/ExampleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FeederMotor.o : $(PRJ_ROOT_DIR)/Commands/FeederMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeReset.o : $(PRJ_ROOT_DIR)/Commands/FrisbeeReset.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeSet.o : $(PRJ_ROOT_DIR)/Commands/FrisbeeSet.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/PickupBot.o : $(PRJ_ROOT_DIR)/Commands/PickupBot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootHalf.o : $(PRJ_ROOT_DIR)/Commands/ShootHalf.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootQuarter.o : $(PRJ_ROOT_DIR)/Commands/ShootQuarter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootThreeQuarter.o : $(PRJ_ROOT_DIR)/Commands/ShootThreeQuarter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShooterAngleCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterAngleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/StartClimb.o : $(PRJ_ROOT_DIR)/Commands/StartClimb.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TeleopCommandGroup.o : $(PRJ_ROOT_DIR)/Commands/TeleopCommandGroup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TopFeeder.o : $(PRJ_ROOT_DIR)/Commands/TopFeeder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/AngleShooter.o : $(PRJ_ROOT_DIR)/Subsystems/AngleShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Climber.o : $(PRJ_ROOT_DIR)/Subsystems/Climber.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/DriveSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/DriveSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/ExampleSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ExampleSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/FrisbeeServos.o : $(PRJ_ROOT_DIR)/Subsystems/FrisbeeServos.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Hopper.o : $(PRJ_ROOT_DIR)/Subsystems/Hopper.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate_partialImage = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBase.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBasedRobot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousFeederCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousGroup.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousServoDrop.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousShootCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousTopFeeder.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DefaultServoCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DriveCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ExampleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FeederMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeReset.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeSet.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/PickupBot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootHalf.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootQuarter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootThreeQuarter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShooterAngleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/StartClimb.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TeleopCommandGroup.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TopFeeder.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/OI.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/AngleShooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Climber.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/DriveSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/ExampleSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/FrisbeeServos.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Hopper.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Shooter.o

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate_partialImage" ]; then cd "CommandBasedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBase.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/CommandBasedRobot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousFeederCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousGroup.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousServoDrop.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousShootCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/AutonomousTopFeeder.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DefaultServoCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/DriveCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ExampleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FeederMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeReset.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/FrisbeeSet.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/PickupBot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootHalf.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootQuarter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShootThreeQuarter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/ShooterAngleCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/StartClimb.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TeleopCommandGroup.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Commands/TopFeeder.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/OI.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/AngleShooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Climber.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/DriveSubsystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/ExampleSubsystem.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/FrisbeeServos.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Hopper.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013RobotCodeIntegratedv1.0.2/Subsystems/Shooter.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
