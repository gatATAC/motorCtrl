#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include nb-Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/mainnb.o \
	${OBJECTDIR}/src/DRE.o \
	${OBJECTDIR}/src/fm1FSM.o \
	${OBJECTDIR}/src/fm1FSM_CI.o \
	${OBJECTDIR}/src/prj_dre.o \
	${OBJECTDIR}/src/prj_input.o \
	${OBJECTDIR}/src/prj_lcd.o \
	${OBJECTDIR}/src/prj_output.o \
	${OBJECTDIR}/src/prj_pinout.o \
	${OBJECTDIR}/src/prj_tty_brcast.o \
	${OBJECTDIR}/src/prj_tty_cmds.o \
	${OBJECTDIR}/src/pwmFSM.o \
	${OBJECTDIR}/src/pwmFSM_CI.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/actuador.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/actuador.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/actuador ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/mainnb.o: mainnb.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mainnb.o mainnb.cpp

${OBJECTDIR}/src/DRE.o: src/DRE.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/DRE.o src/DRE.cpp

${OBJECTDIR}/src/fm1FSM.o: src/fm1FSM.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/fm1FSM.o src/fm1FSM.cpp

${OBJECTDIR}/src/fm1FSM_CI.o: src/fm1FSM_CI.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/fm1FSM_CI.o src/fm1FSM_CI.cpp

${OBJECTDIR}/src/prj_dre.o: src/prj_dre.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_dre.o src/prj_dre.cpp

${OBJECTDIR}/src/prj_input.o: src/prj_input.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_input.o src/prj_input.cpp

${OBJECTDIR}/src/prj_lcd.o: src/prj_lcd.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_lcd.o src/prj_lcd.cpp

${OBJECTDIR}/src/prj_output.o: src/prj_output.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_output.o src/prj_output.cpp

${OBJECTDIR}/src/prj_pinout.o: src/prj_pinout.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_pinout.o src/prj_pinout.cpp

${OBJECTDIR}/src/prj_tty_brcast.o: src/prj_tty_brcast.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_tty_brcast.o src/prj_tty_brcast.cpp

${OBJECTDIR}/src/prj_tty_cmds.o: src/prj_tty_cmds.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/prj_tty_cmds.o src/prj_tty_cmds.cpp

${OBJECTDIR}/src/pwmFSM.o: src/pwmFSM.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/pwmFSM.o src/pwmFSM.cpp

${OBJECTDIR}/src/pwmFSM_CI.o: src/pwmFSM_CI.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../dummylib -I../libraries/gatArduinOSEK -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/pwmFSM_CI.o src/pwmFSM_CI.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/actuador.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
