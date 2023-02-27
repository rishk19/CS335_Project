%{
#include <stdio.h>
int yyerror(char *s);
int yylex();
extern FILE *yyin;


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token GreaterThan LessThan Comma LeftCurlyBrace RightCurlyBrace Semicolon
%token __EMPTY__


%%

CompilationUnit : 
    OrdinaryCompilationUnit {

    }
    | ModularCompilationUnit {

    }

ModularCompilationUnit :
    __EMPTY__

OrdinaryCompilationUnit : 
    |TopLevelClassOrInterfaceDeclaration  OrdinaryCompilationUnit{

    }

TopLevelClassOrInterfaceDeclaration :
    ClassDeclaration {

    }
    | InterfaceDeclaration {

    }

ClassDeclaration :
    NormalClassDeclaration {

    }



NormalClassDeclaration : 
    ClassModifier_nt Class TypeIdentifier TypeParamaters_nt ClassExtends_nt ClassImplements_nt ClassPermits_nt ClassBody {

    }

ClassModifier_nt :
    | ClassModifier ClassModifier_nt

TypeParamaters_nt :
    | TypeParameters

ClassExtends_nt :
    | ClassExtends

ClassImplements_nt :
    | ClassImplements

ClassPermits_nt :
    | ClassPermits



ClassModifier :
    Annotation
    | Public
    | Private
    | Protected
    | Abstract
    | Static
    | Final
    | Sealed
    | Non_sealed
    | Strictfp


TypeParameters :
    GreaterThan TypeParameterList LessThan

TypeParameterList :
    Typeparameter Typerparameter_extender

Typerparameter_extender :
    | Comma TypeParameter Typerparameter_extender 


ClassExtends : 
    Extends ClassType

ClassImplements :
    Implements InterfaceTypeList



InterfaceTypeList :
    InterfaceType InterfaceType_extender

InterfaceType_extender : 
    | Comma InterfaceType InterfaceType_extender



ClassPermits :
    Permits TypeName TypeName_extender

TypeName_extender :
    | Comma TypeName TypeName_extender


ClassBody :
    LeftCurlyBrace ClassBodyDeclaration_nt RightCurlyBrace

ClassBodyDeclaration_nt :
    | ClassBodyDeclaration ClassBodyDeclaration_nt

ClassBodyDeclaration :
    ClassMemberDeclaration
    | InstanceInitializer
    | StaticInitializer
    | ConstructorDeclaration

ClassMemberDeclaration :
    FieldDeclaration
    | MethodDeclaration
    | ClassDeclaration
    | InterfaceDeclaration
    | Semicolon

FieldDeclaration :
    FieldModifier_nt UannType VariableDeclaratorList Semicolon

FieldModifier_nt :
    | FieldModifier FieldModifier_nt

FieldModifier :
    Annotation
    | Public
    | Protected
    | Private
    | Static
    | Final
    | Transient
    | Volatile

VariableDeclaratorList :
    VariableDeclarator VariableDeclarator_extender

VariableDeclarator_extender :
    | Comma VariableDeclarator VariableDeclarator_extender

VariableDeclarator :
    VariableDeclaratorId VariableInitializer_extender

VariableInitializer_extender :
    | 

%%



