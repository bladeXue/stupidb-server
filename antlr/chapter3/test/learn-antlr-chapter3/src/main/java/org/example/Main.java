package org.example;

import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;
import org.example.recognizer.ArrayInitLexer;
import org.example.recognizer.ArrayInitParser;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
//        testParser();
        testListener();
    }

    public static void testParser() throws IOException {
        ANTLRInputStream in = new ANTLRInputStream(System.in);
        ArrayInitLexer lexer = new ArrayInitLexer(in);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        ArrayInitParser parser = new ArrayInitParser(tokens);
        ParseTree tree = parser.init();
        System.out.println(tree.toStringTree(parser));
    }

    public static void testListener() throws IOException {
        // 注意本条的输入语句不能嵌套，比如是例如{1,2,3}
        ANTLRInputStream in = new ANTLRInputStream(System.in);
        ArrayInitLexer lexer = new ArrayInitLexer(in);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        ArrayInitParser parser = new ArrayInitParser(tokens);
        ParseTree tree = parser.init();

        // walker
        ParseTreeWalker walker = new ParseTreeWalker();
        // apply listener
        walker.walk(new ShortToUnicodeString(), tree);

        System.out.println(" ");
    }
}
