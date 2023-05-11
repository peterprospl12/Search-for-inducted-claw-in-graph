#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;


void search_for_claw(int** graph_array, int num_of_tops) {
    bool claw = false;
    for (int i = 0; i < num_of_tops; i++) {
        int neighb_counter = 0;

        for (int j = 0; j < num_of_tops; j++) {
            if (graph_array[i][j] == 1) {
                neighb_counter++;
            }   
        }
       
        
        
        if (neighb_counter > 2) {   
            int couter = 0;
            int* neighb_tab = new int[neighb_counter];
            for (int j = 0; j < num_of_tops; j++) {
                if (graph_array[i][j] == 1) {
                    neighb_tab[couter] = j;
                    couter++;
                }
            }



            for (int x = 0; x < neighb_counter; x++) {
               
                for (int y = 0; y < neighb_counter; y++) {
                    
                    for (int z = 0; z < neighb_counter; z++) {
                        if (x != y && x != z && y != z) {
                            if (graph_array[neighb_tab[x]][neighb_tab[z]] == 0 && graph_array[neighb_tab[x]][neighb_tab[y]] == 0 && graph_array[neighb_tab[y]][neighb_tab[z]] == 0) {
                                claw = true;
                                break;
                            }

                        }
                    }
                    if (claw) {
                        break;
                    }
                
                }
                if (claw) {
                    break;
                }
            
            }

            delete[] neighb_tab;
            if (claw)
                break;

            
        }
    }

    if (claw) {
        cout << "0" << endl;
        return;
    }
    else {
        cout << "1" << endl;
        return;
    }

}






int main() {

    int num_of_graphs;
    std::string numbers;
    cin >> num_of_graphs;

    int num_of_tops;

    for (int i = 0; i < num_of_graphs; i++) {
        int counter = 0;
        cin >> num_of_tops;
        cin >> numbers;

        int** graph_array = new int* [num_of_tops];
        for (int j = 0; j < num_of_tops; j++) {
            graph_array[j] = new int[num_of_tops];
        }




        for (int k = 0; k < num_of_tops; k++) {
            for (int l = 0; l < num_of_tops; l++) {
                graph_array[k][l] = numbers[counter] - '0';
                counter++;
            }
        }

       

        search_for_claw(graph_array, num_of_tops);


        for (int n = 0; n < num_of_tops; n++) {
            delete graph_array[n];
        }
        delete[] graph_array;
    }


}   
