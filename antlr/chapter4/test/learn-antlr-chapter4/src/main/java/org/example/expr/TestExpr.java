package org.example.expr;

import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.example.expr.recognizer.ExprLexer;
import org.example.expr.recognizer.ExprParser;

import java.io.*;
import java.net.URL;

public class TestExpr {

    public void test() throws IOException {

        File file = new File("src\\main\\resources\\t.expr");
        InputStream is = new FileInputStream(file);

        ANTLRInputStream input = new ANTLRInputStream(is);
        ExprLexer lexer = new ExprLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        ExprParser parser = new ExprParser(tokens);

        ParseTree tree = parser.prog();
        System.out.println(tree.toStringTree(parser));
    }
}
