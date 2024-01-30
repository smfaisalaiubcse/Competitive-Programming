#include <iostream>
#include <string.h>
using namespace std;

// Global array to store the number of children for each node in the syntax tree
int children_counter[50];

int main()
{
    // Declaration of various variables
    int syntax_tree_root, start_variable, top_rule, left_variable;
    int input_token_index, statement_index;
    string input_token;
    char statement[7];

    // Array of grammar rules
    char grammar_rules[6][11] = {"A->BCDEDF.", "B->i.", "C->=.", "D->i.", "E->+.", "F->;."};

    // Arrays for variable replacement and syntax tree
    char variable_replacer[50];
    char syntax_tree[50];

    int var_replacer_looper;

    // Initializing arrays with '.'
    for (var_replacer_looper = 0; var_replacer_looper < 50; var_replacer_looper++)
    {
        syntax_tree[var_replacer_looper] = '.';
        variable_replacer[var_replacer_looper] = '.';
    }

    // User input for an input token
    cout << "Enter the input token:";
    getline(cin, input_token);

    // Display the entered token
    cout << "The entered token was:" << input_token << endl;

    // Initialize indices for processing input token
    statement_index = 0;

    // Extract variables from the input token and store them in the statement array
    for (input_token_index = 0; input_token_index < input_token.length(); input_token_index++)
    {
        if (input_token[input_token_index] == '<')
        {
            statement[statement_index] = input_token[input_token_index + 1];
            cout << statement[statement_index] << endl;
            statement_index++;
        }
    }

    // Initialize variables for the syntax analyzer
    syntax_tree_root = 0;
    start_variable = 0;
    top_rule = 0;
    left_variable = 0;

    // Set the root of the syntax tree and store the corresponding variable in the variable_replacer array
    syntax_tree[syntax_tree_root] = grammar_rules[top_rule][left_variable];
    cout << syntax_tree[syntax_tree_root] << endl;

    variable_replacer[start_variable] = grammar_rules[top_rule][left_variable];
    cout << variable_replacer[start_variable] << endl;

    // Initialize various indices and counters
    int variable_replacer_current_index = 0;
    int syntax_tree_current_index = 1;
    int statement_matcher_index = 0;
    int current_parent = 0;
    int last_index = 0;
    int syntax_error_break = 0;

    int iteration = 1;

    // Main loop to build the syntax tree
    while (true)
    {
        // Display iteration information
        cout << endl << "Iteration: " << iteration;
        cout << endl << "****" << endl;
        cout << endl << "Variable Replacer Current Index" << variable_replacer_current_index;
        cout << endl << "Current Parent" << current_parent;
        cout << endl << "Syntax Tree Current Index" << syntax_tree_current_index << endl;

        // Find the rule related to the current variable in the variable_replacer array
        int grammar_rule_number, rule_right_side_copier_index, copy_flag;

        for (grammar_rule_number = 0; grammar_rule_number < 6; grammar_rule_number++)
        {
            if (grammar_rules[grammar_rule_number][left_variable] == variable_replacer[variable_replacer_current_index])
            {
                // Initialize copying process
                copy_flag = 0;

                // Copy the right-hand side of the grammar rule to the syntax tree
                for (rule_right_side_copier_index = 0; grammar_rules[grammar_rule_number][rule_right_side_copier_index] != '.'; rule_right_side_copier_index++)
                {
                    if (grammar_rules[grammar_rule_number][rule_right_side_copier_index] == '>')
                    {
                        copy_flag = 1;
                        continue;
                    }

                    if (copy_flag == 1)
                    {
                        // Update syntax tree and variable_replacer arrays
                        children_counter[current_parent]++;
                        syntax_tree[syntax_tree_current_index] = grammar_rules[grammar_rule_number][rule_right_side_copier_index];
                        syntax_tree_current_index++;
                        variable_replacer[variable_replacer_current_index] = grammar_rules[grammar_rule_number][rule_right_side_copier_index];

                        // Check for syntax errors
                        if (variable_replacer[variable_replacer_current_index] == 'i' || variable_replacer[variable_replacer_current_index] == '=' || variable_replacer[variable_replacer_current_index] == '+' || variable_replacer[variable_replacer_current_index] == ';')
                        {
                            if (variable_replacer[variable_replacer_current_index] == statement[statement_matcher_index])
                            {
                                cout << endl << "No Syntax Error So Far" << endl;
                                statement_matcher_index++;
                            }
                            else
                            {
                                cout << endl << "Syntax Error in " << statement[statement_matcher_index] << endl;
                                syntax_error_break = 1;
                                break;
                            }
                        }

                        variable_replacer_current_index++;
                    }
                }

                if (copy_flag == 1 || syntax_error_break == 1)
                    break;
            }
        }

        if (syntax_error_break == 1)
            break;

        // Update indices and counters for the next iteration
        cout << "Variable Replacer after copy: " << variable_replacer_current_index << endl;
        variable_replacer_current_index = last_index;

        int variable_replacer_traverser;
        for (variable_replacer_traverser = last_index; variable_replacer_traverser < 50; variable_replacer_traverser++)
        {
            if (variable_replacer[variable_replacer_traverser] == 'i' || variable_replacer[variable_replacer_traverser] == '=' || variable_replacer[variable_replacer_traverser] == '+' || variable_replacer[variable_replacer_traverser] == ';')
            {
                last_index = last_index + 1;
                variable_replacer_current_index = last_index;
            }

            if (variable_replacer[variable_replacer_traverser] != 'i' && variable_replacer[variable_replacer_traverser] != '=' && variable_replacer[variable_replacer_traverser] != '+' && variable_replacer[variable_replacer_traverser] != ';')
                break;
        }

        current_parent = current_parent + 1;
        cout << endl << "-----" << endl;
        cout << endl << "Variable Replacer Current Index" << variable_replacer_current_index;
        cout << endl << "Current Parent" << current_parent;
        cout << endl << "Syntax Tree Current Index" << syntax_tree_current_index;

        int m, break_flag = 1;
        for (m = 0; variable_replacer[m] != '.'; m++)
        {
            if (variable_replacer[m] != 'i' && variable_replacer[m] != '=' && variable_replacer[m] != '+' && variable_replacer[m] != ';')
                break_flag = 0;
        }

        if (break_flag == 1)
            break;

        iteration = iteration + 1;
    }

    // Display the syntax tree, variable replacer, and children counter
    int loop_counter;
    cout << endl << "Syntax Tree :" << endl;
    for (loop_counter = 0; loop_counter < 50; loop_counter++)
    {
        cout << syntax_tree[loop_counter] << endl;
    }

    cout << "Variable Replacer :" << endl;
    for (loop_counter = 0; loop_counter < 50; loop_counter++)
    {
        cout << variable_replacer[loop_counter] << endl;
    }

    cout << "Children Counter :" << endl;
    for (loop_counter = 0; loop_counter < 50; loop_counter++)
    {
        cout << children_counter[loop_counter] << endl;
    }

    return 0;
}
