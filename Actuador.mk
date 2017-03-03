##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Actuador
ConfigurationName      :=Debug
WorkspacePath          := "E:\txinto\cvs\lin1d"
ProjectPath            := "E:\txinto\cvs\gatATAC\arduino\Actuador"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=txinto
Date                   :=03/03/2017
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/soft/cygwin64/bin/x86_64-pc-cygwin-g++.exe
SharedObjectLinkerName :=C:/soft/cygwin64/bin/x86_64-pc-cygwin-g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Actuador.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)../dummylib $(IncludeSwitch)../libraries/gatArduinOSEK 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/soft/cygwin64/bin/x86_64-pc-cygwin-ar.exe rcu
CXX      := C:/soft/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/soft/cygwin64/bin/x86_64-pc-cygwin-gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/soft/cygwin64/bin/x86_64-pc-cygwin-as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/maincl.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_DRE.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_fm1FSM.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_fm1FSM_CI.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_dre.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_input.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_lcd.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_output.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_pinout.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_prj_tty_brcast.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_pwmFSM.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_pwmFSM_CI.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/maincl.cpp$(ObjectSuffix): maincl.cpp $(IntermediateDirectory)/maincl.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/maincl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/maincl.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/maincl.cpp$(DependSuffix): maincl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/maincl.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/maincl.cpp$(DependSuffix) -MM "maincl.cpp"

$(IntermediateDirectory)/maincl.cpp$(PreprocessSuffix): maincl.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/maincl.cpp$(PreprocessSuffix) "maincl.cpp"

$(IntermediateDirectory)/src_DRE.cpp$(ObjectSuffix): src/DRE.cpp $(IntermediateDirectory)/src_DRE.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/DRE.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_DRE.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_DRE.cpp$(DependSuffix): src/DRE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_DRE.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_DRE.cpp$(DependSuffix) -MM "src/DRE.cpp"

$(IntermediateDirectory)/src_DRE.cpp$(PreprocessSuffix): src/DRE.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_DRE.cpp$(PreprocessSuffix) "src/DRE.cpp"

$(IntermediateDirectory)/src_fm1FSM.cpp$(ObjectSuffix): src/fm1FSM.cpp $(IntermediateDirectory)/src_fm1FSM.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/fm1FSM.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fm1FSM.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fm1FSM.cpp$(DependSuffix): src/fm1FSM.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fm1FSM.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fm1FSM.cpp$(DependSuffix) -MM "src/fm1FSM.cpp"

$(IntermediateDirectory)/src_fm1FSM.cpp$(PreprocessSuffix): src/fm1FSM.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fm1FSM.cpp$(PreprocessSuffix) "src/fm1FSM.cpp"

$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(ObjectSuffix): src/fm1FSM_CI.cpp $(IntermediateDirectory)/src_fm1FSM_CI.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/fm1FSM_CI.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(DependSuffix): src/fm1FSM_CI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(DependSuffix) -MM "src/fm1FSM_CI.cpp"

$(IntermediateDirectory)/src_fm1FSM_CI.cpp$(PreprocessSuffix): src/fm1FSM_CI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_fm1FSM_CI.cpp$(PreprocessSuffix) "src/fm1FSM_CI.cpp"

$(IntermediateDirectory)/src_prj_dre.cpp$(ObjectSuffix): src/prj_dre.cpp $(IntermediateDirectory)/src_prj_dre.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_dre.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_dre.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_dre.cpp$(DependSuffix): src/prj_dre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_dre.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_dre.cpp$(DependSuffix) -MM "src/prj_dre.cpp"

$(IntermediateDirectory)/src_prj_dre.cpp$(PreprocessSuffix): src/prj_dre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_dre.cpp$(PreprocessSuffix) "src/prj_dre.cpp"

$(IntermediateDirectory)/src_prj_input.cpp$(ObjectSuffix): src/prj_input.cpp $(IntermediateDirectory)/src_prj_input.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_input.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_input.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_input.cpp$(DependSuffix): src/prj_input.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_input.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_input.cpp$(DependSuffix) -MM "src/prj_input.cpp"

