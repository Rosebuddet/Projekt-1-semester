//
// Created by Gustav on 18-11-2022.
//

#ifndef P1___TRAIN_VS_PLANES_SCAN_DATA_H
#define P1___TRAIN_VS_PLANES_SCAN_DATA_H

//Makes the variable usable in other files that have included Scan_data.h//
extern int array_size;
int max_value(int a, int b);
int file_array_size(int choose_file);
void data_reader(int time_array[array_size][array_size],int size_of_array, int units,int choose_file);
void print_array(int time_array[array_size][array_size],int size_of_array);
void plane_reader (int time_array[array_size][array_size],int size_of_array);


#endif //P1___TRAIN_VS_PLANES_SCAN_DATA_H
