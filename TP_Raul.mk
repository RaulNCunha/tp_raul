##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=TP_Raul
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/adole/Documents/PDS2
ProjectPath            :=C:/Users/adole/Documents/PDS2/TP_Raul
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=adole
Date                   :=25/11/2018
CodeLitePath           :="D:/Arquivos de Programas/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
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
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="TP_Raul.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Arquivos de Programas\CodeLite
Objects0=$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(ObjectSuffix) $(IntermediateDirectory)/funcao_le_arquivo.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(ObjectSuffix) $(IntermediateDirectory)/openFileException.cpp$(ObjectSuffix) $(IntermediateDirectory)/funcao_get_palavra.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(ObjectSuffix): TESTES_UNITARIOS.cpp $(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/TESTES_UNITARIOS.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(DependSuffix): TESTES_UNITARIOS.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(DependSuffix) -MM TESTES_UNITARIOS.cpp

$(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(PreprocessSuffix): TESTES_UNITARIOS.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TESTES_UNITARIOS.cpp$(PreprocessSuffix) TESTES_UNITARIOS.cpp

$(IntermediateDirectory)/funcao_le_arquivo.cpp$(ObjectSuffix): funcao_le_arquivo.cpp $(IntermediateDirectory)/funcao_le_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/funcao_le_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/funcao_le_arquivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/funcao_le_arquivo.cpp$(DependSuffix): funcao_le_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/funcao_le_arquivo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/funcao_le_arquivo.cpp$(DependSuffix) -MM funcao_le_arquivo.cpp

$(IntermediateDirectory)/funcao_le_arquivo.cpp$(PreprocessSuffix): funcao_le_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/funcao_le_arquivo.cpp$(PreprocessSuffix) funcao_le_arquivo.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(ObjectSuffix): funcao_get_nome_arquivo.cpp $(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/funcao_get_nome_arquivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(DependSuffix): funcao_get_nome_arquivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(DependSuffix) -MM funcao_get_nome_arquivo.cpp

$(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(PreprocessSuffix): funcao_get_nome_arquivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/funcao_get_nome_arquivo.cpp$(PreprocessSuffix) funcao_get_nome_arquivo.cpp

$(IntermediateDirectory)/openFileException.cpp$(ObjectSuffix): openFileException.cpp $(IntermediateDirectory)/openFileException.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/openFileException.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/openFileException.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/openFileException.cpp$(DependSuffix): openFileException.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/openFileException.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/openFileException.cpp$(DependSuffix) -MM openFileException.cpp

$(IntermediateDirectory)/openFileException.cpp$(PreprocessSuffix): openFileException.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/openFileException.cpp$(PreprocessSuffix) openFileException.cpp

$(IntermediateDirectory)/funcao_get_palavra.cpp$(ObjectSuffix): funcao_get_palavra.cpp $(IntermediateDirectory)/funcao_get_palavra.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/adole/Documents/PDS2/TP_Raul/funcao_get_palavra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/funcao_get_palavra.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/funcao_get_palavra.cpp$(DependSuffix): funcao_get_palavra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/funcao_get_palavra.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/funcao_get_palavra.cpp$(DependSuffix) -MM funcao_get_palavra.cpp

$(IntermediateDirectory)/funcao_get_palavra.cpp$(PreprocessSuffix): funcao_get_palavra.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/funcao_get_palavra.cpp$(PreprocessSuffix) funcao_get_palavra.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


