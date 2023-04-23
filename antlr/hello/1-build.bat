@REM generate the token files
java -jar ..\antlr-4.12.0-complete.jar -o .\src  Hello.g4

@REM if need a visitor mode
@REM java -jar ..\antlr-4.12.0-complete.jar -o .\src  Hello.g4 -visitor

