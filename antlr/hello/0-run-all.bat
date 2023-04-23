@REM integration version

@REM delete generated files first
del src /Q

@REM generate the token files
java -jar ..\antlr-4.12.0-complete.jar -o .\src  Hello.g4

@REM compile generated java files
javac .\src\*.java -cp ..\antlr-4.12.0-complete.jar

@REM execute with classpath, there are three options
@REM 1. -tokens
@REM java -cp ".\src;..\antlr-4.12.0-complete.jar" org.antlr.v4.gui.TestRig  Hello r -tokens

@REM 2. -tree
@REM java -cp ".\src;..\antlr-4.12.0-complete.jar" org.antlr.v4.gui.TestRig  Hello r -tree

@REM 3. -gui
java -cp ".\src;..\antlr-4.12.0-complete.jar" org.antlr.v4.gui.TestRig  Hello r -gui


@REM deprecated old ways
@REM java -cp ..\..\antlr-4.12.0-complete.jar org.antlr.v4.runtime.misc.TestRig  Hello r -tokens

