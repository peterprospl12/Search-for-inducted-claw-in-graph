#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;


void search_for_claw(int** graph_array, int num_of_tops) {
    int neighb_counter = 0;
    bool claw = false;
    for (int i = 0; i < num_of_tops; i++) {
        for (int j = 0; j < num_of_tops; j++) {
            if (graph_array[i][j] == 1) {
				neighb_counter++;
			}
	    }
        if (neighb_counter > 2) {
           int solo_counter = 0;
            for (int k = 0; k < num_of_tops; k++) {
                
                if (graph_array[i][k] == 1) {
                    int neighb_counter2 = 0;
                    for (int z = 0; z < num_of_tops; z++) {
                        
                        if (graph_array[k][z] == 1) {
                            neighb_counter2++;
                        }
                    }

                    if (neighb_counter2 <= 1) {
						claw = true;
                    }


                }
               

            }
            if (claw) {
                cout << "0" << endl;
                return;
            }


        }
        neighb_counter = 0;
   }
    cout << "1" << endl;
    


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

        for (int k = 0; k < num_of_tops; k++) {
            for (int l = 0; l < num_of_tops; l++) {
                cout << graph_array[k][l] << " ";
            }
            cout << endl;
        }

        search_for_claw(graph_array, num_of_tops);


        for (int n = 0; n < num_of_tops; n++) {
            delete graph_array[n];
        }
        delete[] graph_array;
    }


}