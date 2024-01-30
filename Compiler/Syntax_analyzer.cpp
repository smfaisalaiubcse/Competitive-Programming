#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int syntax_tree_root, start_variable, top_rule, left_variable;
    int input_token_index, statement_index;
    string input_token;
    char statement[10];

    char grammar_rules[10][20] = {{"A->BCDEDF."},
                                    {"B->i."}, 
                                    {"C->=."}, 
                                    {"D->i."}, 
                                    {"E->+."}, 
                                    {"F->;."}
                                };

    vector<char> variable_replacer(50, ' ');
    vector<char> syntax_tree(50, ' ');
    vector<int> children_counter(50); 

    cout << "Enter the input token:";
    getline(cin, input_token);

    cout << "The entered token was:" << input_token << endl;

    statement_index = 0;

    for (input_token_index = 0; input_token_index < input_token.length(); input_token_index++) {
        if (input_token[input_token_index] == '<') 
            statement[statement_index++] = input_token[input_token_index + 1];        
    }
    cout << "Statement is: ";
    for(statement_index=0;statement_index<7;statement_index++)
        cout<<statement[statement_index];
    cout << "\n-----------------------------------" << endl;

    syntax_tree_root = 0;
    start_variable = 0;
    top_rule = 0;
    left_variable = 0;

    syntax_tree[syntax_tree_root] = grammar_rules[top_rule][left_variable];

    variable_replacer[start_variable] = grammar_rules[top_rule][left_variable];

    int variable_replacer_current_index = 0;
    int syntax_tree_current_index = 1;
    int statement_matcher_index = 0;
    // loop until all the leaf nodes in the syntax tree are terminals
    while (true) {
        // find out the rule related to the variable in the variable
        // variable_replacer
        int grammar_rule_number, rule_right_side_copier_index, copy_flag, parent;
        int temp = 20;
        while(temp--) {
            //I used here extra while loop because we may need one grammer multiple time so each time we have to start from 
            //searching from the first rule to last
            for (int grammar_rule_number = 0; grammar_rule_number < 10; grammar_rule_number++)
            {
                if (grammar_rules[grammar_rule_number][left_variable] == variable_replacer[variable_replacer_current_index]) {
                    copy_flag = 0;
                    //I used here extra checking becasue previously this code cant able to store children counter for
                    //correct parents
                    if(syntax_tree_current_index == 1) //for the first time the parent is syntax_tree_current_index - 1
                    //but this logic is not applicable when syntax_tree_current_index > 1 it is not right to minus 1
                        parent = syntax_tree_current_index - 1;
                    else { //here i am checking if children counters last index is 0 or not, if 0 we should move forward 
                        if(children_counter.back() == 0)
                            parent++;
                        else parent = syntax_tree_current_index; //else we should move to syntax trees current index
                    }
                        
                    for (rule_right_side_copier_index = 0; grammar_rules[grammar_rule_number][rule_right_side_copier_index] != '.'; rule_right_side_copier_index++) {
                        //the loop will terminate if it find '.' that means the rule is end
                        if (grammar_rules[grammar_rule_number][rule_right_side_copier_index] == '>') {
                        //if we find '>' that means from the next index it is the right part of the rules
                            copy_flag = 1;
                            continue;
                        }

                        if (copy_flag == 1) {
                        //means from here we will copy the right part of the rules
                            children_counter[parent]++;
                            syntax_tree[syntax_tree_current_index] =
                                grammar_rules[grammar_rule_number][rule_right_side_copier_index];
                            syntax_tree_current_index++;
                            variable_replacer[variable_replacer_current_index] =
                                grammar_rules[grammar_rule_number][rule_right_side_copier_index];
                            variable_replacer_current_index++;
                        }
                    }
                } 
            }
            
        }


        variable_replacer_current_index = 0;
        //we are checking only for the expression i = i + i ; If we found characters other than that we should stop the program
        //by a message "Syntax error"
        if (variable_replacer[variable_replacer_current_index] == 'i' ||
            variable_replacer[variable_replacer_current_index] == '=' ||
            variable_replacer[variable_replacer_current_index] == '+' ||
            variable_replacer[variable_replacer_current_index] == ';') {
            if (variable_replacer[variable_replacer_current_index] ==
                statement[statement_matcher_index]) {
                variable_replacer_current_index++;
                statement_matcher_index++;
            } else
                cout << "Syntax Error";
        }
        // if our variable replacer is matched with statement then we reached our goal and stop the program
        int break_flag = 0;
        if (variable_replacer[0] == 'i' && variable_replacer[1] == '=' &&
            variable_replacer[2] == 'i' &&  variable_replacer[3] == '+' &&
            variable_replacer[4] == 'i' && variable_replacer[5] == ';')
            break_flag = 1;

        cout << "Variable Replacer: ";
        for (int i = 0; i < 50; i++) {
            cout << variable_replacer[i] << " ";
        }
        cout << endl;
        cout << "Syntax tree: ";
        for (int i = 0; i < 50; i++) {
            cout << syntax_tree[i] << " ";
        }
        cout << endl;
        cout << "Children Counter: ";
        for (int i = 0; i < 7; i++) {
            cout << children_counter[i] << " ";
        }
        cout << "\n---------------------------------" << endl;
        if (break_flag == 1) break;
    }

    return 0;
}