$(IntermediateDirectory)/src_prj_input.cpp$(PreprocessSuffix): src/prj_input.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_input.cpp$(PreprocessSuffix) "src/prj_input.cpp"

$(IntermediateDirectory)/src_prj_lcd.cpp$(ObjectSuffix): src/prj_lcd.cpp $(IntermediateDirectory)/src_prj_lcd.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_lcd.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_lcd.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_lcd.cpp$(DependSuffix): src/prj_lcd.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_lcd.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_lcd.cpp$(DependSuffix) -MM "src/prj_lcd.cpp"

$(IntermediateDirectory)/src_prj_lcd.cpp$(PreprocessSuffix): src/prj_lcd.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_lcd.cpp$(PreprocessSuffix) "src/prj_lcd.cpp"

$(IntermediateDirectory)/src_prj_output.cpp$(ObjectSuffix): src/prj_output.cpp $(IntermediateDirectory)/src_prj_output.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_output.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_output.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_output.cpp$(DependSuffix): src/prj_output.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_output.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_output.cpp$(DependSuffix) -MM "src/prj_output.cpp"

$(IntermediateDirectory)/src_prj_output.cpp$(PreprocessSuffix): src/prj_output.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_output.cpp$(PreprocessSuffix) "src/prj_output.cpp"

$(IntermediateDirectory)/src_prj_pinout.cpp$(ObjectSuffix): src/prj_pinout.cpp $(IntermediateDirectory)/src_prj_pinout.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_pinout.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_pinout.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_pinout.cpp$(DependSuffix): src/prj_pinout.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_pinout.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_pinout.cpp$(DependSuffix) -MM "src/prj_pinout.cpp"

$(IntermediateDirectory)/src_prj_pinout.cpp$(PreprocessSuffix): src/prj_pinout.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_pinout.cpp$(PreprocessSuffix) "src/prj_pinout.cpp"

$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(ObjectSuffix): src/prj_tty_brcast.cpp $(IntermediateDirectory)/src_prj_tty_brcast.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_tty_brcast.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(DependSuffix): src/prj_tty_brcast.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(DependSuffix) -MM "src/prj_tty_brcast.cpp"

$(IntermediateDirectory)/src_prj_tty_brcast.cpp$(PreprocessSuffix): src/prj_tty_brcast.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_tty_brcast.cpp$(PreprocessSuffix) "src/prj_tty_brcast.cpp"

$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(ObjectSuffix): src/prj_tty_cmds.cpp $(IntermediateDirectory)/src_prj_tty_cmds.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/prj_tty_cmds.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(DependSuffix): src/prj_tty_cmds.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(DependSuffix) -MM "src/prj_tty_cmds.cpp"

$(IntermediateDirectory)/src_prj_tty_cmds.cpp$(PreprocessSuffix): src/prj_tty_cmds.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_prj_tty_cmds.cpp$(PreprocessSuffix) "src/prj_tty_cmds.cpp"

$(IntermediateDirectory)/src_pwmFSM.cpp$(ObjectSuffix): src/pwmFSM.cpp $(IntermediateDirectory)/src_pwmFSM.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/pwmFSM.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_pwmFSM.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_pwmFSM.cpp$(DependSuffix): src/pwmFSM.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_pwmFSM.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_pwmFSM.cpp$(DependSuffix) -MM "src/pwmFSM.cpp"

$(IntermediateDirectory)/src_pwmFSM.cpp$(PreprocessSuffix): src/pwmFSM.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_pwmFSM.cpp$(PreprocessSuffix) "src/pwmFSM.cpp"

$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(ObjectSuffix): src/pwmFSM_CI.cpp $(IntermediateDirectory)/src_pwmFSM_CI.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/txinto/cvs/gatATAC/arduino/Actuador/src/pwmFSM_CI.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(DependSuffix): src/pwmFSM_CI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(DependSuffix) -MM "src/pwmFSM_CI.cpp"

$(IntermediateDirectory)/src_pwmFSM_CI.cpp$(PreprocessSuffix): src/pwmFSM_CI.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_pwmFSM_CI.cpp$(PreprocessSuffix) "src/pwmFSM_CI.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


